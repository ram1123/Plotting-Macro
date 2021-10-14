#include "src/ComparisonPlots.cpp"
void plotter()
{
    TString inputFile1 = "../ZPrime_default.root";
    TString inputFile2 = "../ZPrime_PetaTrk.root";
    TString TreeName = "egHLTRun3Tree";

    ComparisonPlots CompareFun(inputFile1, "default", inputFile2, "PataTrk", TreeName);

    TCanvas* c1 = new TCanvas();
    // TH1F* h1 = 0;
    // h1 = CompareFun.GetHist("eg_trkIsol", 125, 0, 40);
    // c1->SetLogy();
    // h1->Draw();
    // c1->SaveAs("eg_trkIsol_default.png");
    // c1->Clear();

    // c1 = CompareFun.SimpleHistComparison("eg_trkIsol", 125, 0, 40, true);
    // c1->SaveAs("eg_trkIsol_Compare.png");
    // c1->Clear();

    c1 = CompareFun.SimpleHistComparisonWithRatio("eg_trkIsol", 125, 0, 40, true);
    c1->SaveAs("eg_trkIsol.png");
    c1->Clear();

    c1 = CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 125, 0, 1000, true);
    c1->SaveAs("eg_gen_et.png");
    c1->Clear();

    c1 = CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 35, 0, 1000, true, "eg_trkIsol<1.0");
    c1->SaveAs("eg_gen_et_WithIsoCut.png");
    c1->Clear();

    c1 = CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 35, 0, 1000, true, "eg_trkIsol<1.0 && abs(eg_eta)<1.47");
    c1->SaveAs("eg_gen_et_WithIsoCut_Barrel.png");
    c1->Clear();

    c1 = CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 35, 0, 1000, true, "eg_trkIsol<1.0 && abs(eg_eta)>1.47");
    c1->SaveAs("eg_gen_et_WithIsoCut_EndCap.png");
    c1->Clear();

    CompareFun.logY = false;
    CompareFun.SetLegendPos(0.6,0.90,0.1,0.35);
    c1 = CompareFun.GetTEfficiencyByDividingTwoHist("eg_gen_et", 35, 0, 1000, false, "eg_trkIsol<1.0");
    c1->SaveAs("eg_gen_et_EfficiencyComp.png");
    c1->Clear();

    c1 = CompareFun.GetTEfficiencyByDividingTwoHist("eg_gen_et", 35, 0, 1000, false, "eg_trkIsol<1.0 && abs(eg_eta)<1.47");
    c1->SaveAs("eg_gen_et_EfficiencyComp_Barrel.png");
    c1->Clear();

    c1 = CompareFun.GetTEfficiencyByDividingTwoHist("eg_gen_et", 35, 0, 1000, false, "eg_trkIsol<1.0 && abs(eg_eta)>1.47");
    c1->SaveAs("eg_gen_et_EfficiencyComp_Endcap.png");
    c1->Clear();

}