#include "src/ComparisonPlots.cpp"
void plotter()
{
    TString inputFile1 = "../ZPrime_default.root";
    TString inputFile2 = "../ZPrime_PetaTrk.root";
    TString TreeName = "egHLTRun3Tree";

    ComparisonPlots CompareFun(inputFile1, "default", inputFile2, "PataTrk", TreeName);

    TCanvas* c1 = new TCanvas();
    TH1F* h1 = 0;
    h1 = CompareFun.GetHist("eg_trkIsol", 125, 0, 40);

    c1->SetLogy();
    h1->Draw();
    c1->SaveAs("eg_trkIsol_default.png");

    c1 = CompareFun.SimpleHistComparison("eg_trkIsol", 125, 0, 40);
    c1->SaveAs("eg_trkIsol_Compare.png");

    c1 = CompareFun.SimpleHistComparisonWithRatio("eg_trkIsol", 125, 0, 40);
    c1->SaveAs("eg_trkIsol_CompareRatio.png");

    c1 = CompareFun.SimpleHistComparisonWithRatio("eg_gen_et", 125, 0, 1000);
    c1->SaveAs("eg_gen_et_CompareRatio.png");
}