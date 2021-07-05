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

    # "N_goodJets": [11, 4, 15, r'N_goodJets'],

    # "New_SumTwoMaxBScore": [100,0,2, r'Sum of Two max B-Score'],

    # "New_MaxBScore": [100,0,1, r'Max B-Score'],
    # "New_MaxBScore_Jet_pt": [100, 0, 500, r'MaxBScore_Jet_pt'],
    # "New_MaxBScore_Jet_eta": [100, -2.4, 2.4, r'MaxBScore_Jet_eta'],
    # "New_MaxBScore_Jet_phi": [100, -5, 5, r'MaxBScore_Jet_phi'],
    # "New_MaxBScore_Jet_mass": [100, 0, 30, r'MaxBScore_Jet_mass'],

    # "SumTwoMaxBjets": [100,0,2, r'Sum of Two max B-Score'],
    # "SumTwoMaxBjets_Jet_pt": [100, 0, 500, r'SumTwoMaxBjets_Jet_pt'],
    # "SumTwoMaxBjets_Jet_eta": [100, -2.4, 2.4, r'SumTwoMaxBjets_Jet_eta'],
    # "SumTwoMaxBjets_Jet_phi": [100, -5, 5, r'SumTwoMaxBjets_Jet_phi'],
    # "SumTwoMaxBjets_Jet_mass": [100, 0, 200, r'SumTwoMaxBjets_Jet_mass'],

    # "MaxBScore_MaxPt_BScore": [100,0,2, r'MaxBScore_MaxPt_BScore'],
    # "MaxBScore_MaxPt_Jet_pt": [100, 0.0, 500.0, r'MaxBScore_MaxPt_Jet_pt'],
    # "MaxBScore_MaxPt_Jet_eta": [100, -2.4, 2.4, r'MaxBScore_MaxPt_Jet_eta'],
    # "MaxBScore_MaxPt_Jet_phi": [100, -5.0, 5.0, r'MaxBScore_MaxPt_Jet_phi'],
    # "MaxBScore_MaxPt_Jet_mass": [100, 0.0, 200.0, r'MaxBScore_MaxPt_Jet_mass'],

     # "CMS_hgg_mass": [100,100,160, r'CMS_hgg_mass'],
     "New_OnShellW_LeadingJet_bDis": [100, 0, 1, r'OnShellW_LeadingJet_bDis'],
     "New_OnShellW_SubLeadingJet_bDis": [100, 0, 1, r'OnShellW_SubLeadingJet_bDis'],
     "New_OffShellW_LeadingJet_bDis": [100, 0, 1, r'OffShellW_LeadingJet_bDis'],
     "New_OffShellW_SubLeadingJet_bDis": [100, 0, 1, r'OffShellW_SubLeadingJet_bDis'],
     # "New_pTBasedSel_W1_pT": [100, 0.0, 500.0 ,r'W1 $p_T$'],
     # "New_pTBasedSel_W1_eta": [100, -2.4, 2.4 ,r'W1 $\eta$'],
     # "New_pTBasedSel_W1_phi": [100, -5.0, 5.0 ,r'W1 $\phi$'],
     # "New_pTBasedSel_W1_mass": [100, 0.0, 200.0 ,r'W1 invariant mass'],
     # "New_pTBasedSel_W1_SumBScore": [100,0,2,r'BScore sum of leading 2-jets'],
     # "New_pTBasedSel_W2_pT": [100, 0.0, 500.0 ,r'W2 $p_T$'],
     # "New_pTBasedSel_W2_eta": [100, -2.4, 2.4 ,r'W2 $\eta$'],
     # "New_pTBasedSel_W2_phi": [100, -5.0, 5.0 ,r'W2 $\phi$'],
     # "New_pTBasedSel_W2_mass": [100, 0.0, 200.0 ,r'W2 invariant mass'],
     # "New_pTBasedSel_W2_SumBScore": [100,0,2,r'BScore sum of 3rd and 4th leading jet'],
     # "New_pTBasedSel_WW_pT": [100, 0.0, 500.0 ,r'$p_T(WW)$'],
     # "New_pTBasedSel_WW_eta": [100, -2.4, 2.4 ,r'$\eta(WW)$'],
     # "New_pTBasedSel_WW_phi": [100, -5.0, 5.0 ,r'$\phi(WW)$'],
     # "New_pTBasedSel_WW_mass": [100, 0.0, 700.0 ,r'M(WW)'],
     # "New_pTBasedSel_WW_SumBScore": [100,0,4 ,r'BScore sum of 4 leading jets'],
     # "New_pTBasedSel_dR_Hgg_Jet1": [100,0,8 ,r'$\Delta R(Hgg,Jet1)$'],
     # "New_pTBasedSel_dR_Hgg_Jet2": [100,0,8 ,r'$\Delta R(Hgg,Jet2)$'],
     # "New_pTBasedSel_dR_Hgg_Jet3": [100,0,8 ,r'$\Delta R(Hgg,Jet3)$'],
     # "New_pTBasedSel_dR_Hgg_Jet4": [100,0,8 ,r'$\Delta R(Hgg,Jet4)$'],
     # "New_pTBasedSel_dPhi_Hgg_Jet1": [100,0,3.14 ,r'$\Delta \Phi(Hgg,Jet1)$'],
     # "New_pTBasedSel_dPhi_Hgg_Jet2": [100,0,3.14 ,r'$\Delta \Phi(Hgg,Jet2)$'],
     # "New_pTBasedSel_dPhi_Hgg_Jet3": [100,0,3.14 ,r'$\Delta \Phi(Hgg,Jet3)$'],
     # "New_pTBasedSel_dPhi_Hgg_Jet4": [100,0,3.14 ,r'$\Delta \Phi(Hgg,Jet4)$'],
     # "New_pTBasedSel_minDeltaR_gg4j": [100,0,8 ,r'$min(\Delta R(Hgg, jets)$'],
     # "New_pTBasedSel_maxDeltaR_gg4j": [100,0,8 ,r'$max(\Delta R(Hgg, jets)$'],
     # "New_pTBasedSel_minDeltaR_4j": [100,0,8 ,r'$min(\Delta R(jet, jet)$'],
     # "New_pTBasedSel_maxDeltaR_4j": [100,0,8 ,r'$max(\Delta R(jet, jet)$'],
     # "New_pTBasedSel_DPhi_HH": [100,0,3.14 ,r'$\Delta \Phi(Hgg,Hww)$'],
     # "New_pTBasedSel_DR_HH": [100,0,8 ,r'$\Delta R(Hgg,Hww)$'],
     # "New_pTBasedSel_a_costheta1": [100,0,1 ,r'$cos( \theta_{1} )$'],
     # "New_pTBasedSel_a_costheta2": [100,0,1 ,r'$cos( \theta_{2} )$'],
     # "New_pTBasedSel_a_costhetastar": [100,0,1 ,r'$cos( \theta_{*} )$'],
     # "New_pTBasedSel_a_Phi": [100,-3.14,3.14,r'$\phi$'],
     # "New_pTBasedSel_a_Phi1": [100, -3.14,3.14,r'$\phi_{1}$'],
     # "New_pTBasedSel_CosThetaStar_CS": [100,0,1 ,r'$cos(\theta_{*})_{cs}$'],
     # "New_pTBasedSel_CosThetaStar_CS_old": [100,0,1 ,r'$cos(\theta_{*})_{cs-old}$'],
     # "New_pTBasedSel_HelicityCostheta1": [100,0,1 ,r'Helicity $cos( \theta_{1} )$'],
     # "New_pTBasedSel_HelicityCostheta2": [100,0,1 ,r'Helicity $cos( \theta_{2} )$']
}