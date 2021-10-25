# -*- coding: utf-8 -*-
# @Author: Ram Krishna Sharma
# @Author Email: ram.krishna.sharma@cern.ch
# @Date:   2021-06-24
# @Last Modified by:   Ram Krishna Sharma
# @Last Modified time: 2021-07-05
VarSet1 = {
    #
    # Style:
    # "branch_name": [nBin, minX, maxX, "X-axis title"]
    
    ###                     ###
    ###    MC LHE level     ###
    ###                     ###
    # "Higgs_LHE_leading_pt":[100,100,300,r"Higgs_LHE_leading_pt"],
    # "Higgs_LHE_leading_eta":[100,-5,5,r"Higgs_LHE_leading_eta"],
    # "Higgs_LHE_leading_phi":[100,-4,4,r"Higgs_LHE_leading_phi"],
    # "Higgs_LHE_leading_mass":[100,100,300,r"Higgs_LHE_leading_mass"],
    # "Higgs_LHE_leading_E":[1000,100,5000,r"Higgs_LHE_leading_E"],
    # "Higgs_LHE_Subleading_pt":[100,100,500,r"Higgs_LHE_Subleading_pt"],
    # "Higgs_LHE_Subleading_eta":[100,-5,5,r"Higgs_LHE_Subleading_eta"],
    # # "Higgs_LHE_Subleading_phi":[100,-4,4,r"Higgs_LHE_Subleading_phi"],
    # # "Higgs_LHE_Subleading_mass":[100,100,300,r"Higgs_LHE_Subleading_mass"],
    # # "Higgs_LHE_Subleading_E":[1000,100,5000,r"Higgs_LHE_Subleading_E"],
    # # "Higgs_LHE_dihiggs_mass":[1000,100,3000,r"Higgs_LHE_dihiggs_mass"],

    # # todo: pt, eta, phi, and mass for Higgs boson and radion for each jet category 
    # # todo: pt, eta, phi, and mass for W-boson Where-ever its available.
    # # ----------------------------- one jet category ----------------------------- #
    # "OneJet_FatJet_pt": [100, 0, 2000, r"Onejet_Higgs_pt"],
    # "OneJet_FatJet_eta": [100, -5, 5, r"Onejet_Higgs_eta"],
    # "OneJet_FatJet_phi": [100, -3.14, 3.14, r"Onejet_Higgs_phi"],

    # "OneJet_FatJet_mass": [100, 0, 500, r"Onejet_Higgs_mass"],
    # "OneJet_Radion_m": [100, 0, 4000, r"OneJet_Radion_m"],
    # "OneJet_deltaR_HH": [100, 0, 10, r"OneJet_deltaR_HH"],
    # "OneJet_deltaEta_HH": [100, -8, 8, r"OneJet_deltaEta_HH"],
    # "OneJet_deltaPhi_HH": [100, 0, 3.14, r"OneJet_deltaPhi_HH"],

    # # # ----------------------------- two jet category ----------------------------- #
    # "TwoJet_HWW_pt": [100, -5, 3000, r"TwoJet_HWW_pt"],
    # "TwoJet_HWW_eta": [100, -5, 5, r"TwoJet_HWW_eta"],
    # "TwoJet_HWW_phi": [100, -3.14, 3.14, r"TwoJet_HWW_phi"],
    # "TwoJet_HWW_m": [100, 0, 3000, r"TwoJet_HWW_m"],
    # "TwoJet_HWW_E": [100, 0, 3000, r"TwoJet_HWW_E"],
    # "TwoJet_Radion_pt": [100, 0, 2000, r"TwoJet_Radion_pt"],
    # "TwoJet_Radion_eta": [100, -5, 5, r"TwoJet_Radion_eta"],
    # "TwoJet_Radion_phi": [100, -3.14, 3.14, r"TwoJet_Radion_phi"],
    # "TwoJet_Radion_m": [100, 0, 3000, r"TwoJet_Radion_m"],
    # "TwoJet_Radion_E": [100, 0, 5000, r"TwoJet_Radion_E"],
    # "TwoJet_deltaR_HH": [100, 0, 10, r"TwoJet_deltaR_HH"],
    # "TwoJet_deltaEta_HH": [100, -8, 8, r"TwoJet_deltaEta_HH"],
    # "TwoJet_deltaPhi_HH": [100, 0, 3.14, r"TwoJet_deltaPhi_HH"],

    # # # ---------------------------- three jet category ---------------------------- #
    # "ThreeJet_Higgs_pt": [100, 0, 2000, r"ThreeJet_Higgs_pt"],
    # "ThreeJet_Higgs_eta": [100, -5, 5, r"ThreeJet_Higgs_eta"],
    # "ThreeJet_Higgs_phi": [100, -3.14, 3.14, r"ThreeJet_Higgs_phi"],
    # "ThreeJet_Higgs_m": [100, 0, 2500, r"ThreeJet_Higgs_mass"],
    # "ThreeJet_Radion_pt": [100, 0, 800, r"ThreeJet_Radion_pt"],
    # "ThreeJet_Radion_eta": [100, -5, 5, r"ThreeJet_Radion_eta"],
    # "ThreeJet_Radion_phi": [100, -3.14, 3.14, r"ThreeJet_Radion_phi"],
    # "ThreeJet_Radion_m": [100, 0, 5000, r"ThreeJet_Radion_m"],
    # "ThreeJet_Radion_E": [100, 0, 3000, r"ThreeJet_Radion_E"],
    # "ThreeJet_deltaR_HH": [100, 0, 10, r"ThreeJet_deltaR_HH"],
    # "ThreeJet_deltaEta_HH": [100, -8, 8, r"ThreeJet_deltaEta_HH"],
    # "ThreeJet_deltaPhi_HH": [100, 0, 3.14, r"ThreeJet_deltaPhi_HH"],

    # # # ----------------------------- four jet category ---------------------------- #
    # "FullyResolved_FourJets_pt": [100, 0, 2000, r"FullyResolved_FourJets_pt"],
    # "FullyResolved_FourJets_eta": [100, -5, 5, r"FullyResolved_FourJets_eta"],
    # "FullyResolved_FourJets_phi": [100, -3.14, 3.14, r"FullyResolved_FourJets_phi"],
    # "FullyResolved_FourJets_m": [100, 0, 3000, r"FullyResolved_FourJets_mass"],
    
    # "FullyResolved_Radion_pt": [100, 0, 400, r"FullyResolved_Radion_pt"],
    # "FullyResolved_Radion_eta": [100, -5, 5, r"FullyResolved_Radion_eta"],
    # "FullyResolved_Radion_phi": [100, -3.14, 3.14, r"FullyResolved_Radion_phi"],
    # "FullyResolved_Radion_m": [100, 0, 6000, r"FullyResolved_Radion_mass"],
    # "FullyResolved_deltaR_HH": [100, 0, 10, r"FullyResolved_deltaR_HH"],
    # "FullyResolved_deltaEta_HH": [100, -8, 8, r"FullyResolved_deltaEta_HH"],
    # "FullyResolved_deltaPhi_HH": [100, 0, 3.14, r"FullyResolved_deltaPhi_HH"],


    
    # # # --------------------------------- gen level -------------------------------- #
    # "GEN_HWW_pT": [100, 0, 1800, r"GEN_HWW_pT"],
    # "GEN_HWW_eta": [100, -5, 5, r"GEN_HWW_eta"],
    # "GEN_HWW_phi": [100, -3.14, 3.14, r"GEN_HWW_phi"],
    # "GEN_HWW_energy": [100, 0, 2000, r"GEN_HWW_energy"],
    # "GEN_HGG_pT": [100, 0, 1800, r"GEN_HGG_pT"],
    # "GEN_HGG_eta": [100, -5, 5, r"GEN_HGG_eta"],
    # "GEN_HGG_phi": [100, -3.14, 3.14, r"GEN_HGG_phi"],
    # "GEN_HGG_energy": [100, 0, 2500, r"GEN_HGG_energy"],
    # "GEN_deltaR_HH": [100, 0, 10, r"GEN_deltaR_HH"],
    # "GEN_deltaEta_HH": [100, -8, 8, r"GEN_deltaEta_HH"],
    # "GEN_deltaPhi_HH": [100, 0, 3.14, r"GEN_deltaPhi_HH"],



    # # --------------------------------- diphoton --------------------------------- #
    # "diphoton_m": [100, 80, 170, r"Hgg Mass"],
    # "diphoton_pt":[1000,100,2000,r"diphoton_pt"],
    # "diphoton_eta":[1000,-5,5,r"diphoton_eta"],
    # "diphoton_phi":[1000,-4,4,r"diphoton_phi"],
    # "diphoton_E":[1000,100,2200,r"diphoton_E"],
    # ------------------------------- deltaR check ------------------------------- #
    # "GEN_deltaR_GG": [100, 0, 4, r"GEN_deltaR_GG"],
    # "GEN_deltaR_HH": [100, 0, 6, r"GEN_deltaR_HH"],
    # "GEN_deltaR_WW": [100, 0, 5, r"GEN_deltaR_WW"],
    # "GEN_deltaR_MIN4Q": [100, 0, 4, r"GEN_deltaR_MIN4Q"],
    # "diphoton_dRgg": [100, 0, 6, r"diphoton_dRgg"],
    # "OneJet_deltaR_HH": [100, 0, 6, r"OneJet_deltaR_HH"],
    # "ThreeJet_deltaR_WW": [100, 0, 6, r"ThreeJet_deltaR_WW"],
    # "FullyResolved_deltaR_MinAlljeta": [100, 0, 4, r"FullyResolved_deltaR_MinAlljeta"],
    # "DiPhoton_deltaR_GENRECO_HH": [100, 0, 1, r"DiPhoton_deltaR_GENRECO_HH"],
    # "LHE_H1_p": [100, 0, 2000, r"LHE_H1_p"],
    # "LHE_H2_p": [100, 0, 2000, r"LHE_H2_p"],
    # "LHE_H1_pt": [100, 0, 2000, r"LHE_H1_pt"],
    # "LHE_H2_pt": [100, 0, 2000, r"LHE_H2_pt"],
    # "LHE_H1_pz": [100, 0, 2000, r"LHE_H1_pz"],
    # "LHE_H2_pz": [100, 0, 2000, r"LHE_H2_pz"],
    # "LHE_H1_eta": [100, -5, 5, r"LHE_H1_eta"],
    # "LHE_H2_eta": [100, -5, 5, r"LHE_H2_eta"],
    # "LHE_H1_phi": [100, -4, 4, r"LHE_H1_phi"],
    # "LHE_H2_phi": [100, -4, 4, r"LHE_H2_phi"],
    # "LHE_Radion_p": [100, 0, 2000, r"LHE_Radion_p"],
    # "LHE_Radion_pt": [100, -1, 1, r"LHE_Radion_pt"],
    # "LHE_Radion_pz": [100, 0, 5000, r"LHE_Radion_pz"],
    # "LHE_Radion_eta": [100, -5, 5, r"LHE_Radion_eta"],
    # "LHE_Radion_phi": [100, -4, 4, r"LHE_Radion_phi"]
#     "TwoJet_deltaR_GENRECO_HH": [100, 0, 10, r"TwoJet_deltaR_GENRECO_HH"],
#     "Leading_photon_deltaR_GENRECO_G": [100, 0, 5, r"Leading_photon_deltaR_GENRECO_G"],
#     "SubLeading_photon_deltaR_GENRECO_G": [100, 0, 6, r"SubLeading_photon_deltaR_GENRECO_G"],
#     "OneJet_deltaR_GENRECO_HH": [100, 0, 6, r"OneJet_deltaR_GENRECO_HH"],
#     "TwoJet_deltaR_GENRECO_HH": [100, 0, 7, r"TwoJet_deltaR_GENRECO_HH"], 
#     "TwoJet_deltaR_LeadAK8WBoson_GENW": [100, 0, 6, r"TwoJet_deltaR_LeadAK8WBoson_GENW"],
#     "TwoJet_deltaR_SubLeadAK8WBoson_GENW": [100, 0, 6, r"TwoJet_deltaR_SubLeadAK8WBoson_GENW"],
#     "ThreeJet_deltaR_AK4_1stJet_GENW": [100, 0, 6, r"ThreeJet_deltaR_AK4_1stJet_GENW"],
#     "ThreeJet_deltaR_AK4_2ndJet_GENW": [100, 0, 6, r"ThreeJet_deltaR_AK4_2ndJet_GENW"],
#     "ThreeJet_deltaR_WW": [100, 0, 7, r"ThreeJet_deltaR_WW"],
#     "FullyResolved_deltaR_1stLeadingJet_GENQ": [100, 0, 5,r"FullyResolved_deltaR_1stLeadingJet_GENQ"],
#     "FullyResolved_deltaR_2ndLeadingJet_GENQ": [100, 0, 5,r"FullyResolved_deltaR_2ndLeadingJet_GENQ"],
#     "FullyResolved_deltaR_3rdLeadingJet_GENQ": [100, 0, 5,r"FullyResolved_deltaR_3rdLeadingJet_GENQ"],
#     "FullyResolved_deltaR_HH": [100, 0, 6, r"FullyResolved_deltaR_HH"],
#     "FullyResolved_deltaR_4thLeadingJet_GENQ": [100, 0, 5,r"FullyResolved_deltaR_4thLeadingJet_GENQ"]
    #LHE level
    # "LHE_Radion_HH_p": [100, 0, 3000, r"LHE_Radion_HH_p"],
    # "LHE_Radion_HH_pt": [100, -1, 1, r"LHE_Radion_HH_pt"],
    # "LHE_Radion_HH_pz": [100, 0, 5000, r"LHE_Radion_HH_pz"],
    # "LHE_Radion_HH_m": [100, 0, 4000, r"LHE_Radion_HH_m"],
    # "LHE_Radion_HH_E": [100, 0, 5000, r"LHE_Radion_HH_E"],
    # "LHE_Radion_HH_eta": [100, -5, 5, r"LHE_Radion_HH_eta"],
    # "LHE_Radion_HH_phi": [100, -4, 4, r"LHE_Radion_HH_phi"],
    #GEN level
    #x->HH
    # "GEN_Radion_HH_p": [100, 0, 2000, r"GEN_Radion_HH_p"],
    # "GEN_Radion_HH_pt": [100, 0, 2000, r"GEN_Radion_HH_pt"],
    # "GEN_Radion_HH_pz": [100, 0, 3000, r"GEN_Radion_HH_pz"],
    # "GEN_Radion_HH_m": [100, 1, 2000, r"GEN_Radion_HH_m"],
    # "GEN_Radion_HH_E": [100, 0, 5000, r"GEN_Radion_HH_E"],
    # "GEN_Radion_HH_eta": [100, -5, 5, r"GEN_Radion_HH_eta"],
    # "GEN_Radion_HH_phi": [100, -4, 4, r"GEN_Radion_HH_phi"],
    #x->WWgg·
    # "GEN_Radion_WWgg_p": [100, 0, 2000, r"GEN_Radion_WWgg_p"],
    # "GEN_Radion_WWgg_pt": [100, 0, 2000, r"GEN_Radion_WWgg_pt"],
    # "GEN_Radion_WWgg_pz": [100, 0, 5000, r"GEN_Radion_WWgg_pz"],
    # "GEN_Radion_WWgg_m": [100, 0, 4000, r"GEN_Radion_WWgg_m"],
    # "GEN_Radion_WWgg_E": [100, 0, 5000, r"GEN_Radion_WWgg_E"],
    # "GEN_Radion_WWgg_eta": [100, -5, 5, r"GEN_Radion_WWgg_eta"],
    # "GEN_Radion_WWgg_phi": [100, -4, 4, r"GEN_Radion_WWgg_phi"],

    #RECO level
    # one jet catogory
    # "OneJet_Radion_p": [100, 0, 2000, r"OneJet_Radion_p"],
    # "OneJet_Radion_pt": [100, 0, 2000, r"OneJet_Radion_pt"],
    "OneJet_Radion_pz": [100, 0, 3000, r"OneJet_Radion_pz"],
    # "OneJet_Radion_m": [100, 0, 4000, r"OneJet_Radion_m"],
    # "OneJet_Radion_E": [100, 0, 5000, r"OneJet_Radion_E"],
    # "OneJet_Radion_eta": [100, -5, 5, r"OneJet_Radion_eta"],
    # "OneJet_Radion_phi": [100, -4, 4, r"OneJet_Radion_phi"],

    # # two jet catogory
    # "TwoJet_Radion_p": [100, 0, 2000, r"TwoJet_Radion_p"],
    # "TwoJet_Radion_pt": [100, 0, 2000, r"TwoJet_Radion_pt"],
    # "TwoJet_Radion_pz": [100, 0, 5000, r"TwoJet_Radion_pz"],
    # "TwoJet_Radion_m": [100, 0, 6000, r"TwoJet_Radion_m"],
    # "TwoJet_Radion_E": [100, 0, 5000, r"TwoJet_Radion_E"],
    # "TwoJet_Radion_eta": [100, -5, 5, r"TwoJet_Radion_eta"],
    # "TwoJet_Radion_phi": [100, -4, 4, r"TwoJet_Radion_phi"],
    # # three jet catogory
    # "ThreeJet_Radion_p": [100, 0, 2000, r"ThreeJet_Radion_p"],
    # "ThreeJet_Radion_pt": [100, 0, 2000, r"ThreeJet_Radion_pt"],
    # "ThreeJet_Radion_pz": [100, 0, 5000, r"ThreeJet_Radion_pz"],
    # "ThreeJet_Radion_m": [100, 0, 6000, r"ThreeJet_Radion_m"],
    # "ThreeJet_Radion_E": [100, 0, 5000, r"ThreeJet_Radion_E"],
    # "ThreeJet_Radion_eta": [100, -5, 5, r"ThreeJet_Radion_eta"],
    # "ThreeJet_Radion_phi": [100, -4, 4, r"ThreeJet_Radion_phi"],
    # # four jet catogory
    # "FullyResolved_Radion_p": [100, 0, 2000, r"FullyResolved_Radion_p"],
    # "FullyResolved_Radion_pt": [100, 0, 2000, r"FullyResolved_Radion_pt"],
    # "FullyResolved_Radion_pz": [100, 0, 5000, r"FullyResolved_Radion_pz"],
    # "FullyResolved_Radion_m": [100, 0, 4000, r"FullyResolved_Radion_m"],
    # "FullyResolved_Radion_E": [100, 0, 5000, r"FullyResolved_Radion_E"],
    # "FullyResolved_Radion_eta": [100, -5, 5, r"FullyResolved_Radion_eta"],
    # "FullyResolved_Radion_phi": [100, -4, 4, r"FullyResolved_Radion_phi"]
    


}