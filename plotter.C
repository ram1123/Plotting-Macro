#include "src/ComparisonPlots.cpp"
#include <sys/stat.h>


void plotter()
{
    const char *path = "plots_ZPrimev3_1";
    mkdir(path,S_IRWXU);
    TString inputFile1 = "../ZPrime_defaultv3_1.root";
    TString inputFile2 = "../ZPrime_petaTrkv3_1.root";
    TString TreeName = "egHLTRun3Tree";

    ComparisonPlots CompareFun(inputFile1, "default", TreeName, inputFile2, "PataTrk");

    Double_t TrkIso_edges[] = {0, 0.5, 1.0, 2.0, 4.0, 6.0, 8.0, 10.0, 14.0, 18.0, 22.0, 26.0, 30.0, 34, 38, 42, 80};
    Int_t TrkIso_NBINS = (sizeof(TrkIso_edges)/sizeof(*TrkIso_edges))-1;

    CompareFun.SetLegendPos(0.5,0.8,0.79,0.95); // up Right
    CompareFun.SetTRatioPlot_MinMax(0.9, 1.1);
    CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 35, 0, 1000, TString(path)+"/ZPrime_eg_gen_et.png", true);
    CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 35, 0, 1000, TString(path)+"/ZPrime_eg_gen_et_Barrel.png", true, "abs(eg_eta)<1.47");
    CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 35, 0, 1000, TString(path)+"/ZPrime_eg_gen_et_Endcap.png", true, "abs(eg_eta)>1.47");
    CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 35, 0, 1000, TString(path)+"/ZPrime_eg_gen_et_TrkIsoCut.png", true, "eg_trkIsol<1.0");
    CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 35, 0, 1000, TString(path)+"/ZPrime_eg_gen_et_TrkIsoCut_Barrel.png", true, "eg_trkIsol<1.0 && abs(eg_eta)<1.47");
    CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 35, 0, 1000, TString(path)+"/ZPrime_eg_gen_et_TrkIsoCut_Endcap.png", true, "eg_trkIsol<1.0 && abs(eg_eta)>1.47");

    CompareFun.SetLegendPos(0.6,0.90,0.35,0.6); // Bottom Right
    CompareFun.SetTRatioPlot_MinMax(0.7, 1.4);
    CompareFun.SimpleHistComparisonWithRatio("eg_trkIsol", TrkIso_NBINS, TrkIso_edges, TString(path)+"/ZPrime_eg_trkIsol.png", true);

    CompareFun.logY = false;
    CompareFun.SetLegendPos(0.6,0.90,0.1,0.35); // Bottom Right
    CompareFun.GetTEfficiencyByDividingTwoHist("eg_gen_et", 35, 0, 1000, TString(path)+"/ZPrime_eg_gen_et_EfficiencyComp.png", false, "eg_trkIsol<1.0","");
    CompareFun.GetTEfficiencyByDividingTwoHist("eg_gen_et", 35, 0, 1000, TString(path)+"/ZPrime_eg_gen_et_EfficiencyComp_Barrel.png", false, "eg_trkIsol<1.0 && abs(eg_eta)<1.47","abs(eg_eta)<1.47");
    // CompareFun.SetLegendPos(0.6,0.90,0.79,0.95); // Top Right
    CompareFun.GetTEfficiencyByDividingTwoHist("eg_gen_et", 35, 0, 1000, TString(path)+"/ZPrime_eg_gen_et_EfficiencyComp_Endcap.png", false, "eg_trkIsol<1.0 && abs(eg_eta)>1.47","abs(eg_eta)>1.47");

    /**
     * plot for QCD
     */
    // path = "plots_QCDv3";
    // mkdir(path,S_IRWXU);
    // inputFile1 = "../QCD_defaultv3.root";
    // inputFile2 = "../QCD_PetaTrkv3.root";

    // ComparisonPlots CompareFun_QCD(inputFile1, "default", TreeName, inputFile2, "PataTrk");

    // CompareFun_QCD.logY = true;
    // CompareFun_QCD.SetLegendPos(0.6,0.90,0.79,0.95);
    // // CompareFun_QCD.SimpleHistComparisonWithRatio("eg_trkIsol", 100, 0, 40, TString(path)+"/QCD_eg_trkIsol.png", true);
    // CompareFun_QCD.SimpleHistComparisonWithRatio("eg_et", 35, 0, 120, TString(path)+"/QCD_eg_et.png", true);
    // CompareFun_QCD.SimpleHistComparisonWithRatio("eg_et", 35, 0, 120, TString(path)+"/QCD_eg_et_Barrel.png", true, "abs(eg_eta)<1.47");
    // CompareFun_QCD.SimpleHistComparisonWithRatio("eg_et", 35, 0, 120, TString(path)+"/QCD_eg_et_Endcap.png", true, "abs(eg_eta)>1.47");
    // CompareFun_QCD.SimpleHistComparisonWithRatio("eg_et", 35, 0, 120, TString(path)+"/QCD_eg_et_TrkIsoCut.png", true, "eg_trkIsol<1.0");
    // CompareFun_QCD.SimpleHistComparisonWithRatio("eg_et", 35, 0, 120, TString(path)+"/QCD_eg_et_TrkIsoCut_Barrel.png", true, "eg_trkIsol<1.0 && abs(eg_eta)<1.47");
    // CompareFun_QCD.SimpleHistComparisonWithRatio("eg_et", 35, 0, 120, TString(path)+"/QCD_eg_et_TrkIsoCut_Endcap.png", true, "eg_trkIsol<1.0 && abs(eg_eta)>1.47");
}
