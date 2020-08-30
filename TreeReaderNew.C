#include "controlplotvars_CHS.h"

void TreeReaderNew(){

// Create a canvas
   auto c1 = new TCanvas("c1");

// Open the file containing the tree.
   auto myFile = TFile::Open("/uscms/home/rasharma/nobackup/double-higgs/GenSIMAnalyzer/CMSSW_10_2_22/src/GEN-SIM-analyzer/GenAnalyzer/Radion_hh_narrow_M270_LHEBqrk.root");
  

// commonplotvars_chs
  // const plotVar_t plotvars[] = commonplotvars_chs;

  //============================================================
  //  VARIABLE LOOP
  //============================================================

  for (int ivar=0; ; ivar++)
  {
   plotVar_t pv = commonplotvars_chs[ivar];
   if ( !pv.plotvar.Length() ) break;

   std::cout << "plotvar: " << pv.plotvar << ",\t" << pv.xlabel << ",\t" << pv.NBINS << ",\t" << pv.MINRange << ",\t" << pv.MAXRange << ", slog:" << pv.slog << std::endl;
  }

// Create a TTreeReader for the tree.
   TTreeReader myReader("otree", myFile);

// Create a vector to handle the variables to plot from TTree
   std::vector<const char*> variable;

   variable.push_back("OneAK8TwoAK4_minMass_ReconsH_dR_H1");
   variable.push_back("OneAK8TwoAK4_minMass_ReconsH_dR_H2");
   variable.push_back("gen_leading_photon_Pt");
   variable.push_back("gen_leading_photon_Eta");
   variable.push_back("gen_leading_photon_Phi");

// Create a histogram.
   std::vector<TH1F*> vectorOfTH1F;

   for (int i = 0; i < variable.size(); ++i)
   {
      TString hname;
      hname.Form("h1_%s",variable[i]);
      TH1F* tempHist = new TH1F(hname,hname,100,-3,25);
      vectorOfTH1F.push_back(tempHist);
   }

// The branch "px" contains floats; access them as DR_H1.
   std::vector<TTreeReaderValue<double>> vtree;

   for (int i = 0; i < variable.size(); ++i)
   {
      TTreeReaderValue<double> test = {myReader,variable[i]};
      vtree.push_back(test);
   }

// Loop over all entries of the TTree or TChain.
   while (myReader.Next()) {
      // Just access the data as if DR_H1 and DR_H2 were iterators (note the '*'in front of them):
      for (int i = 0; i < vectorOfTH1F.size(); ++i)
      {
         vectorOfTH1F[i]->Fill(*vtree[i]);
      }
   }

   for (int i = 0; i < vectorOfTH1F.size(); ++i)
   {
      vectorOfTH1F[i]->Draw();

      // concanate variable name and .png/.pdf
      char result[100];
      const char * png = ".png";
      strcpy(result,variable[i]);
      strcat(result,png);

      c1->SaveAs(result);
      c1->Clear();
   }

}
