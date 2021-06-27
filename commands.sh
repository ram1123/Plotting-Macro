# @Author: Ram Krishna Sharma
# @Date:   2021-06-14
# @Last Modified by:   Ram Krishna Sharma
# @Last Modified time: 2021-06-27


python ReadTree_CompTwoRootFile.py -i /afs/cern.ch/user/r/rasharma/work/doubleHiggs/flashgg/ScaleWWZZ/CMSSW_10_6_8/src/WWZZ_Signal_Addition/GluGluToHHTo2G4Q_node_cHHH1_2017.root,/afs/cern.ch/user/r/rasharma/work/doubleHiggs/flashgg/ScaleWWZZ/CMSSW_10_6_8/src/WWZZ_Signal_Addition/GluGluToHHTo2B2G_node_cHHH1_2017.root,/afs/cern.ch/user/r/rasharma/work/doubleHiggs/flashgg/ScaleWWZZ/CMSSW_10_6_8/src/WWZZ_Signal_Addition/GluGluToHHTo2G2ZTo2G4Q_node_cHHH1_2017.root -t tagsDumper/trees/GluGluToHHTo2G4Q_node_cHHH1_13TeV_HHWWggTag_1,tagsDumper/trees/GluGluToHHTo2B2G_node_cHHH1_13TeV_HHWWggTag_1,tagsDumper/trees/GluGluToHHTo2G2ZTo2G4Q_node_cHHH1_13TeV_HHWWggTag_1 -l WWgg,bbgg,ZZgg --dir MorVar

time(python ReadTree_CompTwoRootFile.py -i /afs/cern.ch/user/r/rasharma/work/doubleHiggs/flashgg/ScaleWWZZ/CMSSW_10_6_8/src/WWZZ_Signal_Addition/GluGluToHHTo2G4Q_node_cHHH1_2017.root,/afs/cern.ch/user/r/rasharma/work/doubleHiggs/flashgg/ScaleWWZZ/CMSSW_10_6_8/src/WWZZ_Signal_Addition/GluGluToHHTo2B2G_node_cHHH1_2017.root,/afs/cern.ch/user/r/rasharma/work/doubleHiggs/flashgg/ScaleWWZZ/CMSSW_10_6_8/src/WWZZ_Signal_Addition/GluGluToHHTo2G2ZTo2G4Q_node_cHHH1_2017.root -t tagsDumper/trees/GluGluToHHTo2G4Q_node_cHHH1_13TeV_HHWWggTag_1,tagsDumper/trees/GluGluToHHTo2B2G_node_cHHH1_13TeV_HHWWggTag_1,tagsDumper/trees/GluGluToHHTo2G2ZTo2G4Q_node_cHHH1_13TeV_HHWWggTag_1 -l WWgg,bbgg,ZZgg --dir MorVar)

#With data
time(python ReadTree_CompTwoRootFile_Mask.py -i /afs/cern.ch/user/r/rasharma/work/doubleHiggs/flashgg/ScaleWWZZ/CMSSW_10_6_8/src/WWZZ_Signal_Addition/GluGluToHHTo2G4Q_node_cHHH1_2017.root,/afs/cern.ch/user/r/rasharma/work/doubleHiggs/flashgg/ScaleWWZZ/CMSSW_10_6_8/src/WWZZ_Signal_Addition/GluGluToHHTo2B2G_node_cHHH1_2017.root,/afs/cern.ch/user/r/rasharma/work/doubleHiggs/flashgg/ScaleWWZZ/CMSSW_10_6_8/src/WWZZ_Signal_Addition/GluGluToHHTo2G2ZTo2G4Q_node_cHHH1_2017.root,/eos/user/l/lipe/ntuple/DNN_sample/FlashggNtuples_WithMoreVars/2017_Newbbgg_v2/Data_2017.root -t tagsDumper/trees/GluGluToHHTo2G4Q_node_cHHH1_13TeV_HHWWggTag_1,tagsDumper/trees/GluGluToHHTo2B2G_node_cHHH1_13TeV_HHWWggTag_1,tagsDumper/trees/GluGluToHHTo2G2ZTo2G4Q_node_cHHH1_13TeV_HHWWggTag_1,tagsDumper/trees/Data_13TeV_HHWWggTag_1 -l WWgg,bbgg,ZZgg,DataSB --dir CompWWbb_WithData -DataPosition 3)


python ReadTree_HistOverlap.py -i /afs/cern.ch/user/r/rasharma/work/doubleHiggs/flashgg/ScaleWWZZ/CMSSW_10_6_8/src/WWZZ_Signal_Addition/GluGluToHHTo2G4Q_node_cHHH1_2017.root --dir CheckDiffMass -logY 1
python ReadTree_HistOverlap.py -i /afs/cern.ch/user/r/rasharma/work/doubleHiggs/flashgg/ScaleWWZZ/CMSSW_10_6_8/src/WWZZ_Signal_Addition/GluGluToHHTo2B2G_node_cHHH1_2017.root --dir CheckDiffMass -logY 1 -t tagsDumper/trees/GluGluToHHTo2B2G_node_cHHH1_13TeV_HHWWggTag_1


##### old
python ReadTree_2D.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_MoreStat.root --dir RapidityWeighted_functionOnly_RedsY20 -zaxis 20 &
python ReadTree_2D.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_pTWeighted_MoreStat.root --dir RapidityWeighted_pTWeighted_RedsY20 -zaxis 20  -var_file Variables_TwoDPlots_pTWeighted.py&
python ReadTree_2D.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_pTWeighted_UsingEnergy_v2_MoreStat.root --dir RapidityWeighted_pTWeightedUsingEnergyV2_RedsY20_MoreStat -zaxis 20  -var_file Variables_TwoDPlots_EnergyWeighted.py&



python ReadTree.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_MoreStat.root --dir RapidityWeighted_functionOnly_1D_RedsY20  -var_file Variables_Simple1DPlots_functionOnlly.py &
python ReadTree.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_pTWeighted_MoreStat.root --dir RapidityWeighted_pTWeighted_1D_RedsY20 &
python ReadTree.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_pTWeighted_UsingEnergy_v2_MoreStat.root --dir RapidityWeighted_pTWeightedUsingEnergyV2_1D_RedsY20 &
python ReadTree.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_pTWeighted_UsingEnergy_v2_MoreStat.root --dir RapidityWeighted_pTWeightedUsingEnergyV2_1D_Rapidity_RedsY20 -v nJettiness_Rapidity&
python ReadTree.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_pTWeighted_MoreStat.root --dir RapidityWeighted_pTWeighted_1D_Rapidity_RedsY20 -v nJettiness_Rapidity&
python ReadTree.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_MoreStat.root --dir RapidityWeighted_functionOnly_1D_Rapidity_RedsY20 -v nJettiness_Rapidity&


python ReadTree_HistOverlap.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_MoreStat.root --dir  RapidityWeighted_functionOnly_HistComp -var_file Variables_Hist_Overlap_function.py &
python ReadTree_HistOverlap.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_pTWeighted_UsingEnergy_v2_MoreStat.root --dir  RapidityWeighted_pTWeightedUsingEnergy_HistComp -var_file Variables_Hist_Overlap.py &


# Generalised Tau
#

python ReadTree.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_AllTaus.root --dir NJettiness_1D &
python ReadTree_HistOverlap.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_AllTaus.root --dir NJettiness_Comparison &

