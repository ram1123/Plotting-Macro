#include "../interface/ComparisonPlots.hpp"

/**
 * @brief      Constructs a new instance.
 *
 * @param[in]  InputFile1      Input root file1
 * @param[in]  InputFile1_leg  first input root file legend name
 * @param[in]  Tree1           Name of tree to read from file1
 * @param[in]  InputFile2      Input root file2
 * @param[in]  InputFile2_leg  Second input root file legend name
 * @param[in]  Tree2           Name of tree to read from file2
 */
ComparisonPlots::ComparisonPlots(TString InputFile1, TString InputFile1_leg, TString Tree1,
                                 TString InputFile2, TString InputFile2_leg, TString Tree2)
{
    gStyle->SetOptStat(0);
    gROOT->ForceStyle(kTRUE);
    // TGaxis::SetMaxDigits(3);

    this->InputFile1 = new TFile(InputFile1, "READ");
    this->Tree1 = (TTree*) this->InputFile1->Get(Tree1);
    this->InputFile1_leg = InputFile1_leg;

    if (InputFile2 != "")
    {
        if (Tree2 == "") Tree2 = Tree1;
        this->InputFile2 = new TFile(InputFile2, "READ");
        this->Tree2 = (TTree*) this->InputFile2->Get(Tree2);
        this->InputFile2_leg = InputFile2_leg;
    }
}

/**
 * @brief      Destroys the object.
 */
ComparisonPlots::~ComparisonPlots() {}

/**
 * @brief      Sets the canvas.
 *
 * @return     Returns the TCanvas
 */
TCanvas* ComparisonPlots::SetCanvas()
{
    delete gROOT->FindObject("c1");
    TCanvas* c1 = new TCanvas("c1", "c1", 800, 700);
    if (this->logY)
        c1->SetLogy(1);
    return c1;
}

/**
 * @brief      Gets the legend.
 *
 * @return     The legend.
 */
TLegend* ComparisonPlots::GetLegend()
{
    delete gROOT->FindObject("l1");
    TLegend* l1 = new TLegend(x1, y1, x2, y2);
    return l1;
}

/**
 * @brief      Sets the legend position.
 *
 * @param[in]  x1    X1 position
 * @param[in]  x2    X2 position
 * @param[in]  y1    Y1 position
 * @param[in]  y2    Y2 position
 */
void ComparisonPlots::SetLegendPos(float x1, float x2, float y1, float y2)
{
    this->x1 = x1;
    this->x2 = x2;
    this->y1 = y1;
    this->y2 = y2;
}

/**
 * @brief      Update the legend names
 *
 * @param[in]  InputFile1_leg  The input file 1 legend
 * @param[in]  InputFile2_leg  The input file 2 legend
 */
void ComparisonPlots::ChangeLegendNames(TString InputFile1_leg, TString InputFile2_leg)
{
    this->InputFile1_leg = InputFile1_leg;
    this->InputFile2_leg = InputFile2_leg;
}

/**
 * @brief      Gets the hist from first root file
 *
 * @param[in]  h1     Name of branch to be extracted from TTree
 * @param[in]  nBins  number of bins
 * @param[in]  minX   The minimum x
 * @param[in]  maxX   The maximum x
 *
 * @return     The hist.
 */
TH1F* ComparisonPlots::GetHist(TString h1, int nBins, float minX, float maxX)
{
    this->nBins = nBins;
    this->minX = minX;
    this->maxX = maxX;
    delete gROOT->FindObject("hist1");
    hist1 = 0;
    hist1 = new TH1F("hist1", "", nBins, minX, maxX);
    this->Tree1->Draw(h1+">>hist1");
    return hist1;
}

/**
 * @brief      Get the comparison of histogram from two input root file
 *
 * @param[in]  h1         Name of branch to be extracted from TTree
 * @param[in]  nBins      number of bins
 * @param[in]  minX       The minimum x
 * @param[in]  maxX       The maximum x
 * @param[in]  NormUnity  true/false for norm to unity or not.
 *
 * @return     Returns a TCanvas having the comparison histograms
 */
TCanvas* ComparisonPlots::SimpleHistComparison(TString h1, int nBins, float minX, float maxX, bool NormUnity)
{
    delete gROOT->FindObject("hist1");
    delete gROOT->FindObject("hist2");
    hist1 = 0;
    hist2 = 0;
    hist1 = new TH1F("hist1", "", nBins, minX, maxX);
    hist2 = new TH1F("hist2", "", nBins, minX, maxX);
    TLegend* l1 = GetLegend();

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

/**
 * @brief      Compare the two histograms and plot them with the ratio plot
 *
 * @param[in]  h1         Name of branch to compare
 * @param[in]  nBins      Number of bins
 * @param[in]  minX       The minimum x
 * @param[in]  maxX       The maximum x
 * @param[in]  NormUnity  The normalize unity or not
 * @param[in]  cut        the cut string to be applied
 *
 * @return     Retruns the canvas having the comparison plot and the ratio plot
 */
TCanvas* ComparisonPlots::SimpleHistComparisonWithRatio(TString h1, int nBins, float minX, float maxX, bool NormUnity, TCut cut)
{
    this->nBins = nBins;
    this->minX = minX;
    this->maxX = maxX;

    TLegend* l1 = GetLegend();

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
    l1->Draw();
    c1->Update();

    return c1;
}

/**
 * @brief      Compare the two histograms and plot them with the ratio plot and save as png
 *
 * @param[in]  h1              Name of branch to compare
 * @param[in]  nBins           Number of bins
 * @param[in]  minX            The minimum x
 * @param[in]  maxX            The maximum x
 * @param[in]  outputFileName  The output file name
 * @param[in]  NormUnity       The normalize unity or not
 * @param[in]  cut             the cut string to be applied
 */
void ComparisonPlots::SimpleHistComparisonWithRatio(TString h1, int nBins, float minX, float maxX, TString outputFileName, bool NormUnity, TCut cut)
{
    this->nBins = nBins;
    this->minX = minX;
    this->maxX = maxX;

    TLegend* l1 = GetLegend();

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
    l1->Draw();
    c1->Update();

    if (outputFileName == "") outputFileName = h1+".png";
    c1->SaveAs(outputFileName);
}

/**
 * @brief      Get the efficiency plot where numerator is reconstructed SC at HLT matched with GEN} \&\& TrkIso<1.0
 *
 *
 * @param[in]  h1         Name of branch for which the efficiency is going to compute
 * @param[in]  nBins      Number of bins
 * @param[in]  minX       The minimum x
 * @param[in]  maxX       The maximum x
 * @param[in]  NormUnity  The normalize unity
 * @param[in]  cut        The cut
 *
 * @return     Returns the canvas having the efficiency comparison.
 */
TCanvas* ComparisonPlots::GetTEfficiencyByDividingTwoHist(TString h1, int nBins, float minX, float maxX, bool NormUnity, TCut cut)
{
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





