#ifndef _PLOTTINGVARIABLE_H
#define _PLOTTINGVARIABLE_H

#include "interface/plotvar_t.h"

const char *path = "plots_test";

TString inputFile1 = "/hpcfs/bes/mlgpu/sharma/ML_GPU/Samples/FlashggNtuples_WithMoreVars/2016/DNN_Evaluate_HHBByyvsAllDNN_binary_Nov2021_ModelSimpleV2_E140_LR1em03_B250_elu_Adam_CW_ManyVarLowHigLevelv2_BalanceYields/GluGluToHHTo2G4Q_node_cHHH1_2016.root";
TString inputFile2 = "/hpcfs/bes/mlgpu/sharma/ML_GPU/Samples/FlashggNtuples_WithMoreVars/Petr_Nov2021/2016/FHWW_NLO_2016_HaddedNew/DNN_Evaluate_HHBByyvsAllDNN_binary_Nov2021_ModelSimpleV2_E140_LR1em03_B250_elu_Adam_CW_ManyVarLowHigLevelv2_BalanceYields/GluGluToHHTo2G4Q_node_cHHH1_2016.root";
TString TreeName = "GluGluToHHTo2G4Q_node_cHHH1_13TeV_HHWWggTag_1";

const plotVar_t commonplotvars_test[] = {
    // patter to follow:
    // {"variableToPlot", nBins, minXRange, maxXRange, xlabel, outputFileName, ifLog, ifDrawLegend, legendPosition}
    {"HHCandidate_M", 51, 0, 2500, "M_{HH}", "HHCandidate_M_test", 0, 1, 2},
    {"Leading_Photon_pt", 51, 0, 1500, "Leading #gamma p_{T}", "Leading_Photon_pt_test", 0, 1, 2},
    // {"New_DPhi_gg", 51, -5, 5, "#Delta #phi", "New_DPhi_gg_test", 0, 1, 2},

    // Don't remove below line. It is used to break the loop.
    { "", 0,0.0,0.,"","",0,0 ,0}
};

#endif
