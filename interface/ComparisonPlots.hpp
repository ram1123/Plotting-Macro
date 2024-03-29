#pragma once

class ComparisonPlots {

private:
    TFile* InputFile1 = 0;  ///< First input root file
    TString InputFile1_leg = "File1"; ///< Legend to be used for first input root file
    TTree* Tree1 = 0;   ///< Tree name for the first input root file

    TFile* InputFile2 = 0; ///< Second input root file
    TString InputFile2_leg = "File2"; ///< Legend to be used for second input root file
    TTree* Tree2 = 0; ///< Tree name for the second input root file

    TH1F* hist1= 0; ///< First histogram
    TH1F* hist2= 0; ///< Second histogram

    std::vector<TFile*>     vectorOfTFile;
    std::vector<TTree*>     vectorOfTTree;
    std::vector<TString>   vectorOfFileLegend;
    std::vector<TH1F*>      vectorOfTH1F;

    float x1 = 0.60; ///< Legend x1 positons
    float x2 = 0.90; ///< Legend x2 positons
    float y1 = 0.79; ///< Legend x3 positons
    float y2 = 0.95; ///< Legend x4 positons

public:
	bool DEBUG = true;
	bool logY = true;
    ComparisonPlots(TString InputFile1, TString InputFile1_leg, TString Tree1,
                    TString InputFile2 = "", TString InputFile2_leg = "", TString Tree2 = "");
    ComparisonPlots(TString TFileList[], TString LegendNames [], TString TTreeList[], int sizeOfArray);
	~ComparisonPlots();

    TCanvas* SetCanvas();
    TLegend* GetLegend();
    void ChangeLegendNames(TString InputFile1_leg, TString InputFile2_leg);
    void SetLegendPos(float x1, float x2, float y1, float y2);

    TH1F* DefineHist(TString h1, int nBins, float minX, float maxX, int LineColor = 1);
    TH1F* DefineHist(TString h1, Int_t nBins, Double_t nBins_Edges[]);
    TH1F* GetHist(TString h1, int nBins, float minX, float maxX, int LineColor = 1);
    void CompareTwoBranchesOneTree(TString h1, TString h2, int nBins, float minX, float maxX, TString outputFileName = "");

    void CompareBranchesFromSameTree(TString branchesList[], int branchesSize, int nBins, float minx, float maxX, TString outputFileName = "");

    TCanvas* SimpleHistComparison(TString h1, int nBins, float minX, float maxX, bool NormUnity);

    TCanvas* SimpleHistComparisonWithRatio(TString h1, int nBins, float minX, float maxX, bool NormUnity = true, TCut cut="" );
    TCanvas* SimpleHistComparisonWithRatio(TString h1, Int_t nBins, Double_t nBins_Edges[], bool NormUnity = true, TCut cut="");
    void     SimpleHistComparisonWithRatio(TString h1, int nBins, float minX, float maxX, TString outputFileName = "", bool NormUnity = true, TCut cut="");
    void     SimpleHistComparisonWithRatio(TString h1, Int_t nBins, Double_t nBins_Edges[], TString outputFileName = "", bool NormUnity = true, TCut cut="");

    TCanvas* GetTEfficiencyByDividingTwoHist(TString h1, int nBins, float minX, float maxX, bool NormUnity = false, TCut NumeratorCut = "", TCut DenominatorCut = "");
    void     GetTEfficiencyByDividingTwoHist(TString h1, int nBins, float minX, float maxX, TString outputFileName= "", bool NormUnity = false, TCut NumeratorCut = "", TCut DenominatorCut = "");

    // TString SearchTree(TFile&InputFile1);
};