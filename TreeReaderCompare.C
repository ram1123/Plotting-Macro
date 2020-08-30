#include "controlplotvars_CHS.h"
#include "utils.C" // Tokenize

void TreeReaderCompare(){

  // Create a canvas
  auto c1 = new TCanvas("c1");
  std::vector<TString> LegendString;

  // Open the file containing the tree.
  auto myFile1 = TFile::Open("/uscms/home/rasharma/nobackup/double-higgs/GenSIMAnalyzer/CMSSW_10_2_22/src/GEN-SIM-analyzer/GenAnalyzer/Radion_hh_narrow_M270_LHEBqrk.root");
  if (myFile1->IsZombie()) 
  {
    std::cout << "Seems like input file is corrupt. Please check intput file." << std::endl;
    exit(0);    
  }
  LegendString.push_back("M270");
  auto myFile2 = TFile::Open("/uscms/home/rasharma/nobackup/double-higgs/GenSIMAnalyzer/CMSSW_10_2_22/src/GEN-SIM-analyzer/GenAnalyzer/Radion_hh_narrow_M260_LHEBqrk.root");
  if (myFile2->IsZombie()) 
  {
    std::cout << "Seems like input file is corrupt. Please check intput file." << std::endl;
    exit(0);    
  }
  LegendString.push_back("M260");
  // Create a TTreeReader for the tree.
  TTreeReader myReader1("otree", myFile1);
  TTreeReader myReader2("otree", myFile2);

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
    plotVar_t pv = commonplotvars_chs[ivar];
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

    TTreeReaderValue<double> tempTreeBranch1 = {myReader1,pv.plotvar};
    TTreeReaderValue<double> tempTreeBranch2 = {myReader2,pv.plotvar};
    vtree1.push_back(tempTreeBranch1);
    vtree2.push_back(tempTreeBranch2);
  }

  // Loop over all entries of the TTree or TChain.
  while (myReader1.Next()) {
    {
      for (int i = 0; i < variable.size(); ++i)
      {
        // if (*vtree[i]<100)
        vectorOfTH1F1[i]->Fill(*vtree1[i]);
      }
    }
  }
  // Loop over all entries of the TTree or TChain.
  while (myReader2.Next()) {
    {
      for (int i = 0; i < variable.size(); ++i)
      {
        // if (*vtree[i]<100)
        vectorOfTH1F2[i]->Fill(*vtree2[i]);
      }
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