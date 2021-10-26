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

ComparisonPlots::ComparisonPlots(TString TFileList[], TString LegendNames [], TString TTreeList[], int sizeOfArray)
{
    vectorOfTFile.clear();
    vectorOfTTree.clear();
    vectorOfFileLegend.clear();

    TCanvas* c1 = SetCanvas();

    for (int i = 0; i < sizeOfArray; ++i)
    {
        std::cout << "\n=================" << std::endl;
        std::cout << "File Name: " << TFileList[i] << std::endl;
        std::cout << "Legend Name: " << LegendNames[i] << std::endl;
        std::cout << "Tree Names: " << TTreeList[i] << std::endl;

        vectorOfTFile.push_back(new TFile(TFileList[i], "READ"));
        vectorOfTTree.push_back((TTree*) vectorOfTFile[i]->Get(TTreeList[i]));
        vectorOfFileLegend.push_back(LegendNames[i]);
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
 * @brief      Define TH1F based on hist name, bin and x-axis range and return it
 *
 * @param[in]  h1         TH1F name
 * @param[in]  nBins      number of bins
 * @param[in]  minX       The minimum x
 * @param[in]  maxX       The maximum x
 * @param[in]  LineColor  The line color
 *
 * @return     Retruns the defined TH1F
 */
TH1F* ComparisonPlots::DefineHist(TString h1, int nBins, float minX, float maxX, int LineColor = 1)
{
    TH1F* hist1 = new TH1F(h1, "", nBins, minX, maxX);
    return hist1;
}

/**
 * @brief      Define the custom bin size TH1F based on hist name, bin and x-axis range and return it.
 *
 * @param[in]  h1           TH1F name
 * @param[in]  nBins        Number of bins
 * @param      nBins_Edges  array containing the bins edges
 *
 * @return     Return the defined TH1F having custom bins
 */
TH1F* ComparisonPlots::DefineHist(TString h1, Int_t nBins, Double_t nBins_Edges[])
{
    TH1F* hist1 = new TH1F(h1, "",  nBins, nBins_Edges);
    return hist1;
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
TH1F* ComparisonPlots::GetHist(TString h1, int nBins, float minX, float maxX, int LineColor)
{
    std::cout << "hist name: " << h1 << std::endl;
    delete gROOT->FindObject("hist1");
    hist1 = 0;
    hist1 = new TH1F("hist1", "", nBins, minX, maxX);
    this->Tree1->Draw(h1+">>hist1");
    hist1->SetLineColor(LineColor);
    return hist1;
}

// TH1F* ComparisonPlots::GetHist(TString h1, int nBins, float minX, float maxX, int LineColor)
// {
//     std::cout << "hist name: " << h1 << std::endl;
//     delete gROOT->FindObject("hist1");
//     hist1 = 0;
//     hist1 = new TH1F("hist1", "", nBins, minX, maxX);
//     vectorOfTTree[0]->Draw(h1+">>hist1");
//     hist1->SetLineColor(LineColor);
//     return hist1;
// }

/**
 * @brief      Compares two branches from single tree.
 *
 * @param[in]  h1              First branch name
 * @param[in]  h2              Second branch name to compare
 * @param[in]  nBins           Number of bins
 * @param[in]  minX            The minimum x
 * @param[in]  maxX            The maximum x
 * @param[in]  outputFileName  The output file name
 */
void ComparisonPlots::CompareTwoBranchesOneTree(TString h1, TString h2, int nBins, float minX, float maxX, TString outputFileName = "")
{
    delete gROOT->FindObject("hist1");
    delete gROOT->FindObject("hist2");
    hist1 = 0;
    hist2 = 0;
    hist1 = new TH1F("hist1", "", nBins, minX, maxX);
    hist2 = new TH1F("hist2", "", nBins, minX, maxX);

    hist1->SetLineColor(1);
    hist2->SetLineColor(2);

    hist1->SetStats(1);
    hist1->SetLineWidth(3);
    hist1->SetLineStyle(1);
    hist1->SetLineColor(1);

    hist1->GetYaxis()->CenterTitle();
    hist1->GetYaxis()->SetTitleOffset(1.30);
    hist1->GetXaxis()->SetTitle(h1);
    hist1->GetXaxis()->CenterTitle();

    hist2->SetStats(1);
    hist2->SetLineWidth(3);
    hist2->SetLineStyle(2);
    hist2->SetLineColor(2);

    hist2->GetYaxis()->CenterTitle();
    hist2->GetYaxis()->SetTitleOffset(1.30);
    hist2->GetXaxis()->SetTitle(h1);
    hist2->GetXaxis()->CenterTitle();

    this->Tree1->Draw(h1+">>hist1");
    this->Tree1->Draw(h2+">>hist2");

    TCanvas* c1 = SetCanvas();
    hist2->Draw();
    hist1->Draw("same");

    TLegend* l1 = GetLegend();
    l1->AddEntry(hist1,h1);
    l1->AddEntry(hist2,h2);
    l1->Draw();

    if (outputFileName == "") outputFileName = h1+".png";
    c1->SaveAs(outputFileName);
}

/**
 * @brief      Compares the branches from same tree.
 *
 * @param      branchesList    Array have name of all branches to compare on one canvas
 * @param[in]  branchesSize    size of branch array
 * @param[in]  nBins           The bins
 * @param[in]  minX            The minimum x
 * @param[in]  maxX            The maximum x
 * @param[in]  outputFileName  The output file name
 */
void ComparisonPlots::CompareBranchesFromSameTree(TString branchesList[], int branchesSize,  int nBins, float minX, float maxX, TString outputFileName = "")
{
    vectorOfTH1F.clear();
    TCanvas* c1 = SetCanvas();

    // int nBranches = (sizeof(branchesList)/sizeof(branchesList[0]));
    // One should not call sizeof inside a function
    // Reference: https://www.geeksforgeeks.org/using-sizof-operator-with-array-paratmeters/
    for (int i = 0; i < branchesSize; ++i)
    {
        vectorOfTH1F.push_back((new TH1F(Form("th%i",i),"",nBins,minX,maxX)));

        this->Tree1->Draw(Form("%s>>th%i",(std::string(branchesList[i])).c_str(),i));

        vectorOfTH1F[i]->SetStats(1);
        vectorOfTH1F[i]->SetLineWidth(3);
        vectorOfTH1F[i]->SetLineStyle(i+1);
        vectorOfTH1F[i]->SetLineColor(i+1);

        vectorOfTH1F[i]->GetYaxis()->CenterTitle();
        vectorOfTH1F[i]->GetYaxis()->SetTitleOffset(1.30);
        vectorOfTH1F[i]->GetXaxis()->SetTitle(branchesList[0]);
        vectorOfTH1F[i]->GetXaxis()->CenterTitle();

        // if (i==0) vectorOfTH1F[i]->Draw();
        // else vectorOfTH1F[i]->Draw("same");
    }

    for (int i = 0; i < vectorOfTH1F.size(); ++i)
    {
        if (i==0) vectorOfTH1F[i]->Draw();
        else vectorOfTH1F[i]->Draw("same");
    }

    if (outputFileName == "") outputFileName = branchesList[0]+"_test_.png";
    c1->SaveAs(outputFileName);
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
    TLegend* l1 = GetLegend();

    delete gROOT->FindObject("hist1");
    delete gROOT->FindObject("hist2");

    hist1 = 0;
    hist2 = 0;

    // hist1 = new TH1F("hist1", "", nBins, minX, maxX);
    // hist2 = new TH1F("hist2", "", nBins, minX, maxX);
    hist1 = DefineHist("hist1", nBins, minX, maxX);
    hist2 = DefineHist("hist2", nBins, minX, maxX);

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
    auto rp = new TRatioPlot(hist1, hist2);
    c1->SetTicks(0, 1);
    rp->Draw();
    l1->Draw();
    rp->SetSeparationMargin(0.0);
    rp->GetLowerRefYaxis()->SetTitle("ratio");
    rp->GetLowerRefGraph()->SetMinimum(0);
    rp->GetLowerRefGraph()->SetMaximum(2);
    // c1->Update();

    return c1;
}

/**
 * @brief      Compare the two histograms and plot them with the ratio plot
 *
 * @param[in]  h1           Name of branch to compare
 * @param[in]  nBins        Number of bins
 * @param      nBins_Edges  Array having defined edges of each bins, i.e. custom bins
 * @param[in]  NormUnity    The normalize to unity or not
 * @param[in]  cut          The cut string to be applied
 *
 * @return     Retruns the canvas having the comparison plot and the ratio plot
 */
TCanvas* ComparisonPlots::SimpleHistComparisonWithRatio(TString h1, Int_t nBins, Double_t nBins_Edges[], bool NormUnity, TCut cut)
{
    TLegend* l1 = GetLegend();

    delete gROOT->FindObject("hist1");
    delete gROOT->FindObject("hist2");

    hist1 = 0;
    hist2 = 0;

    hist1 = DefineHist("hist1", nBins, nBins_Edges);
    hist2 = DefineHist("hist2", nBins, nBins_Edges);

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
    auto rp = new TRatioPlot(hist1, hist2);
    c1->SetTicks(0, 1);
    rp->Draw();
    l1->Draw();
    rp->SetSeparationMargin(0.0);
    rp->GetLowerRefYaxis()->SetTitle("ratio");
    rp->GetLowerRefGraph()->SetMinimum(0);
    rp->GetLowerRefGraph()->SetMaximum(2);
    // c1->Update();

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
    TCanvas* c1 = SetCanvas();
    c1 = SimpleHistComparisonWithRatio(h1, nBins, minX, maxX, NormUnity, cut);
    if (outputFileName == "") outputFileName = h1+".png";
    c1->SaveAs(outputFileName);
}

/**
 * @brief      Compare the two histograms and plot them with the ratio plot and save as png
 *
 * @param[in]  h1              Name of branch to compare
 * @param[in]  nBins           Number of bins
 * @param[in]  nBins_Edges     Array having defined edges of each bins, i.e. custom bins
 * @param[in]  outputFileName  The output file name
 * @param[in]  NormUnity       The normalize unity or not
 * @param[in]  cut             the cut string to be applied
 */
void ComparisonPlots::SimpleHistComparisonWithRatio(TString h1, Int_t nBins, Double_t nBins_Edges[], TString outputFileName, bool NormUnity, TCut cut)
{
    TCanvas* c1 = SetCanvas();
    c1 = SimpleHistComparisonWithRatio(h1, nBins, nBins_Edges, NormUnity, cut);
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
TCanvas* ComparisonPlots::GetTEfficiencyByDividingTwoHist(TString h1, int nBins, float minX, float maxX, bool NormUnity, TCut NumeratorCut, TCut DenominatorCut)
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

// NumeratorCut
// DenominatorCut
    this->Tree1->Draw(h1+">>hist1", DenominatorCut);
    this->Tree2->Draw(h1+">>hist2", DenominatorCut);
    this->Tree1->Draw(h1+">>hist1_num",NumeratorCut);
    this->Tree2->Draw(h1+">>hist2_num",NumeratorCut);

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

/**
 * @brief      Get the efficiency plot where numerator is reconstructed SC at HLT
 *             matched with GEN} \&\& TrkIso<1.0 and save it in a png/pdf file
 *
 * @param[in]  h1              Name of branch for which the efficiency is going to compute
 * @param[in]  nBins           Number of bins
 * @param[in]  minX            The minimum x
 * @param[in]  maxX            The maximum x
 * @param[in]  outputFileName  The output file name
 * @param[in]  NormUnity       The normalize unity
 * @param[in]  cut             The cut
 */
void ComparisonPlots::GetTEfficiencyByDividingTwoHist(TString h1, int nBins, float minX, float maxX, TString outputFileName= "", bool NormUnity = false, TCut NumeratorCut = "", TCut DenominatorCut = "")
{
    TCanvas* c1 = SetCanvas();
    c1 = GetTEfficiencyByDividingTwoHist(h1, nBins, minX, maxX, NormUnity, NumeratorCut, DenominatorCut);
    if (outputFileName == "") outputFileName = h1+".png";
    c1->SaveAs(outputFileName);
}



