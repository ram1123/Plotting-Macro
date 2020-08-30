#include "controlplotvars_genParticls.h"
#include "controlplotvars_AllResolvedAk4.h"
#include "utils.C" // Tokenize

// TODO: 
//  1. add runtime information.

TTreeReader * ReadFiles(TString inputFile, TString TreeName)
{
  TChain * chain = new TChain(TreeName);

  chain->AddFile( inputFile );

  TTreeReader * reader = new TTreeReader(chain);
  return reader;
}

void TreeReaderCompare_Five(const plotVar_t plotvars[] = commonplotvars_genParticles)
{

  // Create a canvas
  auto c1 = new TCanvas("c1");

  TString inputFile1 = "/uscms/home/rasharma/nobackup/double-higgs/GenSIMAnalyzer/CMSSW_10_2_22/src/GEN-SIM-analyzer/GenAnalyzer/Radion_hh_narrow_M260_LHEBqrk.root";
  TString inputFile2 = "/uscms/home/rasharma/nobackup/double-higgs/GenSIMAnalyzer/CMSSW_10_2_22/src/GEN-SIM-analyzer/GenAnalyzer/Radion_hh_narrow_M270_LHEBqrk.root";
  TString inputFile3 = "/uscms/home/rasharma/nobackup/double-higgs/GenSIMAnalyzer/CMSSW_10_2_22/src/GEN-SIM-analyzer/GenAnalyzer/Radion_hh_narrow_M500_LHEBqrk.root";
  TString inputFile4 = "/uscms/home/rasharma/nobackup/double-higgs/GenSIMAnalyzer/CMSSW_10_2_22/src/GEN-SIM-analyzer/GenAnalyzer/Radion_hh_narrow_M1000_LHEBqrk.root";
  TString inputFile5 = "/uscms/home/rasharma/nobackup/double-higgs/GenSIMAnalyzer/CMSSW_10_2_22/src/GEN-SIM-analyzer/GenAnalyzer/Radion_hh_narrow_M1500_LHEBqrk.root";
  TString TreeName = "otree";

  std::vector<TString> LegendString;
  LegendString.push_back("M260");
  LegendString.push_back("M270");
  LegendString.push_back("M500");
  LegendString.push_back("M1000");
  LegendString.push_back("M1500");

  TTreeReader *myReader1 = ReadFiles(inputFile1, TreeName);
  TTree * myReaderTree1 = myReader1->GetTree();
  myReaderTree1->SetBranchStatus("*",0);

  TTreeReader *myReader2 = ReadFiles(inputFile2, TreeName);
  TTree * myReaderTree2 = myReader2->GetTree();
  myReaderTree2->SetBranchStatus("*",0);

  TTreeReader *myReader3 = ReadFiles(inputFile3, TreeName);
  TTree * myReaderTree3 = myReader3->GetTree();
  myReaderTree3->SetBranchStatus("*",0);

  TTreeReader *myReader4 = ReadFiles(inputFile4, TreeName);
  TTree * myReaderTree4 = myReader4->GetTree();
  myReaderTree4->SetBranchStatus("*",0);

  TTreeReader *myReader5 = ReadFiles(inputFile5, TreeName);
  TTree * myReaderTree5 = myReader5->GetTree();
  myReaderTree5->SetBranchStatus("*",0);

  std::vector<const char*> variable;
  std::vector<int> SetLegend;
  std::vector<int> SetLegendPosition;
  std::vector<TH1F*> vectorOfTH1F1;
  std::vector<TH1F*> vectorOfTH1F2;
  std::vector<TH1F*> vectorOfTH1F3;
  std::vector<TH1F*> vectorOfTH1F4;
  std::vector<TH1F*> vectorOfTH1F5;
  std::vector<TTreeReaderValue<double>> vtree1;
  std::vector<TTreeReaderValue<double>> vtree2;
  std::vector<TTreeReaderValue<double>> vtree3;
  std::vector<TTreeReaderValue<double>> vtree4;
  std::vector<TTreeReaderValue<double>> vtree5;
  std::vector<TTreeReaderValue<double>> cutBranches;
  std::vector<TString> outFileName;

  for (int ivar=0; ; ivar++)
  {
    plotVar_t pv = plotvars[ivar];
    if ( !pv.plotvar.Length() ) break;

    variable.push_back(pv.plotvar);
    SetLegend.push_back(pv.drawleg);
    SetLegendPosition.push_back(pv.LegPosition);

    TH1F* tempHist1 = new TH1F(pv.plotvar+"_1", ";"+pv.xlabel+";", pv.NBINS, pv.MINRange, pv.MAXRange);
    tempHist1->SetStats(0);
    tempHist1->SetLineColor(1);
    tempHist1->SetLineWidth(2.0);

    TH1F* tempHist2 = new TH1F(pv.plotvar+"_2", ";"+pv.xlabel+";", pv.NBINS, pv.MINRange, pv.MAXRange);
    tempHist2->SetStats(0);
    tempHist2->SetLineColor(2);
    tempHist2->SetLineWidth(2.0);

    TH1F* tempHist3 = new TH1F(pv.plotvar+"_3", ";"+pv.xlabel+";", pv.NBINS, pv.MINRange, pv.MAXRange);
    tempHist3->SetStats(0);
    tempHist3->SetLineColor(3);
    tempHist3->SetLineWidth(2.0);

    TH1F* tempHist4 = new TH1F(pv.plotvar+"_4", ";"+pv.xlabel+";", pv.NBINS, pv.MINRange, pv.MAXRange);
    tempHist4->SetStats(0);
    tempHist4->SetLineColor(4);
    tempHist4->SetLineWidth(2.0);

    TH1F* tempHist5 = new TH1F(pv.plotvar+"_5", ";"+pv.xlabel+";", pv.NBINS, pv.MINRange, pv.MAXRange);
    tempHist5->SetStats(0);
    tempHist5->SetLineColor(6);
    tempHist5->SetLineWidth(2.0);

    outFileName.push_back(pv.outfile);

    vectorOfTH1F1.push_back(tempHist1);
    vectorOfTH1F2.push_back(tempHist2);
    vectorOfTH1F3.push_back(tempHist3);
    vectorOfTH1F4.push_back(tempHist4);
    vectorOfTH1F5.push_back(tempHist5);

    myReaderTree1->SetBranchStatus(pv.plotvar,1);
    TTreeReaderValue<double> tempTreeBranch1 = {*myReader1,pv.plotvar};
    vtree1.push_back(tempTreeBranch1);

    myReaderTree2->SetBranchStatus(pv.plotvar,1);
    TTreeReaderValue<double> tempTreeBranch2 = {*myReader2,pv.plotvar};
    vtree2.push_back(tempTreeBranch2);

    myReaderTree3->SetBranchStatus(pv.plotvar,1);
    TTreeReaderValue<double> tempTreeBranch3 = {*myReader3,pv.plotvar};
    vtree3.push_back(tempTreeBranch3);
  
    myReaderTree4->SetBranchStatus(pv.plotvar,1);
    TTreeReaderValue<double> tempTreeBranch4 = {*myReader4,pv.plotvar};
    vtree4.push_back(tempTreeBranch4);  

    myReaderTree5->SetBranchStatus(pv.plotvar,1);
    TTreeReaderValue<double> tempTreeBranch5 = {*myReader5,pv.plotvar};
    vtree5.push_back(tempTreeBranch5);    
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
  while (myReader2->Next()) {
      for (int i = 0; i < variable.size(); ++i)
      {
        // if (*vtree[i]<100)
        vectorOfTH1F2[i]->Fill(*vtree2[i]);
      }
  }
  // Loop over all entries of the TTree or TChain.
  while (myReader3->Next()) {
      for (int i = 0; i < variable.size(); ++i)
      {
        // if (*vtree[i]<100)
        vectorOfTH1F3[i]->Fill(*vtree3[i]);
      }
  }
  // Loop over all entries of the TTree or TChain.
  while (myReader4->Next()) {
      for (int i = 0; i < variable.size(); ++i)
      {
        // if (*vtree[i]<100)
        vectorOfTH1F4[i]->Fill(*vtree4[i]);
      }
  }  
  // Loop over all entries of the TTree or TChain.
  while (myReader5->Next()) {
      for (int i = 0; i < variable.size(); ++i)
      {
        // if (*vtree[i]<100)
        vectorOfTH1F5[i]->Fill(*vtree5[i]);
      }
  } 

  for (int i = 0; i < variable.size(); ++i)
  {
    float HistXmax = vectorOfTH1F1[i]->GetMaximum();

    if (HistXmax < vectorOfTH1F2[i]->GetMaximum()) HistXmax = vectorOfTH1F2[i]->GetMaximum();
    if (HistXmax < vectorOfTH1F3[i]->GetMaximum()) HistXmax = vectorOfTH1F3[i]->GetMaximum();
    if (HistXmax < vectorOfTH1F4[i]->GetMaximum()) HistXmax = vectorOfTH1F4[i]->GetMaximum();
    if (HistXmax < vectorOfTH1F5[i]->GetMaximum()) HistXmax = vectorOfTH1F5[i]->GetMaximum();

    vectorOfTH1F1[i]->SetMaximum(HistXmax*1.5);
    if (HistXmax < 1.0) vectorOfTH1F1[i]->SetMaximum(HistXmax*2.5);

    // Normalize histos to unity
    vectorOfTH1F1[i]->Scale(1/vectorOfTH1F1[i]->GetEntries());    
    vectorOfTH1F2[i]->Scale(1/vectorOfTH1F2[i]->GetEntries());    
    vectorOfTH1F3[i]->Scale(1/vectorOfTH1F3[i]->GetEntries());    
    vectorOfTH1F4[i]->Scale(1/vectorOfTH1F4[i]->GetEntries());    
    vectorOfTH1F5[i]->Scale(1/vectorOfTH1F5[i]->GetEntries());    

    // Draw all histograms
    vectorOfTH1F1[i]->Draw("hist");
    vectorOfTH1F2[i]->Draw("histsame");
    vectorOfTH1F3[i]->Draw("histsame");
    vectorOfTH1F4[i]->Draw("histsame");
    vectorOfTH1F5[i]->Draw("histsame");
    // float xmin = 0.1, xmax = 0.7, ymin = 0.48, ymax = 0.9;
    float xmin = 0.6, xmax = 0.9, ymin = 0.48, ymax = 0.9;
    if (SetLegendPosition[i]==0)  /* Left */
    {
      cout << "Left" << endl;
      xmin = 0.1; xmax = 0.4; ymin = 0.48;  ymax = 0.9;
    }
    if (SetLegendPosition[i]==1) /* Center */
    {
      cout << "Center" << endl;
      xmin = 0.4; xmax = 0.7; ymin = 0.48;  ymax = 0.9;
    }
    if (SetLegendPosition[i]==2)  /* Right  */
    {
      cout << "Right" << endl;
      xmin = 0.6; xmax = 0.9; ymin = 0.48;  ymax = 0.9;
    }                
    TLegend *legend = new TLegend(xmin, ymin, xmax, ymax);
    // TLegend *legend = new TLegend(0.1, 0.7, 0.48, 0.9);
    legend->AddEntry(vectorOfTH1F1[i],LegendString[0]);
    legend->AddEntry(vectorOfTH1F2[i],LegendString[1]);
    legend->AddEntry(vectorOfTH1F3[i],LegendString[2]);
    legend->AddEntry(vectorOfTH1F4[i],LegendString[3]);
    legend->AddEntry(vectorOfTH1F4[i],LegendString[4]);
    if (SetLegend[i]) 
    {
    std::cout << "Set legend: " << SetLegend[i] << "\t" << SetLegendPosition[i] << std::endl;
    legend->Draw();
    }

    c1->SaveAs("plots/"+outFileName[i]+".png");
    c1->SaveAs("plots/"+outFileName[i]+".pdf");
    c1->SetLogy(1);
    // c1->SaveAs("plots/Log/"+outFileName[i]+"_log.png");
    c1->SaveAs("plots/"+outFileName[i]+"_log.pdf");
    c1->SetLogy(0);
    c1->Clear();
  }
}