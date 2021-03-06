#ifndef _VARIABLES_GENPARTICLES_EFT_H
#define _VARIABLES_GENPARTICLES_EFT_H

#include "../interface/plotvar_t.h"

const plotVar_t commonplotvars_genParticles_eft[] = {
////    plotvar NBINS   MINRange  MAXRange  xlabel outfile  slog drawleg, legendPosition(LCR::0/1/2)
////
//------------  Quarks          ------------------------
//------------  Other variables ------------------------
 // {"pdgID", 7, 0, 7, "1st Quarks from W+", "pdgID", 0, 0, 0},
//------------    Photons       ------------------------
 {"gen_leading_photon_Pt", 25, 0, 600, "Leading Photon p_{T}", "gen_leading_photon_Pt", 0, 1, 2},
 {"gen_leading_photon_Eta", 25, -5., 5., "Leading Photon #eta", "gen_leading_photon_Eta", 0, 0, 1},
 {"gen_leading_photon_Phi", 25, -3.5, 3.5, "Leading Photon #phi", "gen_leading_photon_Phi", 0, 0, 0},
 {"gen_leading_photon_M", 25, -0.00005, 0.00005, "Leading Photon mass", "gen_leading_photon_M", 0, 0, 0},
 {"gen_Subleading_photon_Pt", 25, 0, 250, "Sub-Leading Photon p_{T}", "gen_Subleading_photon_Pt", 0, 1, 2},
 {"gen_Subleading_photon_Eta", 25, -5, 5, "Sub-Leading Photon #eta", "gen_Subleading_photon_Eta", 0, 0, 0},
 {"gen_Subleading_photon_Phi", 25, -3.5, 3.5, "Sub-Leading Photon #phi", "gen_Subleading_photon_Phi", 0, 0, 0},
 {"gen_Subleading_photon_M", 25, -0.00003, 0.00003, "Sub-Leading Photon mass", "gen_Subleading_photon_M", 0, 0, 0},
 {"gen_HiggsGG_Pt", 25, 0, 1200, "HH p_{T} (GeV)", "gen_HiggsGG_Pt", 0, 1, 2},
 {"gen_HiggsGG_Eta", 25, -5., 5., "HH #eta", "gen_HiggsGG_Eta", 0, 0, 2},
 {"gen_HiggsGG_Phi", 25, -3.5, 3.5, "HH #phi", "gen_HiggsGG_Phi", 0, 0, 2},
 {"gen_HiggsGG_M", 25, 0, 1000, "HH Invariant Mass (GeV)", "gen_HiggsGG_M", 0, 1, 2},

//------------  W+              ------------------------
 {"gen_leading_WpJets_Pt", 25, 0, 500, "W1 Leading jet p_{T}", "gen_leading_WpJets_Pt", 0, 1, 2},
 {"gen_leading_WpJets_Eta", 25, -5., 5., "W1 Leading jet #eta", "gen_leading_WpJets_Eta", 0, 0, 0},
 {"gen_leading_WpJets_Phi", 25, -3.5, 3.5, "W1 Leading jet #phi", "gen_leading_WpJets_Phi", 0, 0, 0},
 {"gen_leading_WpJets_M", 25, 0, 1.7, "W1 Leading jet mass", "gen_leading_WpJets_M", 0, 0, 0},
 {"gen_Subleading_WpJets_Pt", 25, 0, 250, "W1 Sub-Leading jet p_{T}", "gen_Subleading_WpJets_Pt", 0, 1, 2},
 {"gen_Subleading_WpJets_Eta", 25, -5., 5., "W1 Sub-Leading jet #eta", "gen_Subleading_WpJets_Eta", 0, 0, 0},
 {"gen_Subleading_WpJets_Phi", 25, -3.5, 3.5, "W1 Sub-Leading jet #phi", "gen_Subleading_WpJets_Phi", 0, 0, 0},
 {"gen_Subleading_WpJets_M", 25, 0, 1.7, "W1 Sub-Leading jet mass", "gen_Subleading_WpJets_M", 0, 0, 0},
 
//------------  W-              ------------------------
 {"gen_leading_WmJets_Pt", 25, 0, 500, "W2 Leading jet p_{T}", "gen_leading_WmJets_Pt", 0, 1, 2},
 {"gen_leading_WmJets_Eta", 25, -5., 5., "W2 Leading jet #eta", "gen_leading_WmJets_Eta", 0, 0, 0},
 {"gen_leading_WmJets_Phi", 25, -3.5, 3.5, "W2 Leading jet #phi", "gen_leading_WmJets_Phi", 0, 0, 0},
 {"gen_leading_WmJets_M", 25, 0, 1.7, "W2 Leading jet mass", "gen_leading_WmJets_M", 0, 0, 0},
 {"gen_Subleading_WmJets_Pt", 25, 0, 250, "W2 Sub-Leading jet p_{T}", "gen_Subleading_WmJets_Pt", 0, 1, 2},
 {"gen_Subleading_WmJets_Eta", 25, -5., 5., "W2 Sub-Leading jet #eta", "gen_Subleading_WmJets_Eta", 0, 0, 0},
 {"gen_Subleading_WmJets_Phi", 25, -3.5, 3.5, "W2 Sub-Leading jet #phi", "gen_Subleading_WmJets_Phi", 0, 0, 0},
 {"gen_Subleading_WmJets_M", 25, 0, 1.7, "W2 Sub-Leading jet mass", "gen_Subleading_WmJets_M", 0, 0, 0},
 {"gen_leading_WBoson_Pt", 25, 0, 600, "Leading W-boson p_{T}", "gen_leading_WBoson_Pt", 0, 1, 2},
 {"gen_leading_WBoson_Eta", 25, -5., 5., "Leading W-boson #eta", "gen_leading_WBoson_Eta", 0, 0, 0},
 {"gen_leading_WBoson_Phi", 25, -3.5, 3.5, "Leading W-boson #phi", "gen_leading_WBoson_Phi", 0, 0, 0},
 {"gen_leading_WBoson_M", 25, 0, 100, "Leading W-boson mass", "gen_leading_WBoson_M", 0, 0, 0},
 {"gen_Subleading_WBoson_Pt", 25, 0, 350, "Sub-Leading W-boson p_{T}", "gen_Subleading_WBoson_Pt", 0, 1, 2},
 {"gen_Subleading_WBoson_Eta", 25, -5., 5., "Sub-Leading W-boson #eta", "gen_Subleading_WBoson_Eta", 0, 0, 0},
 {"gen_Subleading_WBoson_Phi", 25, -3.5, 3.5, "Sub-Leading W-boson #phi", "gen_Subleading_WBoson_Phi", 0, 0, 0},
 {"gen_Subleading_WBoson_M", 25, 0, 100, "Sub-Leading W-boson mass", "gen_Subleading_WBoson_M", 0, 0, 0},

//------------  Higgs           ------------------------
 {"gen_leading_Higgs_Pt", 25, 0, 800, "Leading Higgs p_{T}", "gen_leading_Higgs_Pt", 0, 1, 2},
 {"gen_leading_Higgs_Eta", 25, -5., 5., "Leading Higgs #eta", "gen_leading_Higgs_Eta", 0, 0, 0},
 {"gen_leading_Higgs_Phi", 25, -3.5, 3.5, "Leading Higgs #phi", "gen_leading_Higgs_Phi", 0, 0, 0},
 {"gen_leading_Higgs_M", 25, 100, 130, "Leading Higgs mass", "gen_leading_Higgs_M", 0, 0, 0},
 {"gen_Subleading_Higgs_Pt", 25, 0, 800, "Sub-Leading Higgs p_{T}", "gen_Subleading_Higgs_Pt", 0, 1, 2},
 {"gen_Subleading_Higgs_Eta", 25, -5., 5., "Sub-Leading Higgs #eta", "gen_Subleading_Higgs_Eta", 0, 0, 0},
 {"gen_Subleading_Higgs_Phi", 25, -3.5, 3.5, "Sub-Leading Higgs #phi", "gen_Subleading_Higgs_Phi", 0, 0, 0},
 {"gen_Subleading_Higgs_M", 25, 100, 130, "Sub-Leading Higgs mass", "gen_Subleading_Higgs_M", 0, 0, 0},
 
//------------  Higgs           ------------------------
 {"gen_HH_Pt", 25, 0, 600, "HH p_{T}", "gen_HH_Pt", 0, 0, 0},
 {"gen_HH_Eta", 25, -5, 5, "HH #eta", "gen_HH_Eta", 0, 0, 0},
 {"gen_HH_Phi", 25, -3.5, 3.5, "HH #phi", "gen_HH_Phi", 0, 0, 0},
 {"gen_HH_M", 125, 0, 2000, "HH Invariant Mass", "gen_HH_M", 0, 0, 0},

//------------  DeltaR          ------------------------
 {"gen_deltaR_Photon0_Photon1", 25, 0, 4.5, "#Delta R(#gamma 0, #gamma 1)", "gen_deltaR_Photon0_Photon1", 0, 1, 2},
 {"gen_deltaR_Photon0_WmJ0", 25, 0, 4.5, "#Delta R(#gamma 0, W2-J0)", "gen_deltaR_Photon0_WmJ0", 0, 0, 0},
 {"gen_deltaR_Photon0_WmJ1", 25, 0, 4.5, "#Delta R(#gamma 0, W2-J1)", "gen_deltaR_Photon0_WmJ1", 0, 0, 0},
 {"gen_deltaR_Photon0_WpJ0", 25, 0, 4.5, "#Delta R(#gamma 0, W1-J0)", "gen_deltaR_Photon0_WpJ0", 0, 0, 0},
 {"gen_deltaR_Photon0_WpJ1", 25, 0, 4.5, "#Delta R(#gamma 0, W1-J1)", "gen_deltaR_Photon0_WpJ1", 0, 0, 0},
 {"gen_deltaR_Photon1_WmJ0", 25, 0, 4.5, "#Delta R(#gamma 1, W2-J0)", "gen_deltaR_Photon1_WmJ0", 0, 0, 0},
 {"gen_deltaR_Photon1_WmJ1", 25, 0, 4.5, "#Delta R(#gamma 1, W2-J1)", "gen_deltaR_Photon1_WmJ1", 0, 0, 0},
 {"gen_deltaR_Photon1_WpJ0", 25, 0, 4.5, "#Delta R(#gamma 1, W1-J0)", "gen_deltaR_Photon1_WpJ0", 0, 0, 0},
 {"gen_deltaR_Photon1_WpJ1", 25, 0, 4.5, "#Delta R(#gamma 1, W1-J1)", "gen_deltaR_Photon1_WpJ1", 0, 0, 0},
 {"gen_deltaR_WpJ0_WpJ1", 25, 0, 4.5, "#Delta R(W1-J0, W1-J1)", "gen_deltaR_WpJ0_WpJ1", 0, 1, 2},
 {"gen_deltaR_WpJ0_WmJ0", 25, 0, 4.5, "#Delta R(W1-J0, W2-J0)", "gen_deltaR_WpJ0_WmJ0", 0, 0, 0},
 {"gen_deltaR_WpJ0_WmJ1", 25, 0, 4.5, "#Delta R(W1-J0, W2-J1)", "gen_deltaR_WpJ0_WmJ1", 0, 0, 0},
 {"gen_deltaR_WpJ1_WmJ0", 25, 0, 4.5, "#Delta R(W1-J1, W2-J0)", "gen_deltaR_WpJ1_WmJ0", 0, 0, 0},
 {"gen_deltaR_WpJ1_WmJ1", 25, 0, 4.5, "#Delta R(W1-J1, W2-J1)", "gen_deltaR_WpJ1_WmJ1", 0, 0, 0},
 {"gen_deltaR_WmJ0_WmJ1", 25, 0, 4.5, "#Delta R(W2-J0, W2-J1)", "gen_deltaR_WmJ0_WmJ1", 0, 1, 2},
 {"gen_deltaR_Wp_Wm", 25, 0, 5.5, "#Delta R(W1, W2)", "gen_deltaR_Wp_Wm", 0, 1, 2},
 {"gen_deltaR_H1_H2", 25, 0, 4.5, "#Delta R(H1, H2)", "gen_deltaR_H1_H2", 0, 1, 0},

 {"gen_deltaPhi_Photon0_Photon1", 25, -5, 5, "#Delta #phi(#gamma 0, #gamma 1)", "gen_deltaPhi_Photon0_Photon1", 0, 0, 1},
 {"gen_deltaPhi_Wp_Wm", 25, -5, 5, "#Delta #phi(W1, W2)", "gen_deltaPhi_Wp_Wm", 0, 0, 1},
 {"gen_deltaPhi_H1_H2", 25, -5, 5, "#Delta #phi(H1, H2)", "gen_deltaPhi_H1_H2", 0, 0, 1},
 {"gen_deltaPhi_WpJ0_WpJ1", 25, -5, 5, "#Delta #phi(W1-J0, W1-J1)", "gen_deltaPhi_WpJ0_WpJ1", 0, 0, 1},
 {"gen_deltaPhi_WmJ0_WmJ1", 25, -5, 5, "#Delta #phi(W2-J0, W2-J1)", "gen_deltaPhi_WmJ0_WmJ1", 0, 0, 1},
 {"gen_deltaEta_Photon0_Photon1", 25, -6, 6, "#Delta #eta(#gamma 0, #gamma 1)", "gen_deltaEta_Photon0_Photon1", 0, 1, 2},
 {"gen_deltaEta_Wp_Wm", 25, -6, 6, "#Delta #eta(W1, W2)", "gen_deltaEta_Wp_Wm", 0, 1, 2},
 {"gen_deltaEta_H1_H2", 25, -6, 6, "#Delta #eta(H1, H2)", "gen_deltaEta_H1_H2", 0, 1, 2},
 {"gen_deltaEta_WpJ0_WpJ1", 25, -6, 6, "#Delta #eta(W1-J0, W1-J1)", "gen_deltaEta_WpJ0_WpJ1", 0, 1, 2},
 {"gen_deltaEta_WmJ0_WmJ1", 25, -6, 6, "#Delta #eta(W2-J0, W2-J1)", "gen_deltaEta_WmJ0_WmJ1", 0, 1, 2},

 // Don't remove below line. It is used to break the loop.
 { "", 0,0.0,0.,"","",0,0 ,0}
};


#endif // _COMMONCONTROLPLOTVARS_CHS_H
