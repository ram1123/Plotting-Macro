#include "controlplotvars_test.h"
#include "utils.C" // Tokenize

TTreeReader * ReadFiles(TString inputFile, TString TreeName)
{
  TChain * chain = new TChain(TreeName);

  chain->AddFile( inputFile );

  TTreeReader * reader = new TTreeReader(chain);
  return reader;
}

void TreeReaderCompare_Two(){

  // Create a canvas
  auto c1 = new TCanvas("c1");

  TString inputFile1 = "/uscms/home/rasharma/nobackup/double-higgs/GenSIMAnalyzer/CMSSW_10_2_22/src/GEN-SIM-analyzer/GenAnalyzer/Radion_hh_narrow_M260_LHEBqrk.root";
  TString inputFile2 = "/uscms/home/rasharma/nobackup/double-higgs/GenSIMAnalyzer/CMSSW_10_2_22/src/GEN-SIM-analyzer/GenAnalyzer/Radion_hh_narrow_M270_LHEBqrk.root";
  TString TreeName = "otree";

  std::vector<TString> LegendString;
  LegendString.push_back("M260");
  LegendString.push_back("M270");

  TTreeReader *myReader1 = ReadFiles(inputFile1, TreeName);
  TTree * myReaderTree1 = myReader1->GetTree();
  myReaderTree1->SetBranchStatus("*",0);
  TTreeReader *myReader2 = ReadFiles(inputFile2, TreeName);
  TTree * myReaderTree2 = myReader2->GetTree();
  myReaderTree2->SetBranchStatus("*",0);

  std::vector<const char*> variable;
  std::vector<int> SetLegend;
  std::vector<int> SetLegendPosition;
  std::vector<TH1F*> vectorOfTH1F1;
  std::vector<TH1F*> vectorOfTH1F2;
  std::vector<TTreeReaderValue<double>> vtree1;
  std::vector<TTreeReaderValue<double>> vtree2;
  std::vector<TTreeReaderValue<double>> cutBranches;
  std::vector<TString> outFileName;

  for (int ivar=0; ; ivar++)
  {
    plotVar_t pv = commonplotvars_test[ivar];
    if ( !pv.plotvar.Length() ) break;

    variable.push_back(pv.plotvar);
    SetLegend.push_back(pv.drawleg);
    SetLegendPosition.push_back(pv.LegPosition);

    TH1F* tempHist1 = new TH1F(pv.plotvar+"_1", ";"+pv.xlabel+";", pv.NBINS, pv.MINRange, pv.MAXRange);
    tempHist1->SetStats(0);
    tempHist1->SetLineColor(1);
    TH1F* tempHist2 = new TH1F(pv.plotvar+"_2", ";"+pv.xlabel+";", pv.NBINS, pv.MINRange, pv.MAXRange);
    tempHist2->SetStats(0);
    tempHist2->SetLineColor(2);

    outFileName.push_back(pv.outfile);

    vectorOfTH1F1.push_back(tempHist1);
    vectorOfTH1F2.push_back(tempHist2);

    myReaderTree1->SetBranchStatus(pv.plotvar,1);
    TTreeReaderValue<double> tempTreeBranch1 = {*myReader1,pv.plotvar};
    vtree1.push_back(tempTreeBranch1);

    myReaderTree2->SetBranchStatus(pv.plotvar,1);
    TTreeReaderValue<double> tempTreeBranch2 = {*myReader2,pv.plotvar};
    vtree2.push_back(tempTreeBranch2);
  }

  // Loop over all entries of the TTree or TChain.
  while (myReader1->Next()) {
    {
      for (int i = 0; i < variable.size(); ++i)
      {
        // if (*vtree[i]<100)
        vectorOfTH1F1[i]->Fill(*vtree1[i]);
      }
    }
  }
  // Loop over all entries of the TTree or TChain.
  // while (myReader2.Next()) {
  while (myReader2->Next()) {
      for (int i = 0; i < variable.size(); ++i)
      {
        // if (*vtree[i]<100)
        vectorOfTH1F2[i]->Fill(*vtree2[i]);
      }
  }
   for (int i = 0; i < variable.size(); ++i)
   {
      float HistXmax = vectorOfTH1F1[i]->GetMaximum();
      std::cout<< "HistXmax = " << HistXmax << std::endl;
      HistXmax = vectorOfTH1F2[i]->GetMaximum();
      std::cout<< "HistXmax = " << HistXmax << std::endl;      
      // vectorOfTH1F1[i]->SetMaximum()

      (vectorOfTH1F1[i]->GetMaximum() > vectorOfTH1F2[i]->GetMaximum()) ? vectorOfTH1F1[i]->SetMaximum(vectorOfTH1F1[i]->GetMaximum()*1.5) : vectorOfTH1F1[i]->SetMaximum(vectorOfTH1F2[i]->GetMaximum()*1.5);

      vectorOfTH1F1[i]->Draw();
      vectorOfTH1F2[i]->Draw("same");
      float xmin = 0.1, xmax = 0.7, ymin = 0.48, ymax = 0.9;
      // if (SetLegendPosition[i]==0)  /* Left */
      // {
      //   xmin = 0.4; xmax = 0.9; ymin = 0.48;  ymax = 0.9;
      // }
      // if (SetLegendPosition[i]==1) /* Center */
      // {
      //   xmin = 0.6; xmax = 0.9; ymin = 0.48;  ymax = 0.9;
      // }
      // if (SetLegendPosition[i]==2)  /* Right  */
      // {
      //   xmin = 0.1; xmax = 0.7; ymin = 0.48;  ymax = 0.9;
      // }                
      // TLegend *legend = new TLegend(xmin, xmax, ymin, ymax);
      TLegend *legend = new TLegend(0.1, 0.7, 0.48, 0.9);
      legend->AddEntry(vectorOfTH1F1[i],LegendString[0]);
      legend->AddEntry(vectorOfTH1F2[i],LegendString[1]);
      if (SetLegend[i]) 
      {
      std::cout << "Set legend: " << SetLegend[i] << "\t" << SetLegendPosition[i] << std::endl;
      legend->Draw();
      }

      c1->SaveAs(outFileName[i]+".png");
      c1->SaveAs(outFileName[i]+".pdf");
      c1->Clear();
   }

}
