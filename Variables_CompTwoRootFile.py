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
    "nGoodAK4jets": [20, 0, 20, r"nAK4 jets"],
    "FullyResolved_TwoLeadingJets_m": [100, 0, 1000, r"Leading 2 Jet mass"],
    "FullyResolved_ThirdFourthJets_m": [100, 0, 500, r"(3rd+4th) leading jet mass"],
    "FullyResolved_FourJets_m": [100, 0, 3000, r"Leading 4 jet mass"],
    "FullyResolved_Radion_m": [100, 0, 5000, r"Radion Mass"],
    "OneJet_FatJet_msoftdrop": [100, 0, 300, r"Higgs Jet SD mass"],
    "OneJet_FatJet_mass": [100, 0, 300, r"Higgs Jet mass"],
    "OneJet_FatJet_deepTagMD_H4qvsQCD": [100, -2, 2, r'H4q vs QCD'],
    "OneJet_FatJet_deepTagMD_WvsQCD": [100, -2, 2, r'W vs QCD'],
    "OneJet_FatJet_deepTagMD_ZvsQCD": [100, -2, 2, r'W vs QCD']
}