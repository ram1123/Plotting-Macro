#pragma once

class ComparisonPlots {

private:
    TFile* InputFile1 = 0;
    TString InputFile1_leg = "File1";
    TTree* Tree1 = 0;
    TH1F* hist1= 0;

    TFile* InputFile2 = 0;
    TString InputFile2_leg = "File2";
    TTree* Tree2 = 0;
    TH1F* hist2= 0;


    int nBins = 51;
    float minX = 0;
    float maxX = 10;
    float x1 = 0.6, x2 = 0.9, y1 = 0.79, y2 = 0.95;

public:
	bool DEBUG = true;
	bool logY = true;
    ComparisonPlots(TString InputFile1, TString InputFile1_leg, TString Tree1,
                    TString InputFile2 = "", TString InputFile2_leg = "", TString Tree2 = "");
	~ComparisonPlots();

    TCanvas* SetCanvas();
    TLegend* GetLegend();
    void ChangeLegendNames(TString InputFile1_leg, TString InputFile2_leg);
    void SetLegendPos(float x1, float x2, float y1, float y2);

    TH1F* GetHist(TString h1, int nBins, float minX, float maxX);

    TCanvas* SimpleHistComparison(TString h1, int nBins, float minX, float maxX, bool NormUnity);

    TCanvas* SimpleHistComparisonWithRatio(TString h1, int nBins, float minX, float maxX, bool NormUnity = true, TCut cut="");
    void     SimpleHistComparisonWithRatio(TString h1, int nBins, float minX, float maxX, TString outputFileName = "", bool NormUnity = true, TCut cut="");

    TCanvas* GetTEfficiencyByDividingTwoHist(TString h1, int nBins, float minX, float maxX, bool NormUnity, TCut cut="");

    // TString SearchTree(TFile&InputFile1);
};