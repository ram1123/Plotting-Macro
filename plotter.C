#include "src/ComparisonPlots.cpp"
// #include <filesystem>
// namespace fs = std::filesystem;
#include <sys/stat.h>
void plotter()
{
    // system("mkdir plots_ZPrime");
    // fs::create_directory("plots_ZPrime");
    const char *path = "plots_ZPrime";
    mkdir(path,S_IRWXU);
    TString inputFile1 = "../ZPrime_default.root";
    TString inputFile2 = "../ZPrime_PetaTrk.root";
    TString TreeName = "egHLTRun3Tree";

    ComparisonPlots CompareFun(inputFile1, "default", TreeName, inputFile2, "PataTrk");

    CompareFun.SimpleHistComparisonWithRatio("eg_trkIsol", 125, 0, 40, TString(path)+"/ZPrime_eg_trkIsol.png", true);
    CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 125, 0, 1000, TString(path)+"/ZPrime_eg_gen_et.png", true);
    CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 125, 0, 1000, TString(path)+"/ZPrime_eg_gen_et_Barrel.png", true, "abs(eg_eta)<1.47");
    CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 125, 0, 1000, TString(path)+"/ZPrime_eg_gen_et_Endcap.png", true, "abs(eg_eta)>1.47");
    CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 35, 0, 1000, TString(path)+"/ZPrime_eg_gen_et_TrkIsoCut.png", true, "eg_trkIsol<1.0");
    CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 35, 0, 1000, TString(path)+"/ZPrime_eg_gen_et_TrkIsoCut_Barrel.png", true, "eg_trkIsol<1.0 && abs(eg_eta)<1.47");
    CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 35, 0, 1000, TString(path)+"/ZPrime_eg_gen_et_TrkIsoCut_Endcap.png", true, "eg_trkIsol<1.0 && abs(eg_eta)>1.47");


    CompareFun.logY = false;
    CompareFun.SetLegendPos(0.6,0.90,0.1,0.35); // Bottom Right
    CompareFun.GetTEfficiencyByDividingTwoHist("eg_gen_et", 35, 0, 1000, TString(path)+"/ZPrime_eg_gen_et_EfficiencyComp.png", false, "eg_trkIsol<1.0");
    CompareFun.GetTEfficiencyByDividingTwoHist("eg_gen_et", 35, 0, 1000, TString(path)+"/ZPrime_eg_gen_et_EfficiencyComp_Barrel.png", false, "eg_trkIsol<1.0 && abs(eg_eta)<1.47");
    CompareFun.SetLegendPos(0.6,0.90,0.79,0.95); // Top Right
    CompareFun.GetTEfficiencyByDividingTwoHist("eg_gen_et", 35, 0, 1000, TString(path)+"/ZPrime_eg_gen_et_EfficiencyComp_Endcap.png", false, "eg_trkIsol<1.0 && abs(eg_eta)>1.47");

    /**
     * plot for QCD
     */
    path = "plots_QCD";
    mkdir(path,S_IRWXU);
    inputFile1 = "../QCD_default.root";
    inputFile2 = "../QCD_PetaTrk.root";

    ComparisonPlots CompareFun_QCD(inputFile1, "default", TreeName, inputFile2, "PataTrk");

    CompareFun.logY = true;
    CompareFun.SetLegendPos(0.6,0.90,0.79,0.95);
    CompareFun_QCD.SimpleHistComparisonWithRatio("eg_trkIsol", 125, 0, 40, TString(path)+"/QCD_eg_trkIsol.png", true);
    CompareFun_QCD.SimpleHistComparisonWithRatio("eg_et", 125, 0, 120, TString(path)+"/QCD_eg_et.png", true);
    CompareFun_QCD.SimpleHistComparisonWithRatio("eg_et", 125, 0, 120, TString(path)+"/QCD_eg_et_Barrel.png", true, "abs(eg_eta)<1.47");
    CompareFun_QCD.SimpleHistComparisonWithRatio("eg_et", 125, 0, 120, TString(path)+"/QCD_eg_et_Endcap.png", true, "abs(eg_eta)>1.47");
    CompareFun_QCD.SimpleHistComparisonWithRatio("eg_et", 35, 0, 120, TString(path)+"/QCD_eg_et_TrkIsoCut.png", true, "eg_trkIsol<1.0");
    CompareFun_QCD.SimpleHistComparisonWithRatio("eg_et", 35, 0, 120, TString(path)+"/QCD_eg_et_TrkIsoCut_Barrel.png", true, "eg_trkIsol<1.0 && abs(eg_eta)<1.47");
    CompareFun_QCD.SimpleHistComparisonWithRatio("eg_et", 35, 0, 120, TString(path)+"/QCD_eg_et_TrkIsoCut_Endcap.png", true, "eg_trkIsol<1.0 && abs(eg_eta)>1.47");
}
