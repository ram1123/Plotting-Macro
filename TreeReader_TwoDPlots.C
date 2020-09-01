#include "variableToRead/variables_test_2D.h"
#include "interface/utils.C" // Tokenize

void TreeReader_TwoDPlots(TString InputFile = "test.txt"){

  // Create a canvas
  auto c1 = new TCanvas("c1","c1",1000,800);

  // Open the file containing the tree.
   InputFile = "/uscms/home/rasharma/nobackup/double-higgs/GenSIMAnalyzer/CMSSW_10_2_22/src/GEN-SIM-analyzer/GenAnalyzer/Radion_hh_narrow_M260_LHEBqrk.root";
   // InputFile = "/uscms/home/rasharma/nobackup/double-higgs/GenSIMAnalyzer/CMSSW_10_2_22/src/GEN-SIM-analyzer/GenAnalyzer/Radion_hh_narrow_M270_LHEBqrk.root";
   // InputFile = "/uscms/home/rasharma/nobackup/double-higgs/GenSIMAnalyzer/CMSSW_10_2_22/src/GEN-SIM-analyzer/GenAnalyzer/Radion_hh_narrow_M500_LHEBqrk.root";
   // InputFile = "/uscms/home/rasharma/nobackup/double-higgs/GenSIMAnalyzer/CMSSW_10_2_22/src/GEN-SIM-analyzer/GenAnalyzer/Radion_hh_narrow_M1000_LHEBqrk.root";
   // InputFile = "/uscms/home/rasharma/nobackup/double-higgs/GenSIMAnalyzer/CMSSW_10_2_22/src/GEN-SIM-analyzer/GenAnalyzer/Radion_hh_narrow_M1500_LHEBqrk.root";
  
  //------------------------------------------
  //  Grab Filename short string
  vector<string> fields;
  Tokenize((string)InputFile,fields, "/");
  string FileName = fields[fields.size()-1];
  fields.clear();
  Tokenize(FileName,fields,"_");
  TString title = fields[3];  // This should give use M260 kind of string
  // std::cout << "lenght of title: " << title.Length() << endl;
  if (title.Length()==4) title.ReplaceAll("M","M0");
  //------------------------------------------

  auto myFile = TFile::Open(InputFile);
  if (myFile->IsZombie()) 
  {
    std::cout << "Seems like input file is corrupt. Please check intput file." << std::endl;
    exit(0);    
  }

  // Create a TTreeReader for the tree.
  TTreeReader myReader("otree", myFile);

  std::vector<const char*> variable;
  std::vector<TH2F*> vectorOfTH2F;
  std::vector<TTreeReaderValue<double>> vtree1;
  std::vector<TTreeReaderValue<double>> vtree2;
  std::vector<TTreeReaderValue<double>> cutBranches;
  std::vector<TString> outFileName;

  for (int ivar=0; ; ivar++)
  {
    plotVar_t pv = commonplotvars_test_2d[ivar];
    if ( !pv.plotvar1.Length() ) break;

    variable.push_back(pv.plotvar1);

    TH2F* tempHist = new TH2F(pv.plotvar1, ";"+pv.xlabel1+";"+pv.xlabel2+";", pv.NBINS1, pv.MINRange1, pv.MAXRange1, pv.NBINS2, pv.MINRange2, pv.MAXRange2);
    tempHist->SetStats(0);
    // tempHist->CenterTitle();
    // tempHist->GetXaxis()->CenterTitle();

    outFileName.push_back(pv.outfile);

    vectorOfTH2F.push_back(tempHist);

    TTreeReaderValue<double> tempTreeBranch1 = {myReader,pv.plotvar1};
    TTreeReaderValue<double> tempTreeBranch2 = {myReader,pv.plotvar2};
    vtree1.push_back(tempTreeBranch1);
    vtree2.push_back(tempTreeBranch2);
  }

  // Loop over all entries of the TTree or TChain.
  while (myReader.Next()) {
    {
      for (int i = 0; i < vectorOfTH2F.size(); ++i)
      {
        // if (*vtree[i]<100)
        vectorOfTH2F[i]->Fill(*vtree1[i],*vtree2[i]);
      }
    }
  }

   for (int i = 0; i < vectorOfTH2F.size(); ++i)
   {
      c1->SetRightMargin(0.15);
      c1->SetLeftMargin(0.10);
      c1->SetTopMargin(0.05);
      vectorOfTH2F[i]->GetYaxis()->SetTitleOffset(1.25);
      // vectorOfTH2F[i]->GetXaxis()->CenterTitle();
      vectorOfTH2F[i]->Scale(1./vectorOfTH2F[i]->GetEntries());
      vectorOfTH2F[i]->Draw("colz");

      // c1->SaveAs(outFileName[i]+"_"+title+".png");
      c1->SaveAs("TwoDPlots/"+outFileName[i]+"_"+title+".png");
      c1->SaveAs("TwoDPlots/"+outFileName[i]+"_"+title+".pdf");
      // c1->SetLogy(1);
      // c1->SaveAs("TwoDPlots/"+outFileName[i]+"_"+title+"_log.pdf");
      c1->SetLogy(0);
      c1->Clear();
   }

}
