#ifndef _VARIABLES_TEST_2D_H
#define _VARIABLES_TEST_2D_H

#include "plotvar2D_t.h"

const plotVar_t commonplotvars_test_2d[] = {
////    plotvar NBINS   MINRange  MAXRange  xlabel outfile  slog drawleg, legendPosition(LCR::0/1/2)
////
//------------  Quarks          ------------------------
//------------  Other variables ------------------------
 // {"pdgID", 7, 0, 7, "1st Quarks from W+", "pdgID", 0, 0, 0},
//------------    Photons       ------------------------
 {"gen_leading_photon_Pt", "gen_Subleading_photon_Pt", 25, 0, 1000, 25, 0, 800, "Leading Photon p_{T}",  "SubLeading Photon p_{T}", "gen_photon_Pt", 0, 1, 2},
 {"gen_leading_photon_Eta", "gen_Subleading_photon_Eta", 25, -5., 5., 25, -5., 5., "Leading Photon #eta",  "SubLeading Photon #eta", "gen_photon_Eta", 0, 0, 1},
 {"gen_leading_photon_Phi", "gen_Subleading_photon_Phi", 25, -3.5, 3.5, 25, -3.5, 3.5, "Leading Photon #phi",  "SubLeading Photon #phi", "gen_photon_Phi", 0, 0, 0},
 {"gen_leading_photon_M", "gen_Subleading_photon_M", 25, -0.00005, 0.00005, 25, -0.00003, 0.00003, "Leading Photon mass", "Sub-Leading Photon mass", "gen_photon_M", 0, 0, 0},
 
 {"gen_leading_photon_Pt", "gen_leading_photon_Eta", 25, 0, 1000, 25, -5., 5., "Leading Photon p_{T}",  "Leading Photon #eta", "gen_Leadphoton_PtVsEta", 0, 1, 2},
 {"gen_Subleading_photon_Pt", "gen_Subleading_photon_Eta", 25, 0, 1000, 25, -5., 5., "Leading Photon p_{T}",  "Leading Photon #eta", "gen_SubLeadphoton_PtVsEta", 0, 1, 2},
 {"gen_leading_photon_Eta", "gen_leading_photon_Phi", 25, -3.5, 3.5, 25, -5., 5., "Leading Photon #eta",  "Leading Photon #phi", "gen_Leadphoton_PtVsEta", 0, 1, 2},
 {"gen_Subleading_photon_Eta", "gen_Subleading_photon_Phi", 25, -3.5, 3.5, 25, -5., 5., "SubLeading Photon #eta",  "SubLeading Photon #phi", "gen_SubLeadphoton_PtVsEta", 0, 1, 2},

// //------------   W+              ------------------------
 {"gen_leading_WpJets_Pt", "gen_Subleading_WpJets_Pt", 25, 0, 1250, 25, 0, 1250, "W1 Leading jet p_{T}", "W1 Sub-Leading jet p_{T}", "gen_WpJets_Pt", 0, 1, 2},
 {"gen_leading_WpJets_Eta", "gen_Subleading_WpJets_Eta", 25, -5., 5., 25, -5., 5., "W1 Leading jet #eta", "W1 Sub-Leading jet #eta", "gen_WpJets_Eta", 0, 0, 0},
 {"gen_leading_WpJets_Phi", "gen_Subleading_WpJets_Phi", 25, -3.5, 3.5, 25, -3.5, 3.5, "W1 Leading jet #phi", "W1 Sub-Leading jet #phi", "gen_WpJets_Phi", 0, 0, 0},
 {"gen_leading_WpJets_M", "gen_Subleading_WpJets_M", 25, 0, 1.7, 25, 0, 1.7, "W1 Leading jet mass", "W1 Sub-Leading jet mass", "gen_WpJets_M", 0, 0, 0},
 
 {"gen_leading_WpJets_Pt", "gen_leading_WpJets_Eta", 25, 0, 1250, 25, -5., 5., "W1 Leading jet p_{T}", "W1 Leading jet #eta", "gen_LeadingWpJets_PtVsEta", 0, 1, 2},
 {"gen_Subleading_WpJets_Pt", "gen_Subleading_WpJets_Eta", 25, 0, 1250, 25, -5., 5., "W1 SubLeading jet p_{T}", "W1 SubLeading jet #eta", "gen_SubLeadingWpJets_PtVsEta", 0, 1, 2},
 {"gen_leading_WpJets_Eta", "gen_leading_WpJets_Phi", 25, -5., 5., 25, -3.5, 3.5, "W1 Leading jet #eta", "W1 Leading jet #phi", "gen_LeadingWpJets_Eta", 0, 0, 0},
 {"gen_Subleading_WpJets_Eta", "gen_Subleading_WpJets_Phi", 25, -5., 5., 25, -3.5, 3.5, "W1 SubLeading jet #eta", "W1 SubLeading jet #phi", "gen_SubLeadingWpJets_Eta", 0, 0, 0},

// //------------   W-              ------------------------
 {"gen_leading_WmJets_Pt", "gen_Subleading_WmJets_Pt", 25, 0, 1250, 25, 0, 1250, "W2 Leading jet p_{T}", "W2 Sub-Leading jet p_{T}", "gen_WpJets_Pt", 0, 1, 2},
 {"gen_leading_WmJets_Eta", "gen_Subleading_WmJets_Eta", 25, -5., 5., 25, -5., 5., "W2 Leading jet #eta", "W2 Sub-Leading jet #eta", "gen_WpJets_Eta", 0, 0, 0},
 {"gen_leading_WmJets_Phi", "gen_Subleading_WmJets_Phi", 25, -3.5, 3.5, 25, -3.5, 3.5, "W2 Leading jet #phi", "W2 Sub-Leading jet #phi", "gen_WpJets_Phi", 0, 0, 0},
 {"gen_leading_WmJets_M", "gen_Subleading_WmJets_M", 25, 0, 1.7, 25, 0, 1.7, "W2 Leading jet mass", "W2 Sub-Leading jet mass", "gen_WpJets_M", 0, 0, 0},

 {"gen_leading_WmJets_Pt", "gen_leading_WmJets_Eta", 25, 0, 1250, 25, -5., 5., "W1 Leading jet p_{T}", "W1 Leading jet #eta", "gen_LeadingWmJets_PtVsEta", 0, 1, 2},
 {"gen_Subleading_WmJets_Pt", "gen_Subleading_WmJets_Eta", 25, 0, 1250, 25, -5., 5., "W1 SubLeading jet p_{T}", "W1 SubLeading jet #eta", "gen_SubLeadingWmJets_PtVsEta", 0, 1, 2},
 {"gen_leading_WmJets_Eta", "gen_leading_WmJets_Phi", 25, -5., 5., 25, -3.5, 3.5, "W1 Leading jet #eta", "W1 Leading jet #phi", "gen_LeadingWmJets_Eta", 0, 0, 0},
 {"gen_Subleading_WmJets_Eta", "gen_Subleading_WmJets_Phi", 25, -5., 5., 25, -3.5, 3.5, "W1 SubLeading jet #eta", "W1 SubLeading jet #phi", "gen_SubLeadingWmJets_Eta", 0, 0, 0},

 
 {"gen_leading_WBoson_Pt", "gen_Subleading_WBoson_Pt", 25, 0, 1450, 25, 0, 800, "Leading W-boson p_{T}", "Sub-Leading W-boson p_{T}", "gen_WBoson_Pt", 0, 1, 2},
 {"gen_leading_WBoson_Eta", "gen_Subleading_WBoson_Eta", 25, -5., 5., 25, -5., 5., "Leading W-boson #eta", "Sub-Leading W-boson #eta", "gen_WBoson_Eta", 0, 0, 0},
 {"gen_leading_WBoson_Phi", "gen_Subleading_WBoson_Phi", 25, -3.5, 3.5, 25, -3.5, 3.5, "Leading W-boson #phi", "Sub-Leading W-boson #phi", "gen_WBoson_Phi", 0, 0, 0},
 {"gen_leading_WBoson_M", "gen_Subleading_WBoson_M", 25, 0, 100, 25, 0, 100, "Leading W-boson mass", "Sub-Leading W-boson mass", "gen_WBoson_M", 0, 0, 0},

 {"gen_leading_WBoson_Pt", "gen_leading_WBoson_Eta", 25, 0, 1250, 25, -5., 5., "W-boson Leading jet p_{T}", "W-boson Leading jet #eta", "gen_LeadingWBoson_PtVsEta", 0, 1, 2},
 {"gen_Subleading_WBoson_Pt", "gen_Subleading_WBoson_Eta", 25, 0, 1250, 25, -5., 5., "W-boson SubLeading jet p_{T}", "W-boson SubLeading jet #eta", "gen_SubLeadingWBoson_PtVsEta", 0, 1, 2},
 {"gen_leading_WBoson_Eta", "gen_leading_WBoson_Phi", 25, -5., 5., 25, -3.5, 3.5, "W-boson Leading jet #eta", "W-boson Leading jet #phi", "gen_LeadingWBoson_Eta", 0, 0, 0},
 {"gen_Subleading_WBoson_Eta", "gen_Subleading_WBoson_Phi", 25, -5., 5., 25, -3.5, 3.5, "W-boson SubLeading jet #eta", "W-boson SubLeading jet #phi", "gen_SubLeadingWBoson_Eta", 0, 0, 0},


// //------------   Higgs           ------------------------
 {"gen_leading_Higgs_Pt", "gen_Subleading_Higgs_Pt", 25, 0, 1100, 25, 0, 1100, "Leading Higgs p_{T}", "Sub-Leading Higgs p_{T}", "gen_Higgs_Pt", 0, 1, 2},
 // {"gen_leading_Higgs_Pt", "gen_HiggsGG_Pt", 25, 0, 1100, 25, 0, 1100, "Leading Higgs p_{T}", "HGG", "gen_Higgs_GGTEST", 0, 1, 2},
 {"gen_leading_Higgs_Eta", "gen_Subleading_Higgs_Eta", 25, -5., 5., 25, -5., 5., "Leading Higgs #eta", "Sub-Leading Higgs #eta", "gen_Higgs_Eta", 0, 0, 0},
 {"gen_leading_Higgs_Phi", "gen_Subleading_Higgs_Phi", 25, -3.5, 3.5, 25, -3.5, 3.5, "Leading Higgs #phi", "Sub-Leading Higgs #phi", "gen_Higgs_Phi", 0, 0, 0},
 {"gen_leading_Higgs_M", "gen_Subleading_Higgs_M", 25, 100, 130, 25, 100, 130, "Leading Higgs mass", "Sub-Leading Higgs mass", "gen_Higgs_M", 0, 0, 0},
 
 {"gen_leading_Higgs_Pt", "gen_leading_Higgs_Eta", 25, 0, 1100, 25, -5., 5., "Leading Higgs p_{T}", "Leading Higgs #eta", "gen_LeadingHiggs_PtVsEta", 0, 1, 2},
 {"gen_Subleading_Higgs_Pt", "gen_Subleading_Higgs_Eta", 25, 0, 1100, 25, -5., 5., "SubLeading Higgs p_{T}", "SubLeading Higgs #eta", "gen_SubLeadingHiggs_PtVsEta", 0, 1, 2},
 {"gen_leading_Higgs_Eta", "gen_leading_Higgs_Phi", 25, -5., 5., 25, -3.5, 3.5, "Leading Higgs #eta", "Leading Higgs #phi", "gen_LeadingHiggs_Eta", 0, 0, 0},
 {"gen_Subleading_Higgs_Eta", "gen_Subleading_Higgs_Phi", 25, -5., 5., 25, -3.5, 3.5, "SubLeading Higgs #eta", "SubLeading Higgs #phi", "gen_SubLeadingHiggs_Eta", 0, 0, 0},

// //------------   DeltaR          ------------------------
 {"gen_deltaR_Photon0_Photon1", "gen_leading_photon_Pt", 25, 0, 4.5, 25, 0, 1000, "#Delta R(#gamma 0, #gamma 1)", "Leading Photon p_{T}", "gen_deltaR_GG_vs_LeadPho", 0, 1, 2},
 {"gen_deltaR_Photon0_Photon1", "gen_Subleading_photon_Pt", 25, 0, 4.5, 25, 0, 1000, "#Delta R(#gamma 0, #gamma 1)", "SubLeading Photon p_{T}", "gen_deltaR_GG_vs_SubLeadPho", 0, 1, 2},
 {"gen_deltaR_WpJ0_WpJ1", "gen_leading_WBoson_Pt", 25, 0, 4.5, 25, 0, 1450, "#Delta R(W1-J0, W1-J1)", "Leading W-boson p_{T}", "gen_deltaR_WpJ0_WpJ1_VS_LeadWPT", 0, 0, 0},
 {"gen_deltaR_WpJ0_WpJ1", "gen_Subleading_WBoson_Pt", 25, 0, 4.5, 25, 0, 1450, "#Delta R(W1-J0, W1-J1)", "SubLeading W-boson p_{T}", "gen_deltaR_WpJ0_WpJ1_VS_SubLeadWPT", 0, 0, 0},
 {"gen_deltaR_WmJ0_WmJ1", "gen_leading_WBoson_Pt", 25, 0, 4.5, 25, 0, 1450, "#Delta R(W2-J0, W2-J1)", "Leading W-boson p_{T}", "gen_deltaR_WmJ0_WmJ1_VS_WPT", 0, 0, 0},
 {"gen_deltaR_WmJ0_WmJ1", "gen_Subleading_WBoson_Pt", 25, 0, 4.5, 25, 0, 1450, "#Delta R(W2-J0, W2-J1)", "SubLeading W-boson p_{T}", "gen_deltaR_WmJ0_WmJ1_VS_SubWPT", 0, 0, 0},
 {"gen_deltaR_Wp_Wm", "gen_leading_WBoson_Pt", 25, 0, 5.5, 25, 0, 1450, "#Delta R(W1, W2)", "Leading W-boson p_{T}", "gen_deltaR_Wp_Wm_LeadingWpT", 0, 1, 2},
 {"gen_deltaR_Wp_Wm", "gen_Subleading_WBoson_Pt", 25, 0, 5.5, 25, 0, 1450, "#Delta R(W1, W2)", "SubLeading W-boson p_{T}", "gen_deltaR_Wp_Wm_SubLeadingWpT", 0, 1, 2},
 {"gen_deltaR_H1_H2", "gen_leading_Higgs_Pt", 25, 0, 4.5, 25, 0, 1100, "#Delta R(H1, H2)", "Leading Higgs p_{T}", "gen_deltaR_H1_H2_Vs_LeadingH_PT", 0, 1, 2},
 {"gen_deltaR_H1_H2", "gen_Subleading_Higgs_Pt", 25, 0, 4.5, 25, 0, 1100, "#Delta R(H1, H2)", "SubLeading Higgs p_{T}", "gen_deltaR_H1_H2_Vs_SubLeadingH_PT", 0, 1, 2},
 
 {"AK4GEN_AllResolved_HH_Pt", "AK4GEN_AllResolved_HH_Eta", 25, 0, 1100, 25, 0, 4.5,  "HH p_{T}", "HH #eta", "HH_pT_vs_ETA", 0, 1, 2},

 // Don't remove below line. It is used to break the loop.
 { "","", 0,0.0,0.,0,0.0,0.,"","","",0,0 ,0}
};


#endif // _COMMONCONTROLPLOTVARS_CHS_H
