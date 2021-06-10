def merge_two_dicts(x, y):
    z = x.copy()   # start with x's keys and values
    z.update(y)    # modifies z with y's keys and values & returns None
    return z

nJettiness = {
    #
    # Style:
    # "branch_name": [nBin, minX, maxX]

    # nJettiness variables
    #
    # "GeneralTau": [51,0,0.01],
    # "GeneralTau1": [51,0,0.01],
    # "GeneralTau2": [51,0,0.01],
    # "GeneralTau3": [25,-100,100]

    "TauB_Inc_0j": [100, 0, 1500, "TauB"],
    "TauB_Inc_1j": [100, 0, 1500],
    "TauB_Inc_2j": [100, 0, 1500],
    "TauB_JetConstituents_0j": [100, 0, 1500],
    "TauB_JetConstituents_1j": [100, 0, 1500],
    "TauB_JetConstituents_2j": [100, 0, 1500],

    "TauC_Inc_0j": [100, 0, 70],
    "TauC_Inc_1j": [100, 0, 70],
    "TauC_Inc_2j": [50, 0, 70],
    "TauC_JetConstituents_0j": [100, 0, 70],
    "TauC_JetConstituents_1j": [100, 0, 70],
    "TauC_JetConstituents_2j": [50, 0, 70],
    "TauCnoHRapidity_JetConstituents_0j": [100, 0, 70],
    "TauCnoHRapidity_JetConstituents_1j": [100, 0, 70],
    "TauCnoHRapidity_JetConstituents_2j": [50, 0, 70],
    "TauCnoHRapidity_Inc_0j": [100, 0, 70],
    "TauCnoHRapidity_Inc_1j": [100, 0, 70],
    "TauCnoHRapidity_Inc_2j": [50, 0, 70],
}

nJettiness_Rapidity = {
    "TauB_Inc_0j_CorrRapidity": [51,-5.0, 5.0],
    "TauB_Inc_1j_CorrRapidity": [51,-5.0, 5.0],
    "TauB_Inc_2j_CorrRapidity": [51,-5.0, 5.0],
    "TauB_JetConstituents_0j_CorrRapidity": [51,-5.0, 5.0],
    "TauB_JetConstituents_1j_CorrRapidity": [51,-5.0, 5.0],
    "TauB_JetConstituents_2j_CorrRapidity": [51,-5.0, 5.0],

    "TauC_Inc_0j_CorrRapidity": [51,-5.0, 5.0],
    "TauC_Inc_1j_CorrRapidity": [51,-5.0, 5.0],
    "TauC_Inc_2j_CorrRapidity": [51,-5.0, 5.0],
    "TauC_JetConstituents_0j_CorrRapidity": [51,-5.0, 5.0],
    "TauC_JetConstituents_1j_CorrRapidity": [51,-5.0, 5.0],
    "TauC_JetConstituents_2j_CorrRapidity": [51,-5.0, 5.0],
    "TauCnoHRapidity_JetConstituents_0j_CorrRapidity": [51,-5.0, 5.0],
    "TauCnoHRapidity_JetConstituents_1j_CorrRapidity": [51,-5.0, 5.0],
    "TauCnoHRapidity_JetConstituents_2j_CorrRapidity": [51,-5.0, 5.0],
    "TauCnoHRapidity_Inc_0j_CorrRapidity": [51,-5.0, 5.0],
    "TauCnoHRapidity_Inc_1j_CorrRapidity": [51,-5.0, 5.0],
    "TauCnoHRapidity_Inc_2j_CorrRapidity": [51,-5.0, 5.0],
}

mela = {
    #
    # Style:
    # "branch_name": [nBin, minX, maxX]

    # "mass4l": [50,0,100]

    # MELA variables
    #
    "GEND_bkg": [100,-1.1,1.1],
    "D_VBF1j_QG": [100,-1.1,1.1],
    "D_HadWH": [100,-1.1,1.1],
    "D_HadZH": [100,-1.1,1.1],
    "D_VBF1j": [100,-1.1,1.1],
    "D_bkg_VBFdec": [100,-1.1,1.1],
    "D_bkg_VHdec": [100,-1.1,1.1],
    "GEND_HadZH_QG": [100,-1.1,1.1],
    "D_g4": [100,-1.1,1.1],
    "D_g1g4": [100,-1.1,1.1],
    "GEND_HadZH": [100,-1.1,1.1],
    "GEND_bkg_kin_vtx_BS": [100,-1.1,1.1],
    "GEND_bkg_kin": [100,-1.1,1.1],
    "GEND_HadWH": [100,-1.1,1.1],
    "D_bkg_kin_vtx_BS": [100,-1.1,1.1],
    "GEND_VBF": [100,-1.1,1.1],
    "GEND_g1g4": [100,-1.1,1.1],
    "GEND_bkg_VBFdec": [100,-1.1,1.1],
    "GEND_VBF_QG": [100,-1.1,1.1],
    "D_VBF": [100,-1.1,1.1],
    "D_HadZH_QG": [100,-1.1,1.1],
    "D_VBF_QG": [100,-1.1,1.1],
    "GEND_g4": [100,-1.1,1.1],
    "GEND_VBF1j": [100,-1.1,1.1],
    "GEND_bkg_VHdec": [100,-1.1,1.1],
    "D_HadWH_QG": [100,-1.1,1.1],
    "GEND_VBF1j_QG": [100,-1.1,1.1],
    "GEND_HadWH_QG": [100,-1.1,1.1],
    "D_bkg_kin": [100,-1.1,1.1],
    "D_bkg": [100,-1.1,1.1],
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
