#include "../interface/ComparisonPlots.hpp"

ComparisonPlots::ComparisonPlots(TString InputFile1, TString InputFile1_leg, TString InputFile2, TString InputFile2_leg,  TString Tree1)
{
    if (this->DEBUG)
        std::cout << "Inside class constructor..." << std::endl;
    gStyle->SetOptStat(0);
    gROOT->ForceStyle(kTRUE);
    // TGaxis::SetMaxDigits(3);

    this->InputFile1 = new TFile(InputFile1);
    this->InputFile2 = new TFile(InputFile2);
    this->Tree1 = (TTree*) this->InputFile1->Get(Tree1);
    this->Tree2 = (TTree*) this->InputFile2->Get(Tree1);


    this->InputFile1_leg = InputFile1_leg;
    this->InputFile2_leg = InputFile2_leg;
}

ComparisonPlots::~ComparisonPlots() {}

TCanvas* ComparisonPlots::SetCanvas()
{
    TCanvas* c1 = new TCanvas("c1", "c1", 800, 700);
    if (this->logY)
        c1->SetLogy(1);
    return c1;
}

TH1F* ComparisonPlots::GetHist(TString h1, int nBins, float minX, float maxX)
{
    this->nBins = nBins;
    this->minX = minX;
    this->maxX = maxX;
    TH1F* GetHist_hist1 = new TH1F("GetHist_hist1", "", nBins, minX, maxX);
    // this->Tree1->Draw(h1+">>(this->GetHist_hist1)");
    this->Tree1->Draw(h1+">>GetHist_hist1");
    return GetHist_hist1;
}

TCanvas* ComparisonPlots::SimpleHistComparison(TString h1, int nBins, float minX, float maxX)
{
    TH1F* SimpleHistComparison_hist1 = new TH1F("SimpleHistComparison_hist1", "", nBins, minX, maxX);
    TH1F* SimpleHistComparison_hist2 = new TH1F("SimpleHistComparison_hist2", "", nBins, minX, maxX);
    this->nBins = nBins;
    this->minX = minX;
    this->maxX = maxX;

    this->Tree1->Draw(h1+">>SimpleHistComparison_hist1");
    this->Tree2->Draw(h1+">>SimpleHistComparison_hist2");

    this->l1->AddEntry(SimpleHistComparison_hist1,this->InputFile1_leg);
    this->l1->AddEntry(SimpleHistComparison_hist2,this->InputFile2_leg);

    SimpleHistComparison_hist1->SetLineColor(1);
    SimpleHistComparison_hist2->SetLineColor(2);

    TCanvas* c1 = SetCanvas();

    SimpleHistComparison_hist1->Draw();
    SimpleHistComparison_hist2->Draw("same");
    this->l1->Draw();

    return c1;
}

TCanvas* ComparisonPlots::SimpleHistComparisonWithRatio(TString h1, int nBins, float minX, float maxX)
{
    this->nBins = nBins;
    this->minX = minX;
    this->maxX = maxX;

    TH1F* SimpleHistComparisonWithRatio_hist1 = new TH1F("SimpleHistComparisonWithRatio_hist1", "", nBins, minX, maxX);
    TH1F* SimpleHistComparisonWithRatio_hist2 = new TH1F("SimpleHistComparisonWithRatio_hist2", "", nBins, minX, maxX);

    this->Tree1->Draw(h1+">>SimpleHistComparisonWithRatio_hist1");
    this->Tree2->Draw(h1+">>SimpleHistComparisonWithRatio_hist2");

    this->l1->AddEntry(SimpleHistComparisonWithRatio_hist1,this->InputFile1_leg);
    this->l1->AddEntry(SimpleHistComparisonWithRatio_hist2,this->InputFile2_leg);

    SimpleHistComparisonWithRatio_hist1->SetLineColor(1);
    SimpleHistComparisonWithRatio_hist2->SetLineColor(2);

    TCanvas* c1 = SetCanvas();

    SimpleHistComparisonWithRatio_hist1->Draw();
    SimpleHistComparisonWithRatio_hist2->Draw("same");

    c1->SetLogy(1);
    TRatioPlot* rp = new TRatioPlot(SimpleHistComparisonWithRatio_hist1, SimpleHistComparisonWithRatio_hist2);
    c1->SetTicks(0, 1);
    rp->SetSeparationMargin(0.0);
    rp->Draw();
    rp->GetLowerRefYaxis()->SetTitle("ratio");
    // rp->GetUpperRefYaxis()->SetTitle("entries");
    l1->Draw();
    c1->Update();
    // c1->SaveAs("ZPrime_eg_trkIsol.png");

    return c1;
}




