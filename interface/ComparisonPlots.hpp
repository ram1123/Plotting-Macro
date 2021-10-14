#pragma once

class ComparisonPlots {

private:
    TFile* InputFile1 = 0;
    TString InputFile1_leg = "File1";
    TTree* Tree1 = 0;

    TFile* InputFile2 = 0;
    TString InputFile2_leg = "File2";
    TTree* Tree2 = 0;

    TLegend* l1 = new TLegend(0.6,0.79,0.90,0.95);

    int nBins = 51;
    float minX = 0;
    float maxX = 10;
    // TH1F* hist1 = new TH1F("hist1", "", nBins, minX, maxX);
    // TH1F* hist2 = new TH1F("hist2", "", nBins, minX, maxX);

public:
	bool DEBUG = true;
	bool logY = true;
	ComparisonPlots(TString InputFile1, TString InputFile1_leg, TString InputFile2, TString InputFile2_leg,  TString Tree1);
	~ComparisonPlots();

    TH1F* GetHist(TString h1, int nBins, float minX, float maxX);
    TCanvas* SimpleHistComparison(TString h1, int nBins, float minX, float maxX);
    TCanvas* SimpleHistComparisonWithRatio(TString h1, int nBins, float minX, float maxX);
    // TH1F* DefineTH1F()
    // TString SearchTree(TFile&InputFile1);

    TCanvas* SetCanvas();

};