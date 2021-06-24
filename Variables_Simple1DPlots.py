def merge_two_dicts(x, y):
    z = x.copy()   # start with x's keys and values
    z.update(y)    # modifies z with y's keys and values & returns None
    return z

nJettiness = {
    #
    # Style:
    # "branch_name": [nBin, minX, maxX, "X-axis title"]

    # nJettiness variables
    #
    "Tau0": [100,0,6, r'$\tau_0$'],
    "GeneralizedTau0": [100,0,6, r'$\tau_0$'],
    "GeneralizedTau1": [100,0,6, r'$\tau_1$'],
    "GeneralizedTau2": [100,0,6, r'$\tau_2$']

    # "TauB_Inc_0j": [100, 0, 1.0, r'$\tau_{B,0}$ (Inclusive Jets)'],
    # "TauB_Inc_1j": [100, 0, 1.0, r'$\tau_{B,1}$ (Inclusive Jets)'],
    # "TauB_Inc_2j": [100, 0, 1.0, r'$\tau_{B,2}$ (Inclusive Jets)'],
    # "TauB_JetConstituents_0j": [100, 0, 10.0, r'$\tau_{B,0}$  (Using Jet Const.)'],
    # "TauB_JetConstituents_1j": [100, 0, 10.0, r'$\tau_{B,1}$  (Using Jet Const.)'],
    # "TauB_JetConstituents_2j": [100, 0, 10.0, r'$\tau_{B,2}$  (Using Jet Const.)'],
    # "TauC_Inc_0j": [100, 0, 1.5, r'$\tau_{C,0}$ (Inclusive Jets)'],
    # "TauC_Inc_1j": [100, 0, 1.5, r'$\tau_{C,1}$ (Inclusive Jets)'],
    # "TauC_Inc_2j": [50, 0, 1.5, r'$\tau_{C,2}$ (Inclusive Jets)'],
    # "TauC_JetConstituents_0j": [100, 0, 10, r'$\tau_{C,0}$  (Using Jet Const.)'],
    # "TauC_JetConstituents_1j": [100, 0, 10, r'$\tau_{C,1}$  (Using Jet Const.)'],
    # "TauC_JetConstituents_2j": [50, 0, 10, r'$\tau_{C,2}$  (Using Jet Const.)'],
    # "TauCnoHRapidity_JetConstituents_0j": [100, 0, 10, r'$\tau_{C,0}$  (Using Jet Const., without H)'],
    # "TauCnoHRapidity_JetConstituents_1j": [100, 0, 10, r'$\tau_{C,1}$  (Using Jet Const., without H)'],
    # "TauCnoHRapidity_JetConstituents_2j": [50, 0, 10, r'$\tau_{C,2}$  (Using Jet Const., without H)'],
    # "TauCnoHRapidity_Inc_0j": [100, 0, 0.5, r'$\tau_{C,0}$  (Inclusive Jets, without H)'],
    # "TauCnoHRapidity_Inc_1j": [100, 0, 0.5, r'$\tau_{C,1}$  (Inclusive Jets, without H)'],
    # "TauCnoHRapidity_Inc_2j": [50, 0, 0.5, r'$\tau_{C,2}$  (Inclusive Jets, without H)'],
}

nJettiness_Rapidity = {
    "TauB_Inc_0j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{B,0}(\eta)$ '],
    "TauB_Inc_1j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{B,1}(\eta)$ '],
    "TauB_Inc_2j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{B,2}(\eta)$ '],
    "TauB_JetConstituents_0j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{B,0}(\eta)$  (Using Jet Const.)'],
    "TauB_JetConstituents_1j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{B,1}(\eta)$  (Using Jet Const.)'],
    "TauB_JetConstituents_2j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{B,2}(\eta)$  (Using Jet Const.)'],
    "TauC_Inc_0j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{C,0}(\eta)$ '],
    "TauC_Inc_1j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{C,1}(\eta)$ '],
    "TauC_Inc_2j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{C,2}(\eta)$ '],
    "TauC_JetConstituents_0j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{C,0}(\eta)$  (Using Jet Const.)'],
    "TauC_JetConstituents_1j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{C,1}(\eta)$  (Using Jet Const.)'],
    "TauC_JetConstituents_2j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{C,2}(\eta)$  (Using Jet Const.)'],
    "TauCnoHRapidity_JetConstituents_0j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{C,0}(\eta)$  (Using Jet Const. without H)'],
    "TauCnoHRapidity_JetConstituents_1j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{C,1}(\eta)$  (Using Jet Const. without H)'],
    "TauCnoHRapidity_JetConstituents_2j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{C,2}(\eta)$  (Using Jet Const. without H)'],
    "TauCnoHRapidity_Inc_0j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{C,0}(\eta)$  (without H)'],
    "TauCnoHRapidity_Inc_1j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{C,1}(\eta)$  (without H)'],
    "TauCnoHRapidity_Inc_2j_CorrRapidity": [51,-5.0, 5.0, r'$\tau_{C,2}(\eta)$  (without H)'],
}

mela = {
    #
    # Style:
    # "branch_name": [nBin, minX, maxX]

    # "mass4l": [50,0,100]

    # MELA variables
    #
    "GEND_bkg": [100,-1.1,1.1, "GEND_bkg"],
    "D_VBF1j_QG": [100,-1.1,1.1, "D_VBF1j_QG"],
    "D_HadWH": [100,-1.1,1.1, "D_HadWH"],
    "D_HadZH": [100,-1.1,1.1, "D_HadZH"],
    "D_VBF1j": [100,-1.1,1.1, "D_VBF1j"],
    "D_bkg_VBFdec": [100,-1.1,1.1, "D_bkg_VBFdec"],
    "D_bkg_VHdec": [100,-1.1,1.1, "D_bkg_VHdec"],
    "GEND_HadZH_QG": [100,-1.1,1.1, "GEND_HadZH_QG"],
    "D_g4": [100,-1.1,1.1, "D_g4"],
    "D_g1g4": [100,-1.1,1.1, "D_g1g4"],
    "GEND_HadZH": [100,-1.1,1.1, "GEND_HadZH"],
    "GEND_bkg_kin_vtx_BS": [100,-1.1,1.1, "GEND_bkg_kin_vtx_BS"],
    "GEND_bkg_kin": [100,-1.1,1.1, "GEND_bkg_kin"],
    "GEND_HadWH": [100,-1.1,1.1, "GEND_HadWH"],
    "D_bkg_kin_vtx_BS": [100,-1.1,1.1, "D_bkg_kin_vtx_BS"],
    "GEND_VBF": [100,-1.1,1.1, "GEND_VBF"],
    "GEND_g1g4": [100,-1.1,1.1, "GEND_g1g4"],
    "GEND_bkg_VBFdec": [100,-1.1,1.1, "GEND_bkg_VBFdec"],
    "GEND_VBF_QG": [100,-1.1,1.1, "GEND_VBF_QG"],
    "D_VBF": [100,-1.1,1.1, "D_VBF"],
    "D_HadZH_QG": [100,-1.1,1.1, "D_HadZH_QG"],
    "D_VBF_QG": [100,-1.1,1.1, "D_VBF_QG"],
    "GEND_g4": [100,-1.1,1.1, "GEND_g4"],
    "GEND_VBF1j": [100,-1.1,1.1, "GEND_VBF1j"],
    "GEND_bkg_VHdec": [100,-1.1,1.1, "GEND_bkg_VHdec"],
    "D_HadWH_QG": [100,-1.1,1.1, "D_HadWH_QG"],
    "GEND_VBF1j_QG": [100,-1.1,1.1, "GEND_VBF1j_QG"],
    "GEND_HadWH_QG": [100,-1.1,1.1, "GEND_HadWH_QG"],
    "D_bkg_kin": [100,-1.1,1.1, "D_bkg_kin"],
    "D_bkg": [100,-1.1,1.1, "D_bkg"],
}

others = {
    #
    # Style:
    # "branch_name": [nBin, minX, maxX]

    "mass4l": [50,0,500]

}

nJettinessMELA = merge_two_dicts(nJettiness, mela)
allvars = merge_two_dicts(nJettinessMELA, others)
# branchesToPlot = nJettiness
# branchesToPlot = mela
# branchesToPlot = merge_two_dicts(nJettiness, mela)
