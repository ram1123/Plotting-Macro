//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Sep 29 04:29:31 2021 by ROOT version 6.14/09
// from TTree Events/Events
// found on file: GluGluToRadionToHHTo2G4Q_M1000.root
//////////////////////////////////////////////////////////

#ifndef Events_h
#define Events_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class Events {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          run;
   UInt_t          ls;
   ULong64_t       evt;
   Float_t         nPV;
   Float_t         nPU_mean;
   Float_t         genWeight;
   Float_t         puWeight;
   Float_t         puWeight_Up;
   Float_t         puWeight_Down;
   Float_t         L1PFWeight;
   Float_t         L1PFWeight_Up;
   Float_t         L1PFWeight_Down;
   Int_t           nScaleWeight;
   Int_t           nPdfWeight;
   Int_t           nAqgcWeight;
   Float_t         scaleWeight[1];   //[nScaleWeight]
   Float_t         pdfWeight[1];   //[nPdfWeight]
   Float_t         aqgcWeight[1];   //[nAqgcWeight]
   Bool_t          is_tZq;
   Int_t           nAK4Jet30;
   Int_t           nAK4Jet50;
   Int_t           nGoodAK4jets;
   Int_t           nAK4Btag_loose;
   Int_t           nAK4Btag_medium;
   Int_t           nAK4Btag_tight;
   Float_t         btagWeight_loose;
   Float_t         btagWeight_loose_Up;
   Float_t         btagWeight_loose_Down;
   Float_t         btagWeight_medium;
   Float_t         btagWeight_medium_Up;
   Float_t         btagWeight_medium_Down;
   Float_t         btagWeight_tight;
   Float_t         btagWeight_tight_Up;
   Float_t         btagWeight_tight_Down;
   Bool_t          trigger_1Mu;
   Bool_t          trigger_2Mu;
   Bool_t          trigger_1El;
   Bool_t          trigger_2El;
   Bool_t          isAntiIso;
   Float_t         lepFakeRate;
   Float_t         lep1_pt;
   Float_t         lep1_eta;
   Float_t         lep1_phi;
   Float_t         lep1_m;
   Float_t         lep1_q;
   Float_t         lep1_iso;
   Float_t         lep1_dxy;
   Float_t         lep1_dz;
   Float_t         lep1_idEffWeight;
   Float_t         lep1_trigEffWeight;
   Float_t         lep1_pt_scaleUp;
   Float_t         lep1_pt_scaleDown;
   Float_t         lep2_pt;
   Float_t         lep2_eta;
   Float_t         lep2_phi;
   Float_t         lep2_m;
   Float_t         lep2_q;
   Float_t         lep2_iso;
   Float_t         lep2_dxy;
   Float_t         lep2_dz;
   Float_t         lep2_idEffWeight;
   Float_t         lep2_trigEffWeight;
   Float_t         lep2_pt_scaleUp;
   Float_t         lep2_pt_scaleDown;
   Float_t         dilep_m;
   Float_t         dilep_mt;
   Float_t         dilep_pt;
   Float_t         dilep_eta;
   Float_t         dilep_phi;
   Float_t         dilep_m_jesFlavorQCDUp;
   Float_t         dilep_m_jesFlavorQCDDown;
   Float_t         dilep_m_jesRelativeBalUp;
   Float_t         dilep_m_jesRelativeBalDown;
   Float_t         dilep_m_jesHFUp;
   Float_t         dilep_m_jesHFDown;
   Float_t         dilep_m_jesBBEC1Up;
   Float_t         dilep_m_jesBBEC1Down;
   Float_t         dilep_m_jesEC2Up;
   Float_t         dilep_m_jesEC2Down;
   Float_t         dilep_m_jesAbsoluteUp;
   Float_t         dilep_m_jesAbsoluteDown;
   Float_t         dilep_m_jesBBEC1_YearUp;
   Float_t         dilep_m_jesBBEC1_YearDown;
   Float_t         dilep_m_jesEC2_YearUp;
   Float_t         dilep_m_jesEC2_YearDown;
   Float_t         dilep_m_jesAbsolute_YearUp;
   Float_t         dilep_m_jesAbsolute_YearDown;
   Float_t         dilep_m_jesHF_YearUp;
   Float_t         dilep_m_jesHF_YearDown;
   Float_t         dilep_m_jesRelativeSample_YearUp;
   Float_t         dilep_m_jesRelativeSample_YearDown;
   Float_t         dilep_m_jesTotalUp;
   Float_t         dilep_m_jesTotalDown;
   Float_t         dilep_mt_jesFlavorQCDUp;
   Float_t         dilep_mt_jesFlavorQCDDown;
   Float_t         dilep_mt_jesRelativeBalUp;
   Float_t         dilep_mt_jesRelativeBalDown;
   Float_t         dilep_mt_jesHFUp;
   Float_t         dilep_mt_jesHFDown;
   Float_t         dilep_mt_jesBBEC1Up;
   Float_t         dilep_mt_jesBBEC1Down;
   Float_t         dilep_mt_jesEC2Up;
   Float_t         dilep_mt_jesEC2Down;
   Float_t         dilep_mt_jesAbsoluteUp;
   Float_t         dilep_mt_jesAbsoluteDown;
   Float_t         dilep_mt_jesBBEC1_YearUp;
   Float_t         dilep_mt_jesBBEC1_YearDown;
   Float_t         dilep_mt_jesEC2_YearUp;
   Float_t         dilep_mt_jesEC2_YearDown;
   Float_t         dilep_mt_jesAbsolute_YearUp;
   Float_t         dilep_mt_jesAbsolute_YearDown;
   Float_t         dilep_mt_jesHF_YearUp;
   Float_t         dilep_mt_jesHF_YearDown;
   Float_t         dilep_mt_jesRelativeSample_YearUp;
   Float_t         dilep_mt_jesRelativeSample_YearDown;
   Float_t         dilep_mt_jesTotalUp;
   Float_t         dilep_mt_jesTotalDown;
   Float_t         dilep_pt_jesFlavorQCDUp;
   Float_t         dilep_pt_jesFlavorQCDDown;
   Float_t         dilep_pt_jesRelativeBalUp;
   Float_t         dilep_pt_jesRelativeBalDown;
   Float_t         dilep_pt_jesHFUp;
   Float_t         dilep_pt_jesHFDown;
   Float_t         dilep_pt_jesBBEC1Up;
   Float_t         dilep_pt_jesBBEC1Down;
   Float_t         dilep_pt_jesEC2Up;
   Float_t         dilep_pt_jesEC2Down;
   Float_t         dilep_pt_jesAbsoluteUp;
   Float_t         dilep_pt_jesAbsoluteDown;
   Float_t         dilep_pt_jesBBEC1_YearUp;
   Float_t         dilep_pt_jesBBEC1_YearDown;
   Float_t         dilep_pt_jesEC2_YearUp;
   Float_t         dilep_pt_jesEC2_YearDown;
   Float_t         dilep_pt_jesAbsolute_YearUp;
   Float_t         dilep_pt_jesAbsolute_YearDown;
   Float_t         dilep_pt_jesHF_YearUp;
   Float_t         dilep_pt_jesHF_YearDown;
   Float_t         dilep_pt_jesRelativeSample_YearUp;
   Float_t         dilep_pt_jesRelativeSample_YearDown;
   Float_t         dilep_pt_jesTotalUp;
   Float_t         dilep_pt_jesTotalDown;
   Float_t         dilep_m_scaleUp;
   Float_t         dilep_m_scaleDown;
   Float_t         dilep_mt_scaleUp;
   Float_t         dilep_mt_scaleDown;
   Float_t         dilep_pt_scaleUp;
   Float_t         dilep_pt_scaleDown;
   Float_t         pho1_pt;
   Float_t         pho1_eta;
   Float_t         pho1_phi;
   Float_t         pho1_m;
   Float_t         pho1_q;
   Float_t         pho1_iso;
   Float_t         pho1_dxy;
   Float_t         pho1_dz;
   Float_t         pho1_idEffWeight;
   Float_t         pho1_E;
   Float_t         pho1_pt_byMgg;
   Float_t         pho1_E_byMgg;
   Float_t         pho1_pt_scaleUp;
   Float_t         pho1_pt_scaleDn;
   Float_t         pho2_pt;
   Float_t         pho2_eta;
   Float_t         pho2_phi;
   Float_t         pho2_m;
   Float_t         pho2_q;
   Float_t         pho2_iso;
   Float_t         pho2_dxy;
   Float_t         pho2_dz;
   Float_t         pho2_idEffWeight;
   Float_t         pho2_E;
   Float_t         pho2_pt_byMgg;
   Float_t         pho2_E_byMgg;
   Float_t         pho2_pt_scaleUp;
   Float_t         pho2_pt_scaleDn;
   Float_t         diphoton_m;
   Float_t         diphoton_pt;
   Float_t         diphoton_eta;
   Float_t         diphoton_phi;
   Float_t         diphoton_E;
   Float_t         diphoton_m_scaleUp;
   Float_t         diphoton_m_scaleDn;
   Float_t         diphoton_pt_scaleUp;
   Float_t         diphoton_pt_scaleDn;
   Float_t         pho1_mvaID_Fall17V1p1;
   Float_t         pho2_mvaID_Fall17V1p1;
   Float_t         pho1_mvaID_WP80;
   Float_t         pho2_mvaID_WP80;
   Float_t         pho1_mvaID_WP90;
   Float_t         pho2_mvaID_WP90;
   Float_t         pho1_mvaIDFall17V1;
   Float_t         pho1_mvaIDFall17V2;
   Float_t         pho2_mvaIDFall17V1;
   Float_t         pho2_mvaIDFall17V2;
   Float_t         Higgs_LHE_leading_pt;
   Float_t         Higgs_LHE_leading_eta;
   Float_t         Higgs_LHE_leading_phi;
   Float_t         Higgs_LHE_leading_mass;
   Float_t         Higgs_LHE_leading_E;
   Float_t         Higgs_LHE_Subleading_pt;
   Float_t         Higgs_LHE_Subleading_eta;
   Float_t         Higgs_LHE_Subleading_phi;
   Float_t         Higgs_LHE_Subleading_mass;
   Float_t         Higgs_LHE_Subleading_E;
   Float_t         Higgs_LHE_dihiggs_mass;
   Float_t         MET;
   Float_t         MET_phi;
   Float_t         MET_2017;
   Float_t         MET_jesFlavorQCDUp;
   Float_t         MET_jesFlavorQCDDown;
   Float_t         MET_jesRelativeBalUp;
   Float_t         MET_jesRelativeBalDown;
   Float_t         MET_jesHFUp;
   Float_t         MET_jesHFDown;
   Float_t         MET_jesBBEC1Up;
   Float_t         MET_jesBBEC1Down;
   Float_t         MET_jesEC2Up;
   Float_t         MET_jesEC2Down;
   Float_t         MET_jesAbsoluteUp;
   Float_t         MET_jesAbsoluteDown;
   Float_t         MET_jesBBEC1_YearUp;
   Float_t         MET_jesBBEC1_YearDown;
   Float_t         MET_jesEC2_YearUp;
   Float_t         MET_jesEC2_YearDown;
   Float_t         MET_jesAbsolute_YearUp;
   Float_t         MET_jesAbsolute_YearDown;
   Float_t         MET_jesHF_YearUp;
   Float_t         MET_jesHF_YearDown;
   Float_t         MET_jesRelativeSample_YearUp;
   Float_t         MET_jesRelativeSample_YearDown;
   Float_t         MET_jesTotalUp;
   Float_t         MET_jesTotalDown;
   Float_t         MET_phi_jesFlavorQCDUp;
   Float_t         MET_phi_jesFlavorQCDDown;
   Float_t         MET_phi_jesRelativeBalUp;
   Float_t         MET_phi_jesRelativeBalDown;
   Float_t         MET_phi_jesHFUp;
   Float_t         MET_phi_jesHFDown;
   Float_t         MET_phi_jesBBEC1Up;
   Float_t         MET_phi_jesBBEC1Down;
   Float_t         MET_phi_jesEC2Up;
   Float_t         MET_phi_jesEC2Down;
   Float_t         MET_phi_jesAbsoluteUp;
   Float_t         MET_phi_jesAbsoluteDown;
   Float_t         MET_phi_jesBBEC1_YearUp;
   Float_t         MET_phi_jesBBEC1_YearDown;
   Float_t         MET_phi_jesEC2_YearUp;
   Float_t         MET_phi_jesEC2_YearDown;
   Float_t         MET_phi_jesAbsolute_YearUp;
   Float_t         MET_phi_jesAbsolute_YearDown;
   Float_t         MET_phi_jesHF_YearUp;
   Float_t         MET_phi_jesHF_YearDown;
   Float_t         MET_phi_jesRelativeSample_YearUp;
   Float_t         MET_phi_jesRelativeSample_YearDown;
   Float_t         MET_phi_jesTotalUp;
   Float_t         MET_phi_jesTotalDown;
   Float_t         neu_pz_type0;
   Float_t         FullyResolved_allAK4JetsSum_pt;
   Float_t         FullyResolved_Jet1_pt;
   Float_t         FullyResolved_Jet2_pt;
   Float_t         FullyResolved_Jet3_pt;
   Float_t         FullyResolved_Jet4_pt;
   Float_t         FullyResolved_Jet1_eta;
   Float_t         FullyResolved_Jet2_eta;
   Float_t         FullyResolved_Jet3_eta;
   Float_t         FullyResolved_Jet4_eta;
   Float_t         FullyResolved_Jet1_phi;
   Float_t         FullyResolved_Jet2_phi;
   Float_t         FullyResolved_Jet3_phi;
   Float_t         FullyResolved_Jet4_phi;
   Float_t         FullyResolved_Jet1_E;
   Float_t         FullyResolved_Jet2_E;
   Float_t         FullyResolved_Jet3_E;
   Float_t         FullyResolved_Jet4_E;
   Float_t         FullyResolved_Jet1_M;
   Float_t         FullyResolved_Jet2_M;
   Float_t         FullyResolved_Jet3_M;
   Float_t         FullyResolved_Jet4_M;
   Float_t         FullyResolved_TwoLeadingJets_pt;
   Float_t         FullyResolved_TwoLeadingJets_eta;
   Float_t         FullyResolved_TwoLeadingJets_phi;
   Float_t         FullyResolved_TwoLeadingJets_m;
   Float_t         FullyResolved_TwoLeadingJets_E;
   Float_t         FullyResolved_ThirdFourthJets_pt;
   Float_t         FullyResolved_ThirdFourthJets_eta;
   Float_t         FullyResolved_ThirdFourthJets_phi;
   Float_t         FullyResolved_ThirdFourthJets_m;
   Float_t         FullyResolved_ThirdFourthJets_E;
   Float_t         FullyResolved_FourJets_pt;
   Float_t         FullyResolved_FourJets_eta;
   Float_t         FullyResolved_FourJets_phi;
   Float_t         FullyResolved_FourJets_m;
   Float_t         FullyResolved_FourJets_E;
   Float_t         FullyResolved_Radion_pt;
   Float_t         FullyResolved_Radion_eta;
   Float_t         FullyResolved_Radion_phi;
   Float_t         FullyResolved_Radion_m;
   Float_t         FullyResolved_Radion_E;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_ls;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_nPU_mean;   //!
   TBranch        *b_genWeight;   //!
   TBranch        *b_puWeight;   //!
   TBranch        *b_puWeight_Up;   //!
   TBranch        *b_puWeight_Down;   //!
   TBranch        *b_L1PFWeight;   //!
   TBranch        *b_L1PFWeight_Up;   //!
   TBranch        *b_L1PFWeight_Down;   //!
   TBranch        *b_nScaleWeight;   //!
   TBranch        *b_nPdfWeight;   //!
   TBranch        *b_nAqgcWeight;   //!
   TBranch        *b_scaleWeight;   //!
   TBranch        *b_pdfWeight;   //!
   TBranch        *b_aqgcWeight;   //!
   TBranch        *b_is_tZq;   //!
   TBranch        *b_nAK4Jet30;   //!
   TBranch        *b_nAK4Jet50;   //!
   TBranch        *b_nGoodAK4jets;   //!
   TBranch        *b_nAK4Btag_loose;   //!
   TBranch        *b_nAK4Btag_medium;   //!
   TBranch        *b_nAK4Btag_tight;   //!
   TBranch        *b_btagWeight_loose;   //!
   TBranch        *b_btagWeight_loose_Up;   //!
   TBranch        *b_btagWeight_loose_Down;   //!
   TBranch        *b_btagWeight_medium;   //!
   TBranch        *b_btagWeight_medium_Up;   //!
   TBranch        *b_btagWeight_medium_Down;   //!
   TBranch        *b_btagWeight_tight;   //!
   TBranch        *b_btagWeight_tight_Up;   //!
   TBranch        *b_btagWeight_tight_Down;   //!
   TBranch        *b_trigger_1Mu;   //!
   TBranch        *b_trigger_2Mu;   //!
   TBranch        *b_trigger_1El;   //!
   TBranch        *b_trigger_2El;   //!
   TBranch        *b_isAntiIso;   //!
   TBranch        *b_lepFakeRate;   //!
   TBranch        *b_lep1_pt;   //!
   TBranch        *b_lep1_eta;   //!
   TBranch        *b_lep1_phi;   //!
   TBranch        *b_lep1_m;   //!
   TBranch        *b_lep1_q;   //!
   TBranch        *b_lep1_iso;   //!
   TBranch        *b_lep1_dxy;   //!
   TBranch        *b_lep1_dz;   //!
   TBranch        *b_lep1_idEffWeight;   //!
   TBranch        *b_lep1_trigEffWeight;   //!
   TBranch        *b_lep1_pt_scaleUp;   //!
   TBranch        *b_lep1_pt_scaleDown;   //!
   TBranch        *b_lep2_pt;   //!
   TBranch        *b_lep2_eta;   //!
   TBranch        *b_lep2_phi;   //!
   TBranch        *b_lep2_m;   //!
   TBranch        *b_lep2_q;   //!
   TBranch        *b_lep2_iso;   //!
   TBranch        *b_lep2_dxy;   //!
   TBranch        *b_lep2_dz;   //!
   TBranch        *b_lep2_idEffWeight;   //!
   TBranch        *b_lep2_trigEffWeight;   //!
   TBranch        *b_lep2_pt_scaleUp;   //!
   TBranch        *b_lep2_pt_scaleDown;   //!
   TBranch        *b_dilep_m;   //!
   TBranch        *b_dilep_mt;   //!
   TBranch        *b_dilep_pt;   //!
   TBranch        *b_dilep_eta;   //!
   TBranch        *b_dilep_phi;   //!
   TBranch        *b_dilep_m_jesFlavorQCDUp;   //!
   TBranch        *b_dilep_m_jesFlavorQCDDown;   //!
   TBranch        *b_dilep_m_jesRelativeBalUp;   //!
   TBranch        *b_dilep_m_jesRelativeBalDown;   //!
   TBranch        *b_dilep_m_jesHFUp;   //!
   TBranch        *b_dilep_m_jesHFDown;   //!
   TBranch        *b_dilep_m_jesBBEC1Up;   //!
   TBranch        *b_dilep_m_jesBBEC1Down;   //!
   TBranch        *b_dilep_m_jesEC2Up;   //!
   TBranch        *b_dilep_m_jesEC2Down;   //!
   TBranch        *b_dilep_m_jesAbsoluteUp;   //!
   TBranch        *b_dilep_m_jesAbsoluteDown;   //!
   TBranch        *b_dilep_m_jesBBEC1_YearUp;   //!
   TBranch        *b_dilep_m_jesBBEC1_YearDown;   //!
   TBranch        *b_dilep_m_jesEC2_YearUp;   //!
   TBranch        *b_dilep_m_jesEC2_YearDown;   //!
   TBranch        *b_dilep_m_jesAbsolute_YearUp;   //!
   TBranch        *b_dilep_m_jesAbsolute_YearDown;   //!
   TBranch        *b_dilep_m_jesHF_YearUp;   //!
   TBranch        *b_dilep_m_jesHF_YearDown;   //!
   TBranch        *b_dilep_m_jesRelativeSample_YearUp;   //!
   TBranch        *b_dilep_m_jesRelativeSample_YearDown;   //!
   TBranch        *b_dilep_m_jesTotalUp;   //!
   TBranch        *b_dilep_m_jesTotalDown;   //!
   TBranch        *b_dilep_mt_jesFlavorQCDUp;   //!
   TBranch        *b_dilep_mt_jesFlavorQCDDown;   //!
   TBranch        *b_dilep_mt_jesRelativeBalUp;   //!
   TBranch        *b_dilep_mt_jesRelativeBalDown;   //!
   TBranch        *b_dilep_mt_jesHFUp;   //!
   TBranch        *b_dilep_mt_jesHFDown;   //!
   TBranch        *b_dilep_mt_jesBBEC1Up;   //!
   TBranch        *b_dilep_mt_jesBBEC1Down;   //!
   TBranch        *b_dilep_mt_jesEC2Up;   //!
   TBranch        *b_dilep_mt_jesEC2Down;   //!
   TBranch        *b_dilep_mt_jesAbsoluteUp;   //!
   TBranch        *b_dilep_mt_jesAbsoluteDown;   //!
   TBranch        *b_dilep_mt_jesBBEC1_YearUp;   //!
   TBranch        *b_dilep_mt_jesBBEC1_YearDown;   //!
   TBranch        *b_dilep_mt_jesEC2_YearUp;   //!
   TBranch        *b_dilep_mt_jesEC2_YearDown;   //!
   TBranch        *b_dilep_mt_jesAbsolute_YearUp;   //!
   TBranch        *b_dilep_mt_jesAbsolute_YearDown;   //!
   TBranch        *b_dilep_mt_jesHF_YearUp;   //!
   TBranch        *b_dilep_mt_jesHF_YearDown;   //!
   TBranch        *b_dilep_mt_jesRelativeSample_YearUp;   //!
   TBranch        *b_dilep_mt_jesRelativeSample_YearDown;   //!
   TBranch        *b_dilep_mt_jesTotalUp;   //!
   TBranch        *b_dilep_mt_jesTotalDown;   //!
   TBranch        *b_dilep_pt_jesFlavorQCDUp;   //!
   TBranch        *b_dilep_pt_jesFlavorQCDDown;   //!
   TBranch        *b_dilep_pt_jesRelativeBalUp;   //!
   TBranch        *b_dilep_pt_jesRelativeBalDown;   //!
   TBranch        *b_dilep_pt_jesHFUp;   //!
   TBranch        *b_dilep_pt_jesHFDown;   //!
   TBranch        *b_dilep_pt_jesBBEC1Up;   //!
   TBranch        *b_dilep_pt_jesBBEC1Down;   //!
   TBranch        *b_dilep_pt_jesEC2Up;   //!
   TBranch        *b_dilep_pt_jesEC2Down;   //!
   TBranch        *b_dilep_pt_jesAbsoluteUp;   //!
   TBranch        *b_dilep_pt_jesAbsoluteDown;   //!
   TBranch        *b_dilep_pt_jesBBEC1_YearUp;   //!
   TBranch        *b_dilep_pt_jesBBEC1_YearDown;   //!
   TBranch        *b_dilep_pt_jesEC2_YearUp;   //!
   TBranch        *b_dilep_pt_jesEC2_YearDown;   //!
   TBranch        *b_dilep_pt_jesAbsolute_YearUp;   //!
   TBranch        *b_dilep_pt_jesAbsolute_YearDown;   //!
   TBranch        *b_dilep_pt_jesHF_YearUp;   //!
   TBranch        *b_dilep_pt_jesHF_YearDown;   //!
   TBranch        *b_dilep_pt_jesRelativeSample_YearUp;   //!
   TBranch        *b_dilep_pt_jesRelativeSample_YearDown;   //!
   TBranch        *b_dilep_pt_jesTotalUp;   //!
   TBranch        *b_dilep_pt_jesTotalDown;   //!
   TBranch        *b_dilep_m_scaleUp;   //!
   TBranch        *b_dilep_m_scaleDown;   //!
   TBranch        *b_dilep_mt_scaleUp;   //!
   TBranch        *b_dilep_mt_scaleDown;   //!
   TBranch        *b_dilep_pt_scaleUp;   //!
   TBranch        *b_dilep_pt_scaleDown;   //!
   TBranch        *b_pho1_pt;   //!
   TBranch        *b_pho1_eta;   //!
   TBranch        *b_pho1_phi;   //!
   TBranch        *b_pho1_m;   //!
   TBranch        *b_pho1_q;   //!
   TBranch        *b_pho1_iso;   //!
   TBranch        *b_pho1_dxy;   //!
   TBranch        *b_pho1_dz;   //!
   TBranch        *b_pho1_idEffWeight;   //!
   TBranch        *b_pho1_E;   //!
   TBranch        *b_pho1_pt_byMgg;   //!
   TBranch        *b_pho1_E_byMgg;   //!
   TBranch        *b_pho1_pt_scaleUp;   //!
   TBranch        *b_pho1_pt_scaleDn;   //!
   TBranch        *b_pho2_pt;   //!
   TBranch        *b_pho2_eta;   //!
   TBranch        *b_pho2_phi;   //!
   TBranch        *b_pho2_m;   //!
   TBranch        *b_pho2_q;   //!
   TBranch        *b_pho2_iso;   //!
   TBranch        *b_pho2_dxy;   //!
   TBranch        *b_pho2_dz;   //!
   TBranch        *b_pho2_idEffWeight;   //!
   TBranch        *b_pho2_E;   //!
   TBranch        *b_pho2_pt_byMgg;   //!
   TBranch        *b_pho2_E_byMgg;   //!
   TBranch        *b_pho2_pt_scaleUp;   //!
   TBranch        *b_pho2_pt_scaleDn;   //!
   TBranch        *b_diphoton_m;   //!
   TBranch        *b_diphoton_pt;   //!
   TBranch        *b_diphoton_eta;   //!
   TBranch        *b_diphoton_phi;   //!
   TBranch        *b_diphoton_E;   //!
   TBranch        *b_diphoton_m_scaleUp;   //!
   TBranch        *b_diphoton_m_scaleDn;   //!
   TBranch        *b_diphoton_pt_scaleUp;   //!
   TBranch        *b_diphoton_pt_scaleDn;   //!
   TBranch        *b_pho1_mvaID_Fall17V1p1;   //!
   TBranch        *b_pho2_mvaID_Fall17V1p1;   //!
   TBranch        *b_pho1_mvaID_WP80;   //!
   TBranch        *b_pho2_mvaID_WP80;   //!
   TBranch        *b_pho1_mvaID_WP90;   //!
   TBranch        *b_pho2_mvaID_WP90;   //!
   TBranch        *b_pho1_mvaIDFall17V1;   //!
   TBranch        *b_pho1_mvaIDFall17V2;   //!
   TBranch        *b_pho2_mvaIDFall17V1;   //!
   TBranch        *b_pho2_mvaIDFall17V2;   //!
   TBranch        *b_Higgs_LHE_leading_pt;   //!
   TBranch        *b_Higgs_LHE_leading_eta;   //!
   TBranch        *b_Higgs_LHE_leading_phi;   //!
   TBranch        *b_Higgs_LHE_leading_mass;   //!
   TBranch        *b_Higgs_LHE_leading_E;   //!
   TBranch        *b_Higgs_LHE_Subleading_pt;   //!
   TBranch        *b_Higgs_LHE_Subleading_eta;   //!
   TBranch        *b_Higgs_LHE_Subleading_phi;   //!
   TBranch        *b_Higgs_LHE_Subleading_mass;   //!
   TBranch        *b_Higgs_LHE_Subleading_E;   //!
   TBranch        *b_Higgs_LHE_dihiggs_mass;   //!
   TBranch        *b_MET;   //!
   TBranch        *b_MET_phi;   //!
   TBranch        *b_MET_2017;   //!
   TBranch        *b_MET_jesFlavorQCDUp;   //!
   TBranch        *b_MET_jesFlavorQCDDown;   //!
   TBranch        *b_MET_jesRelativeBalUp;   //!
   TBranch        *b_MET_jesRelativeBalDown;   //!
   TBranch        *b_MET_jesHFUp;   //!
   TBranch        *b_MET_jesHFDown;   //!
   TBranch        *b_MET_jesBBEC1Up;   //!
   TBranch        *b_MET_jesBBEC1Down;   //!
   TBranch        *b_MET_jesEC2Up;   //!
   TBranch        *b_MET_jesEC2Down;   //!
   TBranch        *b_MET_jesAbsoluteUp;   //!
   TBranch        *b_MET_jesAbsoluteDown;   //!
   TBranch        *b_MET_jesBBEC1_YearUp;   //!
   TBranch        *b_MET_jesBBEC1_YearDown;   //!
   TBranch        *b_MET_jesEC2_YearUp;   //!
   TBranch        *b_MET_jesEC2_YearDown;   //!
   TBranch        *b_MET_jesAbsolute_YearUp;   //!
   TBranch        *b_MET_jesAbsolute_YearDown;   //!
   TBranch        *b_MET_jesHF_YearUp;   //!
   TBranch        *b_MET_jesHF_YearDown;   //!
   TBranch        *b_MET_jesRelativeSample_YearUp;   //!
   TBranch        *b_MET_jesRelativeSample_YearDown;   //!
   TBranch        *b_MET_jesTotalUp;   //!
   TBranch        *b_MET_jesTotalDown;   //!
   TBranch        *b_MET_phi_jesFlavorQCDUp;   //!
   TBranch        *b_MET_phi_jesFlavorQCDDown;   //!
   TBranch        *b_MET_phi_jesRelativeBalUp;   //!
   TBranch        *b_MET_phi_jesRelativeBalDown;   //!
   TBranch        *b_MET_phi_jesHFUp;   //!
   TBranch        *b_MET_phi_jesHFDown;   //!
   TBranch        *b_MET_phi_jesBBEC1Up;   //!
   TBranch        *b_MET_phi_jesBBEC1Down;   //!
   TBranch        *b_MET_phi_jesEC2Up;   //!
   TBranch        *b_MET_phi_jesEC2Down;   //!
   TBranch        *b_MET_phi_jesAbsoluteUp;   //!
   TBranch        *b_MET_phi_jesAbsoluteDown;   //!
   TBranch        *b_MET_phi_jesBBEC1_YearUp;   //!
   TBranch        *b_MET_phi_jesBBEC1_YearDown;   //!
   TBranch        *b_MET_phi_jesEC2_YearUp;   //!
   TBranch        *b_MET_phi_jesEC2_YearDown;   //!
   TBranch        *b_MET_phi_jesAbsolute_YearUp;   //!
   TBranch        *b_MET_phi_jesAbsolute_YearDown;   //!
   TBranch        *b_MET_phi_jesHF_YearUp;   //!
   TBranch        *b_MET_phi_jesHF_YearDown;   //!
   TBranch        *b_MET_phi_jesRelativeSample_YearUp;   //!
   TBranch        *b_MET_phi_jesRelativeSample_YearDown;   //!
   TBranch        *b_MET_phi_jesTotalUp;   //!
   TBranch        *b_MET_phi_jesTotalDown;   //!
   TBranch        *b_neu_pz_type0;   //!
   TBranch        *b_FullyResolved_allAK4JetsSum_pt;   //!
   TBranch        *b_FullyResolved_Jet1_pt;   //!
   TBranch        *b_FullyResolved_Jet2_pt;   //!
   TBranch        *b_FullyResolved_Jet3_pt;   //!
   TBranch        *b_FullyResolved_Jet4_pt;   //!
   TBranch        *b_FullyResolved_Jet1_eta;   //!
   TBranch        *b_FullyResolved_Jet2_eta;   //!
   TBranch        *b_FullyResolved_Jet3_eta;   //!
   TBranch        *b_FullyResolved_Jet4_eta;   //!
   TBranch        *b_FullyResolved_Jet1_phi;   //!
   TBranch        *b_FullyResolved_Jet2_phi;   //!
   TBranch        *b_FullyResolved_Jet3_phi;   //!
   TBranch        *b_FullyResolved_Jet4_phi;   //!
   TBranch        *b_FullyResolved_Jet1_E;   //!
   TBranch        *b_FullyResolved_Jet2_E;   //!
   TBranch        *b_FullyResolved_Jet3_E;   //!
   TBranch        *b_FullyResolved_Jet4_E;   //!
   TBranch        *b_FullyResolved_Jet1_M;   //!
   TBranch        *b_FullyResolved_Jet2_M;   //!
   TBranch        *b_FullyResolved_Jet3_M;   //!
   TBranch        *b_FullyResolved_Jet4_M;   //!
   TBranch        *b_FullyResolved_TwoLeadingJets_pt;   //!
   TBranch        *b_FullyResolved_TwoLeadingJets_eta;   //!
   TBranch        *b_FullyResolved_TwoLeadingJets_phi;   //!
   TBranch        *b_FullyResolved_TwoLeadingJets_m;   //!
   TBranch        *b_FullyResolved_TwoLeadingJets_E;   //!
   TBranch        *b_FullyResolved_ThirdFourthJets_pt;   //!
   TBranch        *b_FullyResolved_ThirdFourthJets_eta;   //!
   TBranch        *b_FullyResolved_ThirdFourthJets_phi;   //!
   TBranch        *b_FullyResolved_ThirdFourthJets_m;   //!
   TBranch        *b_FullyResolved_ThirdFourthJets_E;   //!
   TBranch        *b_FullyResolved_FourJets_pt;   //!
   TBranch        *b_FullyResolved_FourJets_eta;   //!
   TBranch        *b_FullyResolved_FourJets_phi;   //!
   TBranch        *b_FullyResolved_FourJets_m;   //!
   TBranch        *b_FullyResolved_FourJets_E;   //!
   TBranch        *b_FullyResolved_Radion_pt;   //!
   TBranch        *b_FullyResolved_Radion_eta;   //!
   TBranch        *b_FullyResolved_Radion_phi;   //!
   TBranch        *b_FullyResolved_Radion_m;   //!
   TBranch        *b_FullyResolved_Radion_E;   //!

   Events(TTree *tree=0);
   virtual ~Events();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Events_cxx
Events::Events(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("GluGluToRadionToHHTo2G4Q_M1000.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("GluGluToRadionToHHTo2G4Q_M1000.root");
      }
      f->GetObject("Events",tree);

   }
   Init(tree);
}

Events::~Events()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Events::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Events::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Events::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("ls", &ls, &b_ls);
   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("nPU_mean", &nPU_mean, &b_nPU_mean);
   fChain->SetBranchAddress("genWeight", &genWeight, &b_genWeight);
   fChain->SetBranchAddress("puWeight", &puWeight, &b_puWeight);
   fChain->SetBranchAddress("puWeight_Up", &puWeight_Up, &b_puWeight_Up);
   fChain->SetBranchAddress("puWeight_Down", &puWeight_Down, &b_puWeight_Down);
   fChain->SetBranchAddress("L1PFWeight", &L1PFWeight, &b_L1PFWeight);
   fChain->SetBranchAddress("L1PFWeight_Up", &L1PFWeight_Up, &b_L1PFWeight_Up);
   fChain->SetBranchAddress("L1PFWeight_Down", &L1PFWeight_Down, &b_L1PFWeight_Down);
   fChain->SetBranchAddress("nScaleWeight", &nScaleWeight, &b_nScaleWeight);
   fChain->SetBranchAddress("nPdfWeight", &nPdfWeight, &b_nPdfWeight);
   fChain->SetBranchAddress("nAqgcWeight", &nAqgcWeight, &b_nAqgcWeight);
   fChain->SetBranchAddress("scaleWeight", &scaleWeight, &b_scaleWeight);
   fChain->SetBranchAddress("pdfWeight", &pdfWeight, &b_pdfWeight);
   fChain->SetBranchAddress("aqgcWeight", &aqgcWeight, &b_aqgcWeight);
   fChain->SetBranchAddress("is_tZq", &is_tZq, &b_is_tZq);
   fChain->SetBranchAddress("nAK4Jet30", &nAK4Jet30, &b_nAK4Jet30);
   fChain->SetBranchAddress("nAK4Jet50", &nAK4Jet50, &b_nAK4Jet50);
   fChain->SetBranchAddress("nGoodAK4jets", &nGoodAK4jets, &b_nGoodAK4jets);
   fChain->SetBranchAddress("nAK4Btag_loose", &nAK4Btag_loose, &b_nAK4Btag_loose);
   fChain->SetBranchAddress("nAK4Btag_medium", &nAK4Btag_medium, &b_nAK4Btag_medium);
   fChain->SetBranchAddress("nAK4Btag_tight", &nAK4Btag_tight, &b_nAK4Btag_tight);
   fChain->SetBranchAddress("btagWeight_loose", &btagWeight_loose, &b_btagWeight_loose);
   fChain->SetBranchAddress("btagWeight_loose_Up", &btagWeight_loose_Up, &b_btagWeight_loose_Up);
   fChain->SetBranchAddress("btagWeight_loose_Down", &btagWeight_loose_Down, &b_btagWeight_loose_Down);
   fChain->SetBranchAddress("btagWeight_medium", &btagWeight_medium, &b_btagWeight_medium);
   fChain->SetBranchAddress("btagWeight_medium_Up", &btagWeight_medium_Up, &b_btagWeight_medium_Up);
   fChain->SetBranchAddress("btagWeight_medium_Down", &btagWeight_medium_Down, &b_btagWeight_medium_Down);
   fChain->SetBranchAddress("btagWeight_tight", &btagWeight_tight, &b_btagWeight_tight);
   fChain->SetBranchAddress("btagWeight_tight_Up", &btagWeight_tight_Up, &b_btagWeight_tight_Up);
   fChain->SetBranchAddress("btagWeight_tight_Down", &btagWeight_tight_Down, &b_btagWeight_tight_Down);
   fChain->SetBranchAddress("trigger_1Mu", &trigger_1Mu, &b_trigger_1Mu);
   fChain->SetBranchAddress("trigger_2Mu", &trigger_2Mu, &b_trigger_2Mu);
   fChain->SetBranchAddress("trigger_1El", &trigger_1El, &b_trigger_1El);
   fChain->SetBranchAddress("trigger_2El", &trigger_2El, &b_trigger_2El);
   fChain->SetBranchAddress("isAntiIso", &isAntiIso, &b_isAntiIso);
   fChain->SetBranchAddress("lepFakeRate", &lepFakeRate, &b_lepFakeRate);
   fChain->SetBranchAddress("lep1_pt", &lep1_pt, &b_lep1_pt);
   fChain->SetBranchAddress("lep1_eta", &lep1_eta, &b_lep1_eta);
   fChain->SetBranchAddress("lep1_phi", &lep1_phi, &b_lep1_phi);
   fChain->SetBranchAddress("lep1_m", &lep1_m, &b_lep1_m);
   fChain->SetBranchAddress("lep1_q", &lep1_q, &b_lep1_q);
   fChain->SetBranchAddress("lep1_iso", &lep1_iso, &b_lep1_iso);
   fChain->SetBranchAddress("lep1_dxy", &lep1_dxy, &b_lep1_dxy);
   fChain->SetBranchAddress("lep1_dz", &lep1_dz, &b_lep1_dz);
   fChain->SetBranchAddress("lep1_idEffWeight", &lep1_idEffWeight, &b_lep1_idEffWeight);
   fChain->SetBranchAddress("lep1_trigEffWeight", &lep1_trigEffWeight, &b_lep1_trigEffWeight);
   fChain->SetBranchAddress("lep1_pt_scaleUp", &lep1_pt_scaleUp, &b_lep1_pt_scaleUp);
   fChain->SetBranchAddress("lep1_pt_scaleDown", &lep1_pt_scaleDown, &b_lep1_pt_scaleDown);
   fChain->SetBranchAddress("lep2_pt", &lep2_pt, &b_lep2_pt);
   fChain->SetBranchAddress("lep2_eta", &lep2_eta, &b_lep2_eta);
   fChain->SetBranchAddress("lep2_phi", &lep2_phi, &b_lep2_phi);
   fChain->SetBranchAddress("lep2_m", &lep2_m, &b_lep2_m);
   fChain->SetBranchAddress("lep2_q", &lep2_q, &b_lep2_q);
   fChain->SetBranchAddress("lep2_iso", &lep2_iso, &b_lep2_iso);
   fChain->SetBranchAddress("lep2_dxy", &lep2_dxy, &b_lep2_dxy);
   fChain->SetBranchAddress("lep2_dz", &lep2_dz, &b_lep2_dz);
   fChain->SetBranchAddress("lep2_idEffWeight", &lep2_idEffWeight, &b_lep2_idEffWeight);
   fChain->SetBranchAddress("lep2_trigEffWeight", &lep2_trigEffWeight, &b_lep2_trigEffWeight);
   fChain->SetBranchAddress("lep2_pt_scaleUp", &lep2_pt_scaleUp, &b_lep2_pt_scaleUp);
   fChain->SetBranchAddress("lep2_pt_scaleDown", &lep2_pt_scaleDown, &b_lep2_pt_scaleDown);
   fChain->SetBranchAddress("dilep_m", &dilep_m, &b_dilep_m);
   fChain->SetBranchAddress("dilep_mt", &dilep_mt, &b_dilep_mt);
   fChain->SetBranchAddress("dilep_pt", &dilep_pt, &b_dilep_pt);
   fChain->SetBranchAddress("dilep_eta", &dilep_eta, &b_dilep_eta);
   fChain->SetBranchAddress("dilep_phi", &dilep_phi, &b_dilep_phi);
   fChain->SetBranchAddress("dilep_m_jesFlavorQCDUp", &dilep_m_jesFlavorQCDUp, &b_dilep_m_jesFlavorQCDUp);
   fChain->SetBranchAddress("dilep_m_jesFlavorQCDDown", &dilep_m_jesFlavorQCDDown, &b_dilep_m_jesFlavorQCDDown);
   fChain->SetBranchAddress("dilep_m_jesRelativeBalUp", &dilep_m_jesRelativeBalUp, &b_dilep_m_jesRelativeBalUp);
   fChain->SetBranchAddress("dilep_m_jesRelativeBalDown", &dilep_m_jesRelativeBalDown, &b_dilep_m_jesRelativeBalDown);
   fChain->SetBranchAddress("dilep_m_jesHFUp", &dilep_m_jesHFUp, &b_dilep_m_jesHFUp);
   fChain->SetBranchAddress("dilep_m_jesHFDown", &dilep_m_jesHFDown, &b_dilep_m_jesHFDown);
   fChain->SetBranchAddress("dilep_m_jesBBEC1Up", &dilep_m_jesBBEC1Up, &b_dilep_m_jesBBEC1Up);
   fChain->SetBranchAddress("dilep_m_jesBBEC1Down", &dilep_m_jesBBEC1Down, &b_dilep_m_jesBBEC1Down);
   fChain->SetBranchAddress("dilep_m_jesEC2Up", &dilep_m_jesEC2Up, &b_dilep_m_jesEC2Up);
   fChain->SetBranchAddress("dilep_m_jesEC2Down", &dilep_m_jesEC2Down, &b_dilep_m_jesEC2Down);
   fChain->SetBranchAddress("dilep_m_jesAbsoluteUp", &dilep_m_jesAbsoluteUp, &b_dilep_m_jesAbsoluteUp);
   fChain->SetBranchAddress("dilep_m_jesAbsoluteDown", &dilep_m_jesAbsoluteDown, &b_dilep_m_jesAbsoluteDown);
   fChain->SetBranchAddress("dilep_m_jesBBEC1_YearUp", &dilep_m_jesBBEC1_YearUp, &b_dilep_m_jesBBEC1_YearUp);
   fChain->SetBranchAddress("dilep_m_jesBBEC1_YearDown", &dilep_m_jesBBEC1_YearDown, &b_dilep_m_jesBBEC1_YearDown);
   fChain->SetBranchAddress("dilep_m_jesEC2_YearUp", &dilep_m_jesEC2_YearUp, &b_dilep_m_jesEC2_YearUp);
   fChain->SetBranchAddress("dilep_m_jesEC2_YearDown", &dilep_m_jesEC2_YearDown, &b_dilep_m_jesEC2_YearDown);
   fChain->SetBranchAddress("dilep_m_jesAbsolute_YearUp", &dilep_m_jesAbsolute_YearUp, &b_dilep_m_jesAbsolute_YearUp);
   fChain->SetBranchAddress("dilep_m_jesAbsolute_YearDown", &dilep_m_jesAbsolute_YearDown, &b_dilep_m_jesAbsolute_YearDown);
   fChain->SetBranchAddress("dilep_m_jesHF_YearUp", &dilep_m_jesHF_YearUp, &b_dilep_m_jesHF_YearUp);
   fChain->SetBranchAddress("dilep_m_jesHF_YearDown", &dilep_m_jesHF_YearDown, &b_dilep_m_jesHF_YearDown);
   fChain->SetBranchAddress("dilep_m_jesRelativeSample_YearUp", &dilep_m_jesRelativeSample_YearUp, &b_dilep_m_jesRelativeSample_YearUp);
   fChain->SetBranchAddress("dilep_m_jesRelativeSample_YearDown", &dilep_m_jesRelativeSample_YearDown, &b_dilep_m_jesRelativeSample_YearDown);
   fChain->SetBranchAddress("dilep_m_jesTotalUp", &dilep_m_jesTotalUp, &b_dilep_m_jesTotalUp);
   fChain->SetBranchAddress("dilep_m_jesTotalDown", &dilep_m_jesTotalDown, &b_dilep_m_jesTotalDown);
   fChain->SetBranchAddress("dilep_mt_jesFlavorQCDUp", &dilep_mt_jesFlavorQCDUp, &b_dilep_mt_jesFlavorQCDUp);
   fChain->SetBranchAddress("dilep_mt_jesFlavorQCDDown", &dilep_mt_jesFlavorQCDDown, &b_dilep_mt_jesFlavorQCDDown);
   fChain->SetBranchAddress("dilep_mt_jesRelativeBalUp", &dilep_mt_jesRelativeBalUp, &b_dilep_mt_jesRelativeBalUp);
   fChain->SetBranchAddress("dilep_mt_jesRelativeBalDown", &dilep_mt_jesRelativeBalDown, &b_dilep_mt_jesRelativeBalDown);
   fChain->SetBranchAddress("dilep_mt_jesHFUp", &dilep_mt_jesHFUp, &b_dilep_mt_jesHFUp);
   fChain->SetBranchAddress("dilep_mt_jesHFDown", &dilep_mt_jesHFDown, &b_dilep_mt_jesHFDown);
   fChain->SetBranchAddress("dilep_mt_jesBBEC1Up", &dilep_mt_jesBBEC1Up, &b_dilep_mt_jesBBEC1Up);
   fChain->SetBranchAddress("dilep_mt_jesBBEC1Down", &dilep_mt_jesBBEC1Down, &b_dilep_mt_jesBBEC1Down);
   fChain->SetBranchAddress("dilep_mt_jesEC2Up", &dilep_mt_jesEC2Up, &b_dilep_mt_jesEC2Up);
   fChain->SetBranchAddress("dilep_mt_jesEC2Down", &dilep_mt_jesEC2Down, &b_dilep_mt_jesEC2Down);
   fChain->SetBranchAddress("dilep_mt_jesAbsoluteUp", &dilep_mt_jesAbsoluteUp, &b_dilep_mt_jesAbsoluteUp);
   fChain->SetBranchAddress("dilep_mt_jesAbsoluteDown", &dilep_mt_jesAbsoluteDown, &b_dilep_mt_jesAbsoluteDown);
   fChain->SetBranchAddress("dilep_mt_jesBBEC1_YearUp", &dilep_mt_jesBBEC1_YearUp, &b_dilep_mt_jesBBEC1_YearUp);
   fChain->SetBranchAddress("dilep_mt_jesBBEC1_YearDown", &dilep_mt_jesBBEC1_YearDown, &b_dilep_mt_jesBBEC1_YearDown);
   fChain->SetBranchAddress("dilep_mt_jesEC2_YearUp", &dilep_mt_jesEC2_YearUp, &b_dilep_mt_jesEC2_YearUp);
   fChain->SetBranchAddress("dilep_mt_jesEC2_YearDown", &dilep_mt_jesEC2_YearDown, &b_dilep_mt_jesEC2_YearDown);
   fChain->SetBranchAddress("dilep_mt_jesAbsolute_YearUp", &dilep_mt_jesAbsolute_YearUp, &b_dilep_mt_jesAbsolute_YearUp);
   fChain->SetBranchAddress("dilep_mt_jesAbsolute_YearDown", &dilep_mt_jesAbsolute_YearDown, &b_dilep_mt_jesAbsolute_YearDown);
   fChain->SetBranchAddress("dilep_mt_jesHF_YearUp", &dilep_mt_jesHF_YearUp, &b_dilep_mt_jesHF_YearUp);
   fChain->SetBranchAddress("dilep_mt_jesHF_YearDown", &dilep_mt_jesHF_YearDown, &b_dilep_mt_jesHF_YearDown);
   fChain->SetBranchAddress("dilep_mt_jesRelativeSample_YearUp", &dilep_mt_jesRelativeSample_YearUp, &b_dilep_mt_jesRelativeSample_YearUp);
   fChain->SetBranchAddress("dilep_mt_jesRelativeSample_YearDown", &dilep_mt_jesRelativeSample_YearDown, &b_dilep_mt_jesRelativeSample_YearDown);
   fChain->SetBranchAddress("dilep_mt_jesTotalUp", &dilep_mt_jesTotalUp, &b_dilep_mt_jesTotalUp);
   fChain->SetBranchAddress("dilep_mt_jesTotalDown", &dilep_mt_jesTotalDown, &b_dilep_mt_jesTotalDown);
   fChain->SetBranchAddress("dilep_pt_jesFlavorQCDUp", &dilep_pt_jesFlavorQCDUp, &b_dilep_pt_jesFlavorQCDUp);
   fChain->SetBranchAddress("dilep_pt_jesFlavorQCDDown", &dilep_pt_jesFlavorQCDDown, &b_dilep_pt_jesFlavorQCDDown);
   fChain->SetBranchAddress("dilep_pt_jesRelativeBalUp", &dilep_pt_jesRelativeBalUp, &b_dilep_pt_jesRelativeBalUp);
   fChain->SetBranchAddress("dilep_pt_jesRelativeBalDown", &dilep_pt_jesRelativeBalDown, &b_dilep_pt_jesRelativeBalDown);
   fChain->SetBranchAddress("dilep_pt_jesHFUp", &dilep_pt_jesHFUp, &b_dilep_pt_jesHFUp);
   fChain->SetBranchAddress("dilep_pt_jesHFDown", &dilep_pt_jesHFDown, &b_dilep_pt_jesHFDown);
   fChain->SetBranchAddress("dilep_pt_jesBBEC1Up", &dilep_pt_jesBBEC1Up, &b_dilep_pt_jesBBEC1Up);
   fChain->SetBranchAddress("dilep_pt_jesBBEC1Down", &dilep_pt_jesBBEC1Down, &b_dilep_pt_jesBBEC1Down);
   fChain->SetBranchAddress("dilep_pt_jesEC2Up", &dilep_pt_jesEC2Up, &b_dilep_pt_jesEC2Up);
   fChain->SetBranchAddress("dilep_pt_jesEC2Down", &dilep_pt_jesEC2Down, &b_dilep_pt_jesEC2Down);
   fChain->SetBranchAddress("dilep_pt_jesAbsoluteUp", &dilep_pt_jesAbsoluteUp, &b_dilep_pt_jesAbsoluteUp);
   fChain->SetBranchAddress("dilep_pt_jesAbsoluteDown", &dilep_pt_jesAbsoluteDown, &b_dilep_pt_jesAbsoluteDown);
   fChain->SetBranchAddress("dilep_pt_jesBBEC1_YearUp", &dilep_pt_jesBBEC1_YearUp, &b_dilep_pt_jesBBEC1_YearUp);
   fChain->SetBranchAddress("dilep_pt_jesBBEC1_YearDown", &dilep_pt_jesBBEC1_YearDown, &b_dilep_pt_jesBBEC1_YearDown);
   fChain->SetBranchAddress("dilep_pt_jesEC2_YearUp", &dilep_pt_jesEC2_YearUp, &b_dilep_pt_jesEC2_YearUp);
   fChain->SetBranchAddress("dilep_pt_jesEC2_YearDown", &dilep_pt_jesEC2_YearDown, &b_dilep_pt_jesEC2_YearDown);
   fChain->SetBranchAddress("dilep_pt_jesAbsolute_YearUp", &dilep_pt_jesAbsolute_YearUp, &b_dilep_pt_jesAbsolute_YearUp);
   fChain->SetBranchAddress("dilep_pt_jesAbsolute_YearDown", &dilep_pt_jesAbsolute_YearDown, &b_dilep_pt_jesAbsolute_YearDown);
   fChain->SetBranchAddress("dilep_pt_jesHF_YearUp", &dilep_pt_jesHF_YearUp, &b_dilep_pt_jesHF_YearUp);
   fChain->SetBranchAddress("dilep_pt_jesHF_YearDown", &dilep_pt_jesHF_YearDown, &b_dilep_pt_jesHF_YearDown);
   fChain->SetBranchAddress("dilep_pt_jesRelativeSample_YearUp", &dilep_pt_jesRelativeSample_YearUp, &b_dilep_pt_jesRelativeSample_YearUp);
   fChain->SetBranchAddress("dilep_pt_jesRelativeSample_YearDown", &dilep_pt_jesRelativeSample_YearDown, &b_dilep_pt_jesRelativeSample_YearDown);
   fChain->SetBranchAddress("dilep_pt_jesTotalUp", &dilep_pt_jesTotalUp, &b_dilep_pt_jesTotalUp);
   fChain->SetBranchAddress("dilep_pt_jesTotalDown", &dilep_pt_jesTotalDown, &b_dilep_pt_jesTotalDown);
   fChain->SetBranchAddress("dilep_m_scaleUp", &dilep_m_scaleUp, &b_dilep_m_scaleUp);
   fChain->SetBranchAddress("dilep_m_scaleDown", &dilep_m_scaleDown, &b_dilep_m_scaleDown);
   fChain->SetBranchAddress("dilep_mt_scaleUp", &dilep_mt_scaleUp, &b_dilep_mt_scaleUp);
   fChain->SetBranchAddress("dilep_mt_scaleDown", &dilep_mt_scaleDown, &b_dilep_mt_scaleDown);
   fChain->SetBranchAddress("dilep_pt_scaleUp", &dilep_pt_scaleUp, &b_dilep_pt_scaleUp);
   fChain->SetBranchAddress("dilep_pt_scaleDown", &dilep_pt_scaleDown, &b_dilep_pt_scaleDown);
   fChain->SetBranchAddress("pho1_pt", &pho1_pt, &b_pho1_pt);
   fChain->SetBranchAddress("pho1_eta", &pho1_eta, &b_pho1_eta);
   fChain->SetBranchAddress("pho1_phi", &pho1_phi, &b_pho1_phi);
   fChain->SetBranchAddress("pho1_m", &pho1_m, &b_pho1_m);
   fChain->SetBranchAddress("pho1_q", &pho1_q, &b_pho1_q);
   fChain->SetBranchAddress("pho1_iso", &pho1_iso, &b_pho1_iso);
   fChain->SetBranchAddress("pho1_dxy", &pho1_dxy, &b_pho1_dxy);
   fChain->SetBranchAddress("pho1_dz", &pho1_dz, &b_pho1_dz);
   fChain->SetBranchAddress("pho1_idEffWeight", &pho1_idEffWeight, &b_pho1_idEffWeight);
   fChain->SetBranchAddress("pho1_E", &pho1_E, &b_pho1_E);
   fChain->SetBranchAddress("pho1_pt_byMgg", &pho1_pt_byMgg, &b_pho1_pt_byMgg);
   fChain->SetBranchAddress("pho1_E_byMgg", &pho1_E_byMgg, &b_pho1_E_byMgg);
   fChain->SetBranchAddress("pho1_pt_scaleUp", &pho1_pt_scaleUp, &b_pho1_pt_scaleUp);
   fChain->SetBranchAddress("pho1_pt_scaleDn", &pho1_pt_scaleDn, &b_pho1_pt_scaleDn);
   fChain->SetBranchAddress("pho2_pt", &pho2_pt, &b_pho2_pt);
   fChain->SetBranchAddress("pho2_eta", &pho2_eta, &b_pho2_eta);
   fChain->SetBranchAddress("pho2_phi", &pho2_phi, &b_pho2_phi);
   fChain->SetBranchAddress("pho2_m", &pho2_m, &b_pho2_m);
   fChain->SetBranchAddress("pho2_q", &pho2_q, &b_pho2_q);
   fChain->SetBranchAddress("pho2_iso", &pho2_iso, &b_pho2_iso);
   fChain->SetBranchAddress("pho2_dxy", &pho2_dxy, &b_pho2_dxy);
   fChain->SetBranchAddress("pho2_dz", &pho2_dz, &b_pho2_dz);
   fChain->SetBranchAddress("pho2_idEffWeight", &pho2_idEffWeight, &b_pho2_idEffWeight);
   fChain->SetBranchAddress("pho2_E", &pho2_E, &b_pho2_E);
   fChain->SetBranchAddress("pho2_pt_byMgg", &pho2_pt_byMgg, &b_pho2_pt_byMgg);
   fChain->SetBranchAddress("pho2_E_byMgg", &pho2_E_byMgg, &b_pho2_E_byMgg);
   fChain->SetBranchAddress("pho2_pt_scaleUp", &pho2_pt_scaleUp, &b_pho2_pt_scaleUp);
   fChain->SetBranchAddress("pho2_pt_scaleDn", &pho2_pt_scaleDn, &b_pho2_pt_scaleDn);
   fChain->SetBranchAddress("diphoton_m", &diphoton_m, &b_diphoton_m);
   fChain->SetBranchAddress("diphoton_pt", &diphoton_pt, &b_diphoton_pt);
   fChain->SetBranchAddress("diphoton_eta", &diphoton_eta, &b_diphoton_eta);
   fChain->SetBranchAddress("diphoton_phi", &diphoton_phi, &b_diphoton_phi);
   fChain->SetBranchAddress("diphoton_E", &diphoton_E, &b_diphoton_E);
   fChain->SetBranchAddress("diphoton_m_scaleUp", &diphoton_m_scaleUp, &b_diphoton_m_scaleUp);
   fChain->SetBranchAddress("diphoton_m_scaleDn", &diphoton_m_scaleDn, &b_diphoton_m_scaleDn);
   fChain->SetBranchAddress("diphoton_pt_scaleUp", &diphoton_pt_scaleUp, &b_diphoton_pt_scaleUp);
   fChain->SetBranchAddress("diphoton_pt_scaleDn", &diphoton_pt_scaleDn, &b_diphoton_pt_scaleDn);
   fChain->SetBranchAddress("pho1_mvaID_Fall17V1p1", &pho1_mvaID_Fall17V1p1, &b_pho1_mvaID_Fall17V1p1);
   fChain->SetBranchAddress("pho2_mvaID_Fall17V1p1", &pho2_mvaID_Fall17V1p1, &b_pho2_mvaID_Fall17V1p1);
   fChain->SetBranchAddress("pho1_mvaID_WP80", &pho1_mvaID_WP80, &b_pho1_mvaID_WP80);
   fChain->SetBranchAddress("pho2_mvaID_WP80", &pho2_mvaID_WP80, &b_pho2_mvaID_WP80);
   fChain->SetBranchAddress("pho1_mvaID_WP90", &pho1_mvaID_WP90, &b_pho1_mvaID_WP90);
   fChain->SetBranchAddress("pho2_mvaID_WP90", &pho2_mvaID_WP90, &b_pho2_mvaID_WP90);
   fChain->SetBranchAddress("pho1_mvaIDFall17V1", &pho1_mvaIDFall17V1, &b_pho1_mvaIDFall17V1);
   fChain->SetBranchAddress("pho1_mvaIDFall17V2", &pho1_mvaIDFall17V2, &b_pho1_mvaIDFall17V2);
   fChain->SetBranchAddress("pho2_mvaIDFall17V1", &pho2_mvaIDFall17V1, &b_pho2_mvaIDFall17V1);
   fChain->SetBranchAddress("pho2_mvaIDFall17V2", &pho2_mvaIDFall17V2, &b_pho2_mvaIDFall17V2);
   fChain->SetBranchAddress("Higgs_LHE_leading_pt", &Higgs_LHE_leading_pt, &b_Higgs_LHE_leading_pt);
   fChain->SetBranchAddress("Higgs_LHE_leading_eta", &Higgs_LHE_leading_eta, &b_Higgs_LHE_leading_eta);
   fChain->SetBranchAddress("Higgs_LHE_leading_phi", &Higgs_LHE_leading_phi, &b_Higgs_LHE_leading_phi);
   fChain->SetBranchAddress("Higgs_LHE_leading_mass", &Higgs_LHE_leading_mass, &b_Higgs_LHE_leading_mass);
   fChain->SetBranchAddress("Higgs_LHE_leading_E", &Higgs_LHE_leading_E, &b_Higgs_LHE_leading_E);
   fChain->SetBranchAddress("Higgs_LHE_Subleading_pt", &Higgs_LHE_Subleading_pt, &b_Higgs_LHE_Subleading_pt);
   fChain->SetBranchAddress("Higgs_LHE_Subleading_eta", &Higgs_LHE_Subleading_eta, &b_Higgs_LHE_Subleading_eta);
   fChain->SetBranchAddress("Higgs_LHE_Subleading_phi", &Higgs_LHE_Subleading_phi, &b_Higgs_LHE_Subleading_phi);
   fChain->SetBranchAddress("Higgs_LHE_Subleading_mass", &Higgs_LHE_Subleading_mass, &b_Higgs_LHE_Subleading_mass);
   fChain->SetBranchAddress("Higgs_LHE_Subleading_E", &Higgs_LHE_Subleading_E, &b_Higgs_LHE_Subleading_E);
   fChain->SetBranchAddress("Higgs_LHE_dihiggs_mass", &Higgs_LHE_dihiggs_mass, &b_Higgs_LHE_dihiggs_mass);
   fChain->SetBranchAddress("MET", &MET, &b_MET);
   fChain->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);
   fChain->SetBranchAddress("MET_2017", &MET_2017, &b_MET_2017);
   fChain->SetBranchAddress("MET_jesFlavorQCDUp", &MET_jesFlavorQCDUp, &b_MET_jesFlavorQCDUp);
   fChain->SetBranchAddress("MET_jesFlavorQCDDown", &MET_jesFlavorQCDDown, &b_MET_jesFlavorQCDDown);
   fChain->SetBranchAddress("MET_jesRelativeBalUp", &MET_jesRelativeBalUp, &b_MET_jesRelativeBalUp);
   fChain->SetBranchAddress("MET_jesRelativeBalDown", &MET_jesRelativeBalDown, &b_MET_jesRelativeBalDown);
   fChain->SetBranchAddress("MET_jesHFUp", &MET_jesHFUp, &b_MET_jesHFUp);
   fChain->SetBranchAddress("MET_jesHFDown", &MET_jesHFDown, &b_MET_jesHFDown);
   fChain->SetBranchAddress("MET_jesBBEC1Up", &MET_jesBBEC1Up, &b_MET_jesBBEC1Up);
   fChain->SetBranchAddress("MET_jesBBEC1Down", &MET_jesBBEC1Down, &b_MET_jesBBEC1Down);
   fChain->SetBranchAddress("MET_jesEC2Up", &MET_jesEC2Up, &b_MET_jesEC2Up);
   fChain->SetBranchAddress("MET_jesEC2Down", &MET_jesEC2Down, &b_MET_jesEC2Down);
   fChain->SetBranchAddress("MET_jesAbsoluteUp", &MET_jesAbsoluteUp, &b_MET_jesAbsoluteUp);
   fChain->SetBranchAddress("MET_jesAbsoluteDown", &MET_jesAbsoluteDown, &b_MET_jesAbsoluteDown);
   fChain->SetBranchAddress("MET_jesBBEC1_YearUp", &MET_jesBBEC1_YearUp, &b_MET_jesBBEC1_YearUp);
   fChain->SetBranchAddress("MET_jesBBEC1_YearDown", &MET_jesBBEC1_YearDown, &b_MET_jesBBEC1_YearDown);
   fChain->SetBranchAddress("MET_jesEC2_YearUp", &MET_jesEC2_YearUp, &b_MET_jesEC2_YearUp);
   fChain->SetBranchAddress("MET_jesEC2_YearDown", &MET_jesEC2_YearDown, &b_MET_jesEC2_YearDown);
   fChain->SetBranchAddress("MET_jesAbsolute_YearUp", &MET_jesAbsolute_YearUp, &b_MET_jesAbsolute_YearUp);
   fChain->SetBranchAddress("MET_jesAbsolute_YearDown", &MET_jesAbsolute_YearDown, &b_MET_jesAbsolute_YearDown);
   fChain->SetBranchAddress("MET_jesHF_YearUp", &MET_jesHF_YearUp, &b_MET_jesHF_YearUp);
   fChain->SetBranchAddress("MET_jesHF_YearDown", &MET_jesHF_YearDown, &b_MET_jesHF_YearDown);
   fChain->SetBranchAddress("MET_jesRelativeSample_YearUp", &MET_jesRelativeSample_YearUp, &b_MET_jesRelativeSample_YearUp);
   fChain->SetBranchAddress("MET_jesRelativeSample_YearDown", &MET_jesRelativeSample_YearDown, &b_MET_jesRelativeSample_YearDown);
   fChain->SetBranchAddress("MET_jesTotalUp", &MET_jesTotalUp, &b_MET_jesTotalUp);
   fChain->SetBranchAddress("MET_jesTotalDown", &MET_jesTotalDown, &b_MET_jesTotalDown);
   fChain->SetBranchAddress("MET_phi_jesFlavorQCDUp", &MET_phi_jesFlavorQCDUp, &b_MET_phi_jesFlavorQCDUp);
   fChain->SetBranchAddress("MET_phi_jesFlavorQCDDown", &MET_phi_jesFlavorQCDDown, &b_MET_phi_jesFlavorQCDDown);
   fChain->SetBranchAddress("MET_phi_jesRelativeBalUp", &MET_phi_jesRelativeBalUp, &b_MET_phi_jesRelativeBalUp);
   fChain->SetBranchAddress("MET_phi_jesRelativeBalDown", &MET_phi_jesRelativeBalDown, &b_MET_phi_jesRelativeBalDown);
   fChain->SetBranchAddress("MET_phi_jesHFUp", &MET_phi_jesHFUp, &b_MET_phi_jesHFUp);
   fChain->SetBranchAddress("MET_phi_jesHFDown", &MET_phi_jesHFDown, &b_MET_phi_jesHFDown);
   fChain->SetBranchAddress("MET_phi_jesBBEC1Up", &MET_phi_jesBBEC1Up, &b_MET_phi_jesBBEC1Up);
   fChain->SetBranchAddress("MET_phi_jesBBEC1Down", &MET_phi_jesBBEC1Down, &b_MET_phi_jesBBEC1Down);
   fChain->SetBranchAddress("MET_phi_jesEC2Up", &MET_phi_jesEC2Up, &b_MET_phi_jesEC2Up);
   fChain->SetBranchAddress("MET_phi_jesEC2Down", &MET_phi_jesEC2Down, &b_MET_phi_jesEC2Down);
   fChain->SetBranchAddress("MET_phi_jesAbsoluteUp", &MET_phi_jesAbsoluteUp, &b_MET_phi_jesAbsoluteUp);
   fChain->SetBranchAddress("MET_phi_jesAbsoluteDown", &MET_phi_jesAbsoluteDown, &b_MET_phi_jesAbsoluteDown);
   fChain->SetBranchAddress("MET_phi_jesBBEC1_YearUp", &MET_phi_jesBBEC1_YearUp, &b_MET_phi_jesBBEC1_YearUp);
   fChain->SetBranchAddress("MET_phi_jesBBEC1_YearDown", &MET_phi_jesBBEC1_YearDown, &b_MET_phi_jesBBEC1_YearDown);
   fChain->SetBranchAddress("MET_phi_jesEC2_YearUp", &MET_phi_jesEC2_YearUp, &b_MET_phi_jesEC2_YearUp);
   fChain->SetBranchAddress("MET_phi_jesEC2_YearDown", &MET_phi_jesEC2_YearDown, &b_MET_phi_jesEC2_YearDown);
   fChain->SetBranchAddress("MET_phi_jesAbsolute_YearUp", &MET_phi_jesAbsolute_YearUp, &b_MET_phi_jesAbsolute_YearUp);
   fChain->SetBranchAddress("MET_phi_jesAbsolute_YearDown", &MET_phi_jesAbsolute_YearDown, &b_MET_phi_jesAbsolute_YearDown);
   fChain->SetBranchAddress("MET_phi_jesHF_YearUp", &MET_phi_jesHF_YearUp, &b_MET_phi_jesHF_YearUp);
   fChain->SetBranchAddress("MET_phi_jesHF_YearDown", &MET_phi_jesHF_YearDown, &b_MET_phi_jesHF_YearDown);
   fChain->SetBranchAddress("MET_phi_jesRelativeSample_YearUp", &MET_phi_jesRelativeSample_YearUp, &b_MET_phi_jesRelativeSample_YearUp);
   fChain->SetBranchAddress("MET_phi_jesRelativeSample_YearDown", &MET_phi_jesRelativeSample_YearDown, &b_MET_phi_jesRelativeSample_YearDown);
   fChain->SetBranchAddress("MET_phi_jesTotalUp", &MET_phi_jesTotalUp, &b_MET_phi_jesTotalUp);
   fChain->SetBranchAddress("MET_phi_jesTotalDown", &MET_phi_jesTotalDown, &b_MET_phi_jesTotalDown);
   fChain->SetBranchAddress("neu_pz_type0", &neu_pz_type0, &b_neu_pz_type0);
   fChain->SetBranchAddress("FullyResolved_allAK4JetsSum_pt", &FullyResolved_allAK4JetsSum_pt, &b_FullyResolved_allAK4JetsSum_pt);
   fChain->SetBranchAddress("FullyResolved_Jet1_pt", &FullyResolved_Jet1_pt, &b_FullyResolved_Jet1_pt);
   fChain->SetBranchAddress("FullyResolved_Jet2_pt", &FullyResolved_Jet2_pt, &b_FullyResolved_Jet2_pt);
   fChain->SetBranchAddress("FullyResolved_Jet3_pt", &FullyResolved_Jet3_pt, &b_FullyResolved_Jet3_pt);
   fChain->SetBranchAddress("FullyResolved_Jet4_pt", &FullyResolved_Jet4_pt, &b_FullyResolved_Jet4_pt);
   fChain->SetBranchAddress("FullyResolved_Jet1_eta", &FullyResolved_Jet1_eta, &b_FullyResolved_Jet1_eta);
   fChain->SetBranchAddress("FullyResolved_Jet2_eta", &FullyResolved_Jet2_eta, &b_FullyResolved_Jet2_eta);
   fChain->SetBranchAddress("FullyResolved_Jet3_eta", &FullyResolved_Jet3_eta, &b_FullyResolved_Jet3_eta);
   fChain->SetBranchAddress("FullyResolved_Jet4_eta", &FullyResolved_Jet4_eta, &b_FullyResolved_Jet4_eta);
   fChain->SetBranchAddress("FullyResolved_Jet1_phi", &FullyResolved_Jet1_phi, &b_FullyResolved_Jet1_phi);
   fChain->SetBranchAddress("FullyResolved_Jet2_phi", &FullyResolved_Jet2_phi, &b_FullyResolved_Jet2_phi);
   fChain->SetBranchAddress("FullyResolved_Jet3_phi", &FullyResolved_Jet3_phi, &b_FullyResolved_Jet3_phi);
   fChain->SetBranchAddress("FullyResolved_Jet4_phi", &FullyResolved_Jet4_phi, &b_FullyResolved_Jet4_phi);
   fChain->SetBranchAddress("FullyResolved_Jet1_E", &FullyResolved_Jet1_E, &b_FullyResolved_Jet1_E);
   fChain->SetBranchAddress("FullyResolved_Jet2_E", &FullyResolved_Jet2_E, &b_FullyResolved_Jet2_E);
   fChain->SetBranchAddress("FullyResolved_Jet3_E", &FullyResolved_Jet3_E, &b_FullyResolved_Jet3_E);
   fChain->SetBranchAddress("FullyResolved_Jet4_E", &FullyResolved_Jet4_E, &b_FullyResolved_Jet4_E);
   fChain->SetBranchAddress("FullyResolved_Jet1_M", &FullyResolved_Jet1_M, &b_FullyResolved_Jet1_M);
   fChain->SetBranchAddress("FullyResolved_Jet2_M", &FullyResolved_Jet2_M, &b_FullyResolved_Jet2_M);
   fChain->SetBranchAddress("FullyResolved_Jet3_M", &FullyResolved_Jet3_M, &b_FullyResolved_Jet3_M);
   fChain->SetBranchAddress("FullyResolved_Jet4_M", &FullyResolved_Jet4_M, &b_FullyResolved_Jet4_M);
   fChain->SetBranchAddress("FullyResolved_TwoLeadingJets_pt", &FullyResolved_TwoLeadingJets_pt, &b_FullyResolved_TwoLeadingJets_pt);
   fChain->SetBranchAddress("FullyResolved_TwoLeadingJets_eta", &FullyResolved_TwoLeadingJets_eta, &b_FullyResolved_TwoLeadingJets_eta);
   fChain->SetBranchAddress("FullyResolved_TwoLeadingJets_phi", &FullyResolved_TwoLeadingJets_phi, &b_FullyResolved_TwoLeadingJets_phi);
   fChain->SetBranchAddress("FullyResolved_TwoLeadingJets_m", &FullyResolved_TwoLeadingJets_m, &b_FullyResolved_TwoLeadingJets_m);
   fChain->SetBranchAddress("FullyResolved_TwoLeadingJets_E", &FullyResolved_TwoLeadingJets_E, &b_FullyResolved_TwoLeadingJets_E);
   fChain->SetBranchAddress("FullyResolved_ThirdFourthJets_pt", &FullyResolved_ThirdFourthJets_pt, &b_FullyResolved_ThirdFourthJets_pt);
   fChain->SetBranchAddress("FullyResolved_ThirdFourthJets_eta", &FullyResolved_ThirdFourthJets_eta, &b_FullyResolved_ThirdFourthJets_eta);
   fChain->SetBranchAddress("FullyResolved_ThirdFourthJets_phi", &FullyResolved_ThirdFourthJets_phi, &b_FullyResolved_ThirdFourthJets_phi);
   fChain->SetBranchAddress("FullyResolved_ThirdFourthJets_m", &FullyResolved_ThirdFourthJets_m, &b_FullyResolved_ThirdFourthJets_m);
   fChain->SetBranchAddress("FullyResolved_ThirdFourthJets_E", &FullyResolved_ThirdFourthJets_E, &b_FullyResolved_ThirdFourthJets_E);
   fChain->SetBranchAddress("FullyResolved_FourJets_pt", &FullyResolved_FourJets_pt, &b_FullyResolved_FourJets_pt);
   fChain->SetBranchAddress("FullyResolved_FourJets_eta", &FullyResolved_FourJets_eta, &b_FullyResolved_FourJets_eta);
   fChain->SetBranchAddress("FullyResolved_FourJets_phi", &FullyResolved_FourJets_phi, &b_FullyResolved_FourJets_phi);
   fChain->SetBranchAddress("FullyResolved_FourJets_m", &FullyResolved_FourJets_m, &b_FullyResolved_FourJets_m);
   fChain->SetBranchAddress("FullyResolved_FourJets_E", &FullyResolved_FourJets_E, &b_FullyResolved_FourJets_E);
   fChain->SetBranchAddress("FullyResolved_Radion_pt", &FullyResolved_Radion_pt, &b_FullyResolved_Radion_pt);
   fChain->SetBranchAddress("FullyResolved_Radion_eta", &FullyResolved_Radion_eta, &b_FullyResolved_Radion_eta);
   fChain->SetBranchAddress("FullyResolved_Radion_phi", &FullyResolved_Radion_phi, &b_FullyResolved_Radion_phi);
   fChain->SetBranchAddress("FullyResolved_Radion_m", &FullyResolved_Radion_m, &b_FullyResolved_Radion_m);
   fChain->SetBranchAddress("FullyResolved_Radion_E", &FullyResolved_Radion_E, &b_FullyResolved_Radion_E);
   Notify();
}

Bool_t Events::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Events::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Events::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Events_cxx
