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

    "nrEgs": [100, 0, 20, r"Number of EG candidates"],
    "eg_et": [100, 0, 250, r"Et"],
    "eg_eta": [100, -5, 5, r"$\eta$"],
    "eg_phi": [100, -5, 5, r"$\phi$"],
    "eg_trkIsol": [100, 0, 40, r"Track Isolation"],
    "eg_energy": [100, 0, 250, r"Energy"],
    "eg_rawEnergy": [100, 0, 250, r"Raw Energy"],

    "eg_phiWidth": [100, 0, 0.5, r"phi width"],
    "eg_nrClus": [100, 0, 20, r"Number of clusters"],
    # "eg_seedId": [100, 0, 40, r"Seed ID"],
    "eg_sigmaIEtaIEta": [100, 0, 0.1, r"$\sigma_{i\eta i\eta}$"],
    "eg_sigmaIEtaIEtaNoise": [100, 0, 0.1, r"$\sigma_{i\eta i\eta}$ - Noise"],
    "eg_ecalPFIsol": [100, 0, 40, r"ecal PF Isolation"],
    "eg_hcalPFIsol": [100, 0, 40, r"hcal PF Isolation"],

}
