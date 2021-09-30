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

    "diphoton_m": [100, 80, 170, r"Hgg Mass"],
    # # "LHE_deltaR_HH": [100, 0, 10, r"$\Delta R(H,H)$"],
    # # "LHE_deltaEta_HH": [100, -5, 5, r"$\Delta \eta(HH)$"],
    # # "LHE_deltaPhi_HH": [100, -5, 5, r"$\Delta \phi(HH)$"],

    # # "LHEGEN_deltaR_HToGGH": [100, 0, 15, r"DiPhoton: $\Delta R(H_{LHE},H_{GEN})$"],
    # # "LHEGEN_deltaR_HToWWH": [100, 0, 15, r"WW: $\Delta R(H_{LHE},H_{GEN})$"],
    # # "DiPhoton_deltaR_LHERECO_HH": [100, 0, 10, r"DiPhoton: $\Delta R(H_{GEN},H_{RECO})$"],
    # # "OneJet_deltaR_LHERECO_HH": [100, 0, 10, r"1J: $\Delta R(H_{GEN},H_{RECO})$"],
    # # "TwoJet_deltaR_LHERECO_HH": [100, 0, 10, r"2J: $\Delta R(H_{GEN},H_{RECO})$"],
    # # "ThreeJet_deltaR_LHERECO_HH": [100, 0, 10, r"3J: $\Delta R(H_{GEN},H_{RECO})$"],
    # # "FullyResolved_deltaR_LHERECO_HH": [100, 0, 10, r"4J: $\Delta R(H_{GEN},H_{RECO})$"],

    # "DiPhoton_deltaR_GENRECO_HH": [100, 0, 2, r"DiPhoton_deltaR_GENRECO_HH"],
    # # "DiPhoton_deltaR_pho1_GENPhoton": [100, 0, 10, r"DiPhoton_deltaR_pho1_GENPhoton"],
    # # "DiPhoton_deltaR_pho2_GENPhoton": [100, 0, 10, r"DiPhoton_deltaR_pho2_GENPhoton"],
    # "OneJet_deltaR_GENRECO_HH": [100, 0, 5, r"OneJet_deltaR_GENRECO_HH"],
    # "TwoJet_deltaR_GENRECO_HH": [100, 0, 5, r"TwoJet_deltaR_GENRECO_HH"],
    # # "TwoJet_deltaR_LeadAK8WBoson_GENW": [100, 0, 10, r"TwoJet_deltaR_LeadAK8WBoson_GENW"],
    # # "TwoJet_deltaR_SubLeadAK8WBoson_GENW": [100, 0, 10, r"TwoJet_deltaR_SubLeadAK8WBoson_GENW"],
    # "ThreeJet_deltaR_GENRECO_HH": [100, 0, 5, r"ThreeJet_deltaR_GENRECO_HH"],
    # # "ThreeJet_deltaR_AK4WBoson_GENW": [100, 0, 10, r"ThreeJet_deltaR_AK4WBoson_GENW"],
    # # "ThreeJet_deltaR_AK8WBoson_GENW": [100, 0, 10, r"ThreeJet_deltaR_AK8WBoson_GENW"],
    # # "ThreeJet_deltaR_AK4_1stJet_GENW": [100, 0, 10, r"ThreeJet_deltaR_AK4_1stJet_GENW"],
    # # "ThreeJet_deltaR_AK4_2ndJet_GENW": [100, 0, 10, r"ThreeJet_deltaR_AK4_2ndJet_GENW"],
    # # "FullyResolved_deltaR_1stLeadingJet_GENQ": [100, 0, 10, r"FullyResolved_deltaR_1stLeadingJet_GENQ"],
    # # "FullyResolved_deltaR_2ndLeadingJet_GENQ": [100, 0, 10, r"FullyResolved_deltaR_2ndLeadingJet_GENQ"],
    # # "FullyResolved_deltaR_3rdLeadingJet_GENQ": [100, 0, 10, r"FullyResolved_deltaR_3rdLeadingJet_GENQ"],
    # # "FullyResolved_deltaR_4thLeadingJet_GENQ": [100, 0, 10, r"FullyResolved_deltaR_4thLeadingJet_GENQ"],
    # # "FullyResolved_deltaR_LeadingWboson_GENW": [100, 0, 10, r"FullyResolved_deltaR_LeadingWboson_GENW"],
    # # "FullyResolved_deltaR_SubLeadingWboson_GENW": [100, 0, 10, r"FullyResolved_deltaR_SubLeadingWboson_GENW"],
    # "FullyResolved_deltaR_GENRECO_HH": [100, 0, 6, r"FullyResolved_deltaR_GENRECO_HH"],

    # # RECO Deltas
    # "OneJet_deltaR_HH": [100, 0, 10, r"OneJet_deltaR_HH"],
    # "OneJet_deltaEta_HH": [100, -10, 10, r"OneJet_deltaEta_HH"],
    # "OneJet_deltaPhi_HH": [100, 0, 3.15, r"OneJet_deltaPhi_HH"],
    # "TwoJet_deltaR_HH": [100, 0, 10, r"TwoJet_deltaR_HH"],
    # "TwoJet_deltaEta_HH": [100, -10, 10, r"TwoJet_deltaEta_HH"],
    # "TwoJet_deltaPhi_HH": [100, 0, 3.15, r"TwoJet_deltaPhi_HH"],
    # "ThreeJet_deltaR_HH": [100, 0, 10, r"ThreeJet_deltaR_HH"],
    # "ThreeJet_deltaEta_HH": [100, -10, 10, r"ThreeJet_deltaEta_HH"],
    # "ThreeJet_deltaPhi_HH": [100, 0, 3.15, r"ThreeJet_deltaPhi_HH"],
    # "FullyResolved_deltaR_HH": [100, 0, 10, r"FullyResolved_deltaR_HH"],
    # "FullyResolved_deltaEta_HH": [100, -10, 10, r"FullyResolved_deltaEta_HH"],
    # "FullyResolved_deltaPhi_HH": [100, 0, 3.15, r"FullyResolved_deltaPhi_HH"],


    "nGoodAK4jets": [20, 0, 20, r"nAK4 jets"],
    "FullyResolved_TwoLeadingJets_m": [100, 0, 1000, r"Leading 2 Jet mass"],
    "FullyResolved_ThirdFourthJets_m": [100, 0, 500, r"(3rd+4th) leading jet mass"],
    "FullyResolved_FourJets_m": [100, 0, 3000, r"Leading 4 jet mass"],
    "FullyResolved_Radion_m": [100, 0, 5000, r"Radion Mass"],
    "OneJet_FatJet_msoftdrop": [100, 0, 300, r"Higgs Jet SD mass"],
    "OneJet_FatJet_mass": [100, 0, 300, r"Higgs Jet mass"],
    "OneJet_Radion_m": [100,0,5000, r'OneJet_Radion_m'],
    "TwoJet_LeadFatJet_msoftdrop": [100,0,1000, r'TwoJet_LeadFatJet_msoftdrop'],
    "TwoJet_SubLeadFatJet_msoftdrop": [100,0,1000, r'TwoJet_SubLeadFatJet_msoftdrop'],
    "TwoJet_HWW_m": [100,0,500, r'TwoJet_HWW_m'],
    "TwoJet_Radion_m": [100,0,5000, r'TwoJet_Radion_m'],
    "ThreeJet_FatJet_mass": [100,0,300, r'ThreeJet_FatJet_mass'],
    "ThreeJet_FatJet_msoftdrop": [100,0,300, r'ThreeJet_FatJet_msoftdrop'],
    "ThreeJet_Higgs_m": [100,0,1000, r'ThreeJet_Higgs_m'],
    "ThreeJet_Radion_m": [100,0,5000, r'ThreeJet_Radion_m'],

    # "OneJet_FatJet_deepTagMD_H4qvsQCD": [100, -2, 2, r'H4q vs QCD'],
    # "OneJet_FatJet_deepTagMD_WvsQCD": [100, -2, 2, r'W vs QCD'],
    # "OneJet_FatJet_deepTagMD_ZvsQCD": [100, -2, 2, r'W vs QCD']
}