#include "../interface/ComparisonPlots.hpp"

ComparisonPlots::ComparisonPlots(TString InputFile1, TString InputFile1_leg, TString InputFile2, TString InputFile2_leg,  TString Tree1)
{
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
    delete gROOT->FindObject("c1");
    TCanvas* c1 = new TCanvas("c1", "c1", 800, 700);
    if (this->logY)
        c1->SetLogy(1);
    return c1;
}

TLegend* ComparisonPlots::GetLegend()
{
    delete gROOT->FindObject("l1");
    TLegend* l1 = new TLegend(x1, y1, x2, y2);
    return l1;
}

void ComparisonPlots::SetLegendPos(float x1, float x2, float y1, float y2)
{
    this->x1 = x1;
    this->x2 = x2;
    this->y1 = y1;
    this->y2 = y2;
}

TH1F* ComparisonPlots::GetHist(TString h1, int nBins, float minX, float maxX)
{
    this->nBins = nBins;
    this->minX = minX;
    this->maxX = maxX;
    // TH1F* GetHist_hist1 = new TH1F("GetHist_hist1", "", nBins, minX, maxX);
    delete gROOT->FindObject("hist1");
    hist1 = 0;
    hist1 = new TH1F("hist1", "", nBins, minX, maxX);
    // this->Tree1->Draw(h1+">>(this->GetHist_hist1)");
    this->Tree1->Draw(h1+">>hist1");
    return hist1;
}

TCanvas* ComparisonPlots::SimpleHistComparison(TString h1, int nBins, float minX, float maxX, bool NormUnity)
{
    // TH1F* SimpleHistComparison_hist1 = new TH1F("SimpleHistComparison_hist1", "", nBins, minX, maxX);
    // TH1F* SimpleHistComparison_hist2 = new TH1F("SimpleHistComparison_hist2", "", nBins, minX, maxX);
    delete gROOT->FindObject("hist1");
    delete gROOT->FindObject("hist2");
    hist1 = 0;
    hist2 = 0;
    hist1 = new TH1F("hist1", "", nBins, minX, maxX);
    hist2 = new TH1F("hist2", "", nBins, minX, maxX);
    TLegend* l1 = GetLegend();
    // l1->Clear();

    this->nBins = nBins;
    this->minX = minX;
    this->maxX = maxX;

    this->Tree1->Draw(h1+">>hist1");
    this->Tree2->Draw(h1+">>hist2");

    if (NormUnity)
    {
        hist1->Scale(1.0/hist1->Integral());
        hist2->Scale(1.0/hist2->Integral());
    }

    l1->AddEntry(hist1,this->InputFile1_leg);
    l1->AddEntry(hist2,this->InputFile2_leg);

    hist1->SetLineColor(1);
    hist2->SetLineColor(2);

    TCanvas* c1 = SetCanvas();

    hist1->Draw();
    hist2->Draw("same");
    l1->Draw();

    return c1;
}

TCanvas* ComparisonPlots::SimpleHistComparisonWithRatio(TString h1, int nBins, float minX, float maxX, bool NormUnity, TCut cut)
{
    this->nBins = nBins;
    this->minX = minX;
    this->maxX = maxX;

    TLegend* l1 = GetLegend();
    // l1->Clear();

    // TH1F* hist1 = new TH1F("hist1", "", nBins, minX, maxX);
    // TH1F* hist2 = new TH1F("hist2", "", nBins, minX, maxX);
    delete gROOT->FindObject("hist1");
    delete gROOT->FindObject("hist2");

    hist1 = 0;
    hist2 = 0;
    hist1 = new TH1F("hist1", "", nBins, minX, maxX);
    hist2 = new TH1F("hist2", "", nBins, minX, maxX);

    this->Tree1->Draw(h1+">>hist1",cut);
    this->Tree2->Draw(h1+">>hist2",cut);

    if (NormUnity)
    {
        hist1->Scale(1.0/hist1->Integral());
        hist2->Scale(1.0/hist2->Integral());
    }

    l1->AddEntry(hist1,this->InputFile1_leg);
    l1->AddEntry(hist2,this->InputFile2_leg);

    hist1->SetLineColor(1);
    hist2->SetLineColor(2);

    TCanvas* c1 = SetCanvas();

    hist1->Draw();
    hist2->Draw("same");

    c1->SetLogy(1);
    TRatioPlot* rp = new TRatioPlot(hist1, hist2);
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

TCanvas* ComparisonPlots::GetTEfficiencyByDividingTwoHist(TString h1, int nBins, float minX, float maxX, bool NormUnity, TCut cut)
{
    // TH1F* SimpleHistComparison_hist1 = new TH1F("SimpleHistComparison_hist1", "", nBins, minX, maxX);
    // TH1F* SimpleHistComparison_hist2 = new TH1F("SimpleHistComparison_hist2", "", nBins, minX, maxX);
    delete gROOT->FindObject("hist1");
    delete gROOT->FindObject("hist2");
    delete gROOT->FindObject("hist1_num");
    delete gROOT->FindObject("hist2_num");
    hist1 = 0;
    hist2 = 0;
    hist1 = new TH1F("hist1", "", nBins, minX, maxX);
    hist2 = new TH1F("hist2", "", nBins, minX, maxX);

    TH1F* hist1_num = new TH1F("hist1_num", "", nBins, minX, maxX);
    TH1F* hist2_num = new TH1F("hist2_num", "", nBins, minX, maxX);

    // l1->Clear();
    TLegend* l1 = GetLegend();

    this->Tree1->Draw(h1+">>hist1");
    this->Tree2->Draw(h1+">>hist2");
    this->Tree1->Draw(h1+">>hist1_num",cut);
    this->Tree2->Draw(h1+">>hist2_num",cut);

    hist1->SetLineColor(1);
    hist2->SetLineColor(2);
    hist1_num->SetLineColor(1);
    hist2_num->SetLineColor(2);

    TCanvas* c1 = SetCanvas();

    TEfficiency* pEff_sig = new TEfficiency(*hist1_num,*hist1);
    pEff_sig->SetLineColor(1);
    pEff_sig->SetMarkerColor(1);
    pEff_sig->SetTitle(";gen E_{T} [GeV];per electron efficiency");

    TEfficiency* pEff_sig_PataTrk = new TEfficiency(*hist2_num,*hist2);
    pEff_sig_PataTrk->SetLineColor(2);
    pEff_sig_PataTrk->SetMarkerColor(2);
    pEff_sig_PataTrk->SetTitle(";gen E_{T} [GeV];per electron efficiency");

    pEff_sig->Draw();
    pEff_sig_PataTrk->Draw("same");
    l1->AddEntry(pEff_sig,"ZPrime default");
    l1->AddEntry(pEff_sig_PataTrk,"ZPrime PataTrk");
    l1->Draw();

    return c1;
}





