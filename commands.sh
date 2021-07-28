# @Author: Ram Krishna Sharma
# @Date:   2021-06-14
# @Last Modified by:   Ram Krishna Sharma
# @Last Modified time: 2021-07-11

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

python ReadTree_HistOverlap.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125.root --dir NJettiness_MissingPlot_11July &


# Compare ggh , vbfh, tth
#

time(python ReadTree_CompTwoRootFile.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125.root,/afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/ttH_HToZZ_4L_M125.root,/afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/VBF_HToZZTo4L_M125.root -t Ana/passedEvents,Ana/passedEvents,Ana/passedEvents -l GluGluH,ttH,VBFH --dir Comp_SH_MissingPlot_11July)