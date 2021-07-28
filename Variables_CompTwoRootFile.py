# -*- coding: utf-8 -*-
# @Author: Ram Krishna Sharma
# @Author Email: ram.krishna.sharma@cern.ch
# @Date:   2021-06-24
# @Last Modified by:   Ram Krishna Sharma
# @Last Modified time: 2021-07-11
VarSet1 = {
    #
    # Style:
    # "branch_name": [nBin, minX, maxX, r"X-axis title"]
    # "CMS_hgg_mass": [100,100,160, r'CMS_hgg_mass'],

#
#time(python ReadTree_CompTwoRootFile_Mask.py -i /afs/cern.ch/user/r/rasharma/work/doubleHiggs/flashgg/ScaleWWZZ/CMSSW_10_6_8/src/WWZZ_Signal_Addition/GluGluToHHTo2G4Q_node_cHHH1_2017.root,/afs/cern.ch/user/r/rasharma/work/doubleHiggs/flashgg/ScaleWWZZ/CMSSW_10_6_8/src/WWZZ_Signal_Addition/GluGluToHHTo2B2G_node_cHHH1_2017.root,/afs/cern.ch/user/r/rasharma/work/doubleHiggs/flashgg/ScaleWWZZ/CMSSW_10_6_8/src/WWZZ_Signal_Addition/GluGluToHHTo2G2ZTo2G4Q_node_cHHH1_2017.root,/afs/cern.ch/user/r/rasharma/work/doubleHiggs/flashgg/ScaleWWZZ/CMSSW_10_6_8/src/WWZZ_Signal_Addition/Data_2017.root -t tagsDumper/trees/GluGluToHHTo2G4Q_node_cHHH1_13TeV_HHWWggTag_1,tagsDumper/trees/GluGluToHHTo2B2G_node_cHHH1_13TeV_HHWWggTag_1,tagsDumper/trees/GluGluToHHTo2G2ZTo2G4Q_node_cHHH1_13TeV_HHWWggTag_1,tagsDumper/trees/Data_13TeV_HHWWggTag_1 -l WWgg,bbgg,ZZgg,DataSB --dir After_BScoreBugFix -DataPosition 3)
#


    "GeneralizedTau0": [100,0,6, r'0-Jettiness'],
    "GeneralizedTau1": [100,0,6, r'1-Jettiness'],
    "GeneralizedTau2": [100,0,6, r'2-Jettiness']


    # "TauB_Inc_1j_pTWgt/TauB_Inc_0j_pTWgt": [100, 0, 1.0, r'$\tau_{B,1}/\tau_{B,0}$'],
    # "TauB_Inc_2j_pTWgt/TauB_Inc_1j_pTWgt": [100, 0, 1.0, r'$\tau_{B,2}/\tau_{B,1}$'],
    # "TauB_Inc_2j_pTWgt/TauB_Inc_0j_pTWgt": [100, 0, 1.0, r'$\tau_{B,2}/\tau_{B,0}$'],

    # "TauC_Inc_1j_pTWgt/TauC_Inc_0j_pTWgt": [100, 0, 1.0, r'$\tau_{C,1}/\tau_{C,0}$'],
    # "TauC_Inc_2j_pTWgt/TauC_Inc_1j_pTWgt": [100, 0, 1.0, r'$\tau_{C,2}/\tau_{C,1}$'],
    # "TauC_Inc_2j_pTWgt/TauC_Inc_0j_pTWgt": [100, 0, 1.0, r'$\tau_{C,2}/\tau_{C,0}$'],

    # "TauBnoHRapidity_Inc_1j_pTWgt/TauBnoHRapidity_Inc_0j_pTWgt": [100, 0, 1.0, r'$\tau_{B,1}/\tau_{B,0} (Y_H = 0)$'],
    # "TauBnoHRapidity_Inc_2j_pTWgt/TauBnoHRapidity_Inc_1j_pTWgt": [100, 0, 1.0, r'$\tau_{B,2}/\tau_{B,1} (Y_H = 0)$'],
    # "TauBnoHRapidity_Inc_2j_pTWgt/TauBnoHRapidity_Inc_0j_pTWgt": [100, 0, 1.0, r'$\tau_{B,2}/\tau_{B,0} (Y_H = 0)$'],

    # "TauCnoHRapidity_Inc_1j_pTWgt/TauCnoHRapidity_Inc_0j_pTWgt": [100, 0, 1.0, r'$\tau_{C,1}/\tau_{C,0} (Y_H = 0)$'],
    # "TauCnoHRapidity_Inc_2j_pTWgt/TauCnoHRapidity_Inc_1j_pTWgt": [100, 0, 1.0, r'$\tau_{C,2}/\tau_{C,1} (Y_H = 0)$'],
    # "TauCnoHRapidity_Inc_2j_pTWgt/TauCnoHRapidity_Inc_0j_pTWgt": [100, 0, 1.0, r'$\tau_{C,2}/\tau_{C,0} (Y_H = 0)$'],

    # "TauB_Inc_0j": [100, 0, 1.0, r'$f(y_{j}) = e^{-|y_{j} - Y_H|}$'],
    # "TauB_Inc_0j_pTWgt": [100, 0, 70, r'$\tau_{B,0} = |\vec{p}_{Tj}|e^{-|y_{j} - Y_H|}$'],
    # "TauB_Inc_0j_EnergyWgt": [100, 0, 70, r'$\tau_{B,0} = E_j - |p_{Z,j}|$'],
    # "TauBnoHRapidity_Inc_0j": [100, 0, 1.0, r'$f(y_{j}) = e^{-|y_{j}|}$'],
    # "TauBnoHRapidity_Inc_0j_pTWgt": [100, 0, 70, r'$\tau_{B,0} = |\vec{p}_{Tj}|e^{-|y_{j}|}$'],
    # "TauBnoHRapidity_Inc_0j_EnergyWgt": [100, 0, 70, r'$\tau_{B,0} = E_j - |p_{Z,j}|$'],

    # "TauC_Inc_0j": [100, 0, 1.0, r'$f(y_{j})=\frac{1}{2cosh(y_{j} - Y_H)}$'],
    # "TauC_Inc_0j_pTWgt": [100, 0, 70, r'$\tau_{C,0}=|\vec{p}_{Tj}|\frac{1}{2cosh(y_{j} - Y_H)}$'],
    # "TauC_Inc_0j_EnergyWgt": [100, 0, 70, r'$\tau_{C,0} = \frac{\sqrt{E^2_j-p^2_{Z,j}}}{2cosh(y_{j} - Y_H)}$'],
    # "TauCnoHRapidity_Inc_0j": [100, 0, 1.0, r'$f(y_{j})=\frac{1}{2cosh(y_{j})}$'],
    # "TauCnoHRapidity_Inc_0j_pTWgt": [100, 0, 70, r'$\tau_{C,0}=|\vec{p}_{Tj}|\frac{1}{2cosh(y_{j})}$'],
    # "TauCnoHRapidity_Inc_0j_EnergyWgt": [100, 0, 70, r'$\tau_{C,0} = \frac{\sqrt{E^2_j-p^2_{Z,j}}}{2cosh(y_{j})}$'],

    # "TauB_Inc_1j": [100, 0, 1.0, r'$f(y_{j}) = e^{-|y_{j} - Y_H|}$'],
    # "TauB_Inc_1j_pTWgt": [100, 0, 70, r'$\tau_{B,1} = |\vec{p}_{Tj}|e^{-|y_{j} - Y_H|}$'],
    # "TauB_Inc_1j_EnergyWgt": [100, 0, 70, r'$\tau_{B,1} = E_j - |p_{Z,j}|$'],
    # "TauBnoHRapidity_Inc_1j": [100, 0, 1.0, r'$f(y_{j}) = e^{-|y_{j}|}$'],
    # "TauBnoHRapidity_Inc_1j_pTWgt": [100, 0, 70, r'$\tau_{B,1} = |\vec{p}_{Tj}|e^{-|y_{j}|}$'],
    # "TauBnoHRapidity_Inc_1j_EnergyWgt": [100, 0, 70, r'$\tau_{B,1} = E_j - |p_{Z,j}|$'],

    # "TauC_Inc_1j": [100, 0, 1.0, r'$f(y_{j})=\frac{1}{2cosh(y_{j} - Y_H)}$'],
    # "TauC_Inc_1j_pTWgt": [100, 0, 70, r'$\tau_{C,1}=|\vec{p}_{Tj}|\frac{1}{2cosh(y_{j} - Y_H)}$'],
    # "TauC_Inc_1j_EnergyWgt": [100, 0, 70, r'$\tau_{C,1} = \frac{\sqrt{E^2_j-p^2_{Z,j}}}{2cosh(y_{j} - Y_H)}$'],
    # "TauCnoHRapidity_Inc_1j": [100, 0, 1.0, r'$f(y_{j})=\frac{1}{2cosh(y_{j})}$'],
    # "TauCnoHRapidity_Inc_1j_pTWgt": [100, 0, 70, r'$\tau_{C,1}=|\vec{p}_{Tj}|\frac{1}{2cosh(y_{j})}$'],
    # "TauCnoHRapidity_Inc_1j_EnergyWgt": [100, 0, 70, r'$\tau_{C,1} = \frac{\sqrt{E^2_j-p^2_{Z,j}}}{2cosh(y_{j})}$'],

    # "TauB_Inc_2j": [100, 0, 1.0, r'$f(y_{j}) = e^{-|y_{j} - Y_H|}$'],
    # "TauB_Inc_2j_pTWgt": [100, 0, 70, r'$\tau_{B,2} = |\vec{p}_{Tj}|e^{-|y_{j} - Y_H|}$'],
    # "TauB_Inc_2j_EnergyWgt": [100, 0, 70, r'$\tau_{B,2} = E_j - |p_{Z,j}|$'],
    # "TauBnoHRapidity_Inc_2j": [100, 0, 1.0, r'$f(y_{j}) = e^{-|y_{j}|}$'],
    # "TauBnoHRapidity_Inc_2j_pTWgt": [100, 0, 70, r'$\tau_{B,2} = |\vec{p}_{Tj}|e^{-|y_{j}|}$'],
    # "TauBnoHRapidity_Inc_2j_EnergyWgt": [100, 0, 70, r'$\tau_{B,2} = E_j - |p_{Z,j}|$'],

    # "TauC_Inc_2j": [100, 0, 1.0, r'$f(y_{j})=\frac{1}{2cosh(y_{j} - Y_H)}$'],
    # "TauC_Inc_2j_pTWgt": [100, 0, 70, r'$\tau_{C,2}=|\vec{p}_{Tj}|\frac{1}{2cosh(y_{j} - Y_H)}$'],
    # "TauC_Inc_2j_EnergyWgt": [100, 0, 70, r'$\tau_{C,2} = \frac{\sqrt{E^2_j-p^2_{Z,j}}}{2cosh(y_{j} - Y_H)}$'],
    # "TauCnoHRapidity_Inc_2j": [100, 0, 1.0, r'$f(y_{j})=\frac{1}{2cosh(y_{j})}$'],
    # "TauCnoHRapidity_Inc_2j_pTWgt": [100, 0, 70, r'$\tau_{C,2}=|\vec{p}_{Tj}|\frac{1}{2cosh(y_{j})}$'],
    # "TauCnoHRapidity_Inc_2j_EnergyWgt": [100, 0, 70, r'$\tau_{C,2} = \frac{\sqrt{E^2_j-p^2_{Z,j}}}{2cosh(y_{j})}$'],

}