# @Author: Ram Krishna Sharma
# @Date:   2021-06-14
# @Last Modified by:   Ram Krishna Sharma
# @Last Modified time: 2021-06-30

cp /afs/cern.ch/user/r/rasharma/work/doubleHiggs/ResonantAnalysis/nanoAnalyzer/CMSSW_10_6_20/src/DoubleHiggs/Selection/GluGluToRadionToHHTo2G4Q_M250.root /afs/cern.ch/user/r/rasharma/work/doubleHiggs/ResonantAnalysis/nanoAnalyzer/CMSSW_10_6_20/src/DoubleHiggs/Selection/GluGluToRadionToHHTo2G4Q_M1000.root /afs/cern.ch/user/r/rasharma/work/doubleHiggs/ResonantAnalysis/nanoAnalyzer/CMSSW_10_6_20/src/DoubleHiggs/Selection/GluGluToRadionToHHTo2G4Q_M3000.root .
# 1D plot: compare same branch from multiple root file
python ReadTree_CompTwoRootFile_Mask.py -il /afs/cern.ch/user/r/rasharma/work/doubleHiggs/ResonantAnalysis/nanoAnalyzer/CMSSW_10_6_20/src/DoubleHiggs/Selection/  -i GluGluToRadionToHHTo2G4Q_M250.root,GluGluToRadionToHHTo2G4Q_M1000.root,GluGluToRadionToHHTo2G4Q_M3000.root -t Events,Events,Events -l M250,M1000,M3000 -DataPosition 6 --dir plots_dR_01oct


# 1D plot: Compare different branches from same root file
python ReadTree_HistOverlap.py -var_file Variables_Hist_Overlap.py -i GluGluToRadionToHHTo2G4Q_M250.root -t Events --dir plots_HistOverlap

# 2D plot
# python ReadTree_2D.py  -il /afs/cern.ch/user/r/rasharma/work/doubleHiggs/ResonantAnalysis/nanoAnalyzer/CMSSW_10_6_20/src/DoubleHiggs/Selection/ -i GluGluToRadionToHHTo2G4Q_M250.root -t Events --dir plots_2D -var_file Variables_TwoDPlots.py
python ReadTree_2D.py  -il /afs/cern.ch/user/r/rasharma/work/doubleHiggs/ResonantAnalysis/nanoAnalyzer/CMSSW_10_6_20/src/DoubleHiggs/Selection/ -i GluGluToRadionToHHTo2G4Q_M250.root -t Events --dir plots_2D_New_M250 -var_file Variables_TwoDPlots.py
python ReadTree_2D.py  -il /afs/cern.ch/user/r/rasharma/work/doubleHiggs/ResonantAnalysis/nanoAnalyzer/CMSSW_10_6_20/src/DoubleHiggs/Selection/ -i GluGluToRadionToHHTo2G4Q_M1000.root -t Events --dir plots_2D_New_M1000 -var_file Variables_TwoDPlots.py
python ReadTree_2D.py  -il /afs/cern.ch/user/r/rasharma/work/doubleHiggs/ResonantAnalysis/nanoAnalyzer/CMSSW_10_6_20/src/DoubleHiggs/Selection/ -i GluGluToRadionToHHTo2G4Q_M3000.root -t Events --dir plots_2D_New_M3000 -var_file Variables_TwoDPlots.py