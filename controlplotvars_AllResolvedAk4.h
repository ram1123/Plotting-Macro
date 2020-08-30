#ifndef _COMMONCONTROLPLOTVARS_ALLRESOLVED_H
#define _COMMONCONTROLPLOTVARS_ALLRESOLVED_H

#include "plotvar_t.h"

const plotVar_t commonplotvars_allResolved[] = {
////    plotvar NBINS	MINRange  MAXRange	xlabel outfile  slog drawleg, legendPosition(LCR::0/1/2)
////
//------------	Quarks			------------------------
//------------	Other variables	------------------------
 // {"pdgID", 7, 0, 7, "1st Quarks from W+", "pdgID", 0, 0, 0},
//------------    Photons  		------------------------
 {"gen_leading_photon_Pt", 25, 0, 1500, "Leading Photon p_{T}", "gen_leading_photon_Pt", 0, 1, 2},
 {"gen_leading_photon_Eta", 25, -5., 5., "Leading Photon #eta", "gen_leading_photon_Eta", 0, 0, 1},
 {"gen_leading_photon_Phi", 25, -3.5, 3.5, "Leading Photon #phi", "gen_leading_photon_Phi", 0, 0, 0},
 {"gen_leading_photon_M", 25, -0.00005, 0.00005, "Leading Photon mass", "gen_leading_photon_M", 0, 0, 0},
 {"gen_Subleading_photon_Pt", 25, 0, 500, "Sub-Leading Photon p_{T}", "gen_Subleading_photon_Pt", 0, 1, 2},
 {"gen_Subleading_photon_Eta", 25, -5, 5, "Sub-Leading Photon #eta", "gen_Subleading_photon_Eta", 0, 0, 0},
 {"gen_Subleading_photon_Phi", 25, -3.5, 3.5, "Sub-Leading Photon #phi", "gen_Subleading_photon_Phi", 0, 0, 0},
 {"gen_Subleading_photon_M", 25, -0.00003, 0.00003, "Sub-Leading Photon mass", "gen_Subleading_photon_M", 0, 0, 0},

//------------	Jets			------------------------
 {"genJetAK4_njets", 35, 0, 35, "number of cleaned AK4 jets", "genJetAK4_njets", 0, 0, 0},
 {"genJetAK8_njets", 25, 0, 25.0, "Number of cleaned AK8 jets", "genJetAK8_njets", 0, 0, 0},

//------------ GEN Jet Variables ---------------
{"AK4GEN_AllResolved_onShellJet1_Pt",55, 0, 150,"AK4 OnShell Jet1 p_{T}","AK4GEN_AllResolved_onShellJet1_Pt",	0, 1, 2},
{"AK4GEN_AllResolved_onShellJet1_Eta",25, -5, 5,"AK4 OnShell Jet1 #eta","AK4GEN_AllResolved_onShellJet1_Eta",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet1_Phi",25, -3.5, 3.5,"AK4 OnShell Jet1 #phi","AK4GEN_AllResolved_onShellJet1_Phi",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet1_M",55, 0, 40,"AK4 OnShell Jet1 mass","AK4GEN_AllResolved_onShellJet1_M",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet1_dR_q1",25, 0, 7,"#Delta R(AK4 OnShell Jet1, Quark1)","AK4GEN_AllResolved_onShellJet1_dR_q1",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet1_dR_q2",25, 0, 7,"#Delta R(AK4 OnShell Jet1, Quark2)","AK4GEN_AllResolved_onShellJet1_dR_q2",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet1_dR_q3",25, 0, 7,"#Delta R(AK4 OnShell Jet1, Quark3)","AK4GEN_AllResolved_onShellJet1_dR_q3",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet1_dR_q4",25, 0, 7,"#Delta R(AK4 OnShell Jet1, Quark4)","AK4GEN_AllResolved_onShellJet1_dR_q4",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet1_dR_g1",25, 0, 7,"#Delta R(AK4 OnShell Jet1, Photon1)","AK4GEN_AllResolved_onShellJet1_dR_g1",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet1_dR_g2",25, 0, 7,"#Delta R(AK4 OnShell Jet1, Photon2)","AK4GEN_AllResolved_onShellJet1_dR_g2",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet2_Pt",55, 0, 150,"AK4 OnShell Jet2 p_{T}","AK4GEN_AllResolved_onShellJet2_Pt",	0, 1, 2},
{"AK4GEN_AllResolved_onShellJet2_Eta",25, -5, 5,"AK4 OnShell Jet2 #eta","AK4GEN_AllResolved_onShellJet2_Eta",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet2_Phi",25, -3.5, 3.5,"AK4 OnShell Jet2 #phi","AK4GEN_AllResolved_onShellJet2_Phi",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet2_M",55, 0, 40,"AK4 OnShell Jet2 mass","AK4GEN_AllResolved_onShellJet2_M",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJets_dR",25, 0, 7,"#Delta R(AK4 OnShell Jet1, Jet2)","AK4GEN_AllResolved_onShellJets_dR",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet2_dR_q1",25, 0, 7,"#Delta R(AK4 OnShell Jet1, Quark1)","AK4GEN_AllResolved_onShellJet2_dR_q1",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet2_dR_q2",25, 0, 7,"#Delta R(AK4 OnShell Jet1, Quark2)","AK4GEN_AllResolved_onShellJet2_dR_q2",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet2_dR_q3",25, 0, 7,"#Delta R(AK4 OnShell Jet1, Quark3)","AK4GEN_AllResolved_onShellJet2_dR_q3",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet2_dR_q4",25, 0, 7,"#Delta R(AK4 OnShell Jet1, Quark4)","AK4GEN_AllResolved_onShellJet2_dR_q4",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet2_dR_g1",25, 0, 7,"#Delta R(AK4 OnShell Jet1, Photon1)","AK4GEN_AllResolved_onShellJet2_dR_g1",	0, 0, 0},
{"AK4GEN_AllResolved_onShellJet2_dR_g2",25, 0, 7,"#Delta R(AK4 OnShell Jet1, Photon2)","AK4GEN_AllResolved_onShellJet2_dR_g2",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet1_Pt",55, 0, 150,"AK4 OffShell Jet1 p_{T}","AK4GEN_AllResolved_offShellJet1_Pt",	0, 1, 2},
{"AK4GEN_AllResolved_offShellJet1_Eta",25, -5, 5,"AK4 OffShell Jet1  #eta","AK4GEN_AllResolved_offShellJet1_Eta",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet1_Phi",25, -3.5, 3.5,"AK4 OffShell Jet1  #phi","AK4GEN_AllResolved_offShellJet1_Phi",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet1_M",55, 0, 40,"AK4 OffShell Jet1  mass","AK4GEN_AllResolved_offShellJet1_M",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet1_dR_q1",25, 0, 7,"#Delta R(AK4 OffShell Jet1, Quark1)","AK4GEN_AllResolved_offShellJet1_dR_q1",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet1_dR_q2",25, 0, 7,"#Delta R(AK4 OffShell Jet1, Quark2)","AK4GEN_AllResolved_offShellJet1_dR_q2",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet1_dR_q3",25, 0, 7,"#Delta R(AK4 OffShell Jet1, Quark3)","AK4GEN_AllResolved_offShellJet1_dR_q3",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet1_dR_q4",25, 0, 7,"#Delta R(AK4 OffShell Jet1, Quark4)","AK4GEN_AllResolved_offShellJet1_dR_q4",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet1_dR_g1",25, 0, 7,"#Delta R(AK4 OffShell Jet1, Photon1)","AK4GEN_AllResolved_offShellJet1_dR_g1",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet1_dR_g2",25, 0, 7,"#Delta R(AK4 OffShell Jet1, Photon2)","AK4GEN_AllResolved_offShellJet1_dR_g2",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet2_Pt",55, 0, 150,"AK4 OffShell Jet2 p_{T}","AK4GEN_AllResolved_offShellJet2_Pt",	0, 1, 2},
{"AK4GEN_AllResolved_offShellJet2_Eta",25, -5, 5,"AK4 OffShell Jet2  #eta","AK4GEN_AllResolved_offShellJet2_Eta",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet2_Phi",25, -3.5, 3.5,"AK4 OffShell Jet2  #phi","AK4GEN_AllResolved_offShellJet2_Phi",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet2_M",55, 0, 40,"AK4 OffShell Jet2  mass","AK4GEN_AllResolved_offShellJet2_M",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJets_dR",25, 0, 7,"#Delta R(AK4 OffShell Wjet, AK4OnShell Wjet)","AK4GEN_AllResolved_offShellJets_dR",	0, 0, 0},
{"AK4GEN_AllResolved_onShelloffShellJets_dR",25, 0, 7,"AK4 #DeltaR(OnShell W, OffShell W)","AK4GEN_AllResolved_onShelloffShellJets_dR",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet2_dR_q1",25, 0, 7,"#Delta R(AK4 OffShell Jet2, Quark1)","AK4GEN_AllResolved_offShellJet2_dR_q1",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet2_dR_q2",25, 0, 7,"#Delta R(AK4 OffShell Jet2, Quark2)","AK4GEN_AllResolved_offShellJet2_dR_q2",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet2_dR_q3",25, 0, 7,"#Delta R(AK4 OffShell Jet2, Quark3)","AK4GEN_AllResolved_offShellJet2_dR_q3",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet2_dR_q4",25, 0, 7,"#Delta R(AK4 OffShell Jet2, Quark4)","AK4GEN_AllResolved_offShellJet2_dR_q4",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet2_dR_g1",25, 0, 7,"#Delta R(AK4 OffShell Jet2, Photon1)","AK4GEN_AllResolved_offShellJet2_dR_g1",	0, 0, 0},
{"AK4GEN_AllResolved_offShellJet2_dR_g2",25, 0, 7,"#Delta R(AK4 OffShell Jet2, Photon2)","AK4GEN_AllResolved_offShellJet2_dR_g2",	0, 0, 0},
{"AK4GEN_AllResolved_onShellWboson_Pt",55, 0, 200,"AK4 OnShell W p_{T}","AK4GEN_AllResolved_onShellWboson_Pt",	0, 1, 2},
{"AK4GEN_AllResolved_onShellWboson_Eta",25, -5, 5,"AK4 OnShell W  #eta","AK4GEN_AllResolved_onShellWboson_Eta",	0, 0, 0},
{"AK4GEN_AllResolved_onShellWboson_Phi",25, -3.5, 3.5,"AK4 OnShell W  #phi","AK4GEN_AllResolved_onShellWboson_Phi",	0, 0, 0},
{"AK4GEN_AllResolved_onShellWboson_M",55, 0, 110,"AK4 OnShell W  mass","AK4GEN_AllResolved_onShellWboson_M",	0, 0, 0},
{"AK4GEN_AllResolved_onShellWboson_dR_W0PID",25, 0, 7,"#Delta R(AK4 OnShell W, W1 PID)","AK4GEN_AllResolved_onShellWboson_dR_W0PID",	0, 0, 0},
{"AK4GEN_AllResolved_onShellWboson_dR_W1PID",25, 0, 7,"#Delta R(AK4 OnShell W, W2 PID)","AK4GEN_AllResolved_onShellWboson_dR_W1PID",	0, 0, 0},
{"AK4GEN_AllResolved_offShellWboson_Pt",55, 0, 200,"AK4 OffShell W p_{T}","AK4GEN_AllResolved_offShellWboson_Pt",	0, 1, 2},
{"AK4GEN_AllResolved_offShellWboson_Eta",25, -5, 5,"AK4 OffShell W  #eta","AK4GEN_AllResolved_offShellWboson_Eta",	0, 0, 0},
{"AK4GEN_AllResolved_offShellWboson_Phi",25, -3.5, 3.5,"AK4 OffShell W  #phi","AK4GEN_AllResolved_offShellWboson_Phi",	0, 0, 0},
{"AK4GEN_AllResolved_offShellWboson_M",55, 0, 110,"AK4 OffShell W  mass","AK4GEN_AllResolved_offShellWboson_M",	0, 0, 0},
{"AK4GEN_AllResolved_offShellWboson_dR_W0PID",25, 0, 7,"#Delta R(AK4 OffShell W, W1 PID)","AK4GEN_AllResolved_offShellWboson_dR_W0PID",	0, 0, 0},
{"AK4GEN_AllResolved_offShellWboson_dR_W1PID",25, 0, 7,"#Delta R(AK4 OffShell W, W2 PID)","AK4GEN_AllResolved_offShellWboson_dR_W1PID",	0, 0, 0},
{"AK4GEN_AllResolved_Higgs_Pt",25, 0, 500,"AK4 Higgs jet p_{T}","AK4GEN_AllResolved_Higgs_Pt",	0, 1, 2},
{"AK4GEN_AllResolved_Higgs_Eta",25, -5, 5,"AK4 Higgs jet #eta","AK4GEN_AllResolved_Higgs_Eta",	0, 0, 0},
{"AK4GEN_AllResolved_Higgs_Phi",25, -3.5, 3.5,"AK4 Higgs jet #phi","AK4GEN_AllResolved_Higgs_Phi",	0, 0, 0},
{"AK4GEN_AllResolved_Higgs_M",195, 0, 160,"AK4 Higgs jet M","AK4GEN_AllResolved_Higgs_M",	0, 0, 0},
{"AK4GEN_AllResolved_Higgs_DR_Higgs0PID",25, 0, 7,"#Delta R(AK4 higgs, higgs1 PID)","AK4GEN_AllResolved_Higgs_DR_Higgs0PID",	0, 1, 2},
{"AK4GEN_AllResolved_Higgs_DR_Higgs1PID",25, 0, 7,"#Delta R(AK4 higgs, higgs2 PID)","AK4GEN_AllResolved_Higgs_DR_Higgs1PID",	0, 1, 2}, 

 // Don't remove below line. It is used to break the loop.
 { "", 0,0.0,0.,"","",0,0 ,0}
};


#endif // _COMMONCONTROLPLOTVARS_CHS_H
