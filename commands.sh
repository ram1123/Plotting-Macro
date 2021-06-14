# @Author: Ram Krishna Sharma
# @Date:   2021-06-14
# @Last Modified by:   Ram Krishna Sharma
# @Last Modified time: 2021-06-14

# python ReadTree_2D.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy.root --dir RapidityWeighted_functionOnly_RedsY20 -zaxis 20 &
python ReadTree_2D.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_pTWeighted.root --dir RapidityWeighted_pTWeighted_RedsY20 -zaxis 20  -var_file Variables_TwoDPlots_pTWeighted.py&
# python ReadTree_2D.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_pTWeighted_UsingEnergy.root --dir RapidityWeighted_pTWeightedUsingEnergy_RedsY20 -zaxis 20  -var_file Variables_TwoDPlots_EnergyWeighted.py&
python ReadTree_2D.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_pTWeighted_UsingEnergy_v2.root --dir RapidityWeighted_pTWeightedUsingEnergyV2_RedsY20 -zaxis 20  -var_file Variables_TwoDPlots_EnergyWeighted.py&



python ReadTree.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy.root --dir RapidityWeighted_functionOnly_1D_RedsY20  -var_file Variables_Simple1DPlots_functionOnlly.py &
python ReadTree.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_pTWeighted.root --dir RapidityWeighted_pTWeighted_1D_RedsY20 &
python ReadTree.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_pTWeighted_UsingEnergy.root --dir RapidityWeighted_pTWeightedUsingEnergy_1D_RedsY20 &
python ReadTree.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_pTWeighted_UsingEnergy_v2.root --dir RapidityWeighted_pTWeightedUsingEnergyV2_1D_RedsY20 &
python ReadTree.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_pTWeighted_UsingEnergy_v2.root --dir RapidityWeighted_pTWeightedUsingEnergyV2_1D_Rapidity_RedsY20 -v nJettiness_Rapidity&
python ReadTree.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy_pTWeighted.root --dir RapidityWeighted_pTWeighted_1D_Rapidity_RedsY20 -v nJettiness_Rapidity&
python ReadTree.py -i /afs/cern.ch/user/r/rasharma/work/h4L_analysis/UFHZZAnalyzer/CMSSW_10_6_12/src/GluGluHToZZTo4L_M125_fy.root --dir RapidityWeighted_functionOnly_1D_Rapidity_RedsY20 -v nJettiness_Rapidity&
