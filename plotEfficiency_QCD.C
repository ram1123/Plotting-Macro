/*
 * =====================================================================================
 *
 *       Filename:  plotEfficiency.C
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  10/13/2021 12:17:23 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ramkrishna Sharma (Ram), ramkrishna.sharma71@gmail.com
 *   Organization:  Institute of High Energy Physics, Beijing, China
 *
 * =====================================================================================
 */

void plotEfficiency_QCD()
{
    gStyle->SetOptStat(0);
    gROOT->ForceStyle(kTRUE);
    // TGaxis::SetMaxDigits(3);

    auto c1 = new TCanvas("c1", "A ratio example");

    TFile* f1 = new TFile("../QCD_default.root");
    TFile* f2 = new TFile("../QCD_PetaTrk.root");

    TTree* t1 = (TTree*) f1->Get("egHLTRun3Tree");
    TTree* t2 = (TTree*) f2->Get("egHLTRun3Tree");


    // Double_t Et_edges[] = {0, 1, 2, 3, 4, 5, 7, 9, 11, 15, 20, 50, 70, 100, 130, 160, 180, 200, 250, 300, 350, 400, 450, 500, 700, 1000};
    // Int_t Et_NBINS = (sizeof(Et_edges)/sizeof(*Et_edges))-1;

    // TH1F* h1_num = new TH1F("h1_num", ";E_{T};Number of entrise", Et_NBINS, Et_edges);
    // TH1F* h1_den = new TH1F("h1_den", ";E_{T};Number of entrise", Et_NBINS, Et_edges);
    // TH1F* h2_num = new TH1F("h2_num", ";E_{T};Number of entrise", Et_NBINS, Et_edges);
    // TH1F* h2_den = new TH1F("h2_den", ";E_{T};Number of entrise", Et_NBINS, Et_edges);

    TH1F* h1_num = new TH1F("h1_num", ";E_{T};Number of entrise", 51, 0, 120);
    TH1F* h1_den = new TH1F("h1_den", ";E_{T};Number of entrise", 51, 0, 120);
    TH1F* h2_num = new TH1F("h2_num", ";E_{T};Number of entrise", 51, 0, 120);
    TH1F* h2_den = new TH1F("h2_den", ";E_{T};Number of entrise", 51, 0, 120);

    //////////////////////////////////////////////////

    Double_t TrkIso_edges[] = {0,0.1, 0.5, 1.0, 2.0, 4.0, 6.0, 8.0, 10.0, 14.0, 18.0, 22.0, 26.0, 30.0, 34, 38, 42};
    Int_t TrkIso_NBINS = (sizeof(TrkIso_edges)/sizeof(*TrkIso_edges))-1;

    TH1F* h1_trkIso = new TH1F("h1_trkIso", ";Track Isolation;Number of entrise", TrkIso_NBINS, TrkIso_edges);
    TH1F* h2_trkIso = new TH1F("h2_trkIso", ";Track Isolation;Number of entrise", TrkIso_NBINS, TrkIso_edges);

    TLegend* l1 = new TLegend(0.6,0.79,0.90,0.95);
    TLegend* l2 = new TLegend(0.6,0.1,0.90,0.35);

    t1->Draw("eg_trkIsol>>h1_trkIso");
    t2->Draw("eg_trkIsol>>h2_trkIso");
    l1->AddEntry(h1_trkIso,"QCD default");
    l1->AddEntry(h2_trkIso,"QCD PataTrk");

    h1_trkIso->Scale(1.0/h1_trkIso->Integral());
    h2_trkIso->Scale(1.0/h2_trkIso->Integral());

    h1_trkIso->SetLineColor(1);
    h2_trkIso->SetLineColor(2);

    c1->SetLogy(1);
    auto rp = new TRatioPlot(h1_trkIso, h2_trkIso);
    c1->SetTicks(0, 1);
    rp->SetSeparationMargin(0.0);
    rp->Draw();
    rp->GetLowerRefYaxis()->SetTitle("ratio");
    // rp->GetUpperRefYaxis()->SetTitle("entries");
    l1->Draw();
    c1->Update();
    c1->SaveAs("QCD_eg_trkIsol.png");

    //////////////////////////////////////////////////

    t1->Draw("eg_et>>h1_num","eg_trkIsol<1.0");
    t1->Draw("eg_et>>h1_den");
    t2->Draw("eg_et>>h2_num","eg_trkIsol<1.0");
    t2->Draw("eg_et>>h2_den");

    TH1F* h1_num_NormUnity = (TH1F*) h1_num->Clone();
    TH1F* h1_den_NormUnity = (TH1F*) h1_den->Clone();
    TH1F* h2_num_NormUnity = (TH1F*) h2_num->Clone();
    TH1F* h2_den_NormUnity = (TH1F*) h2_den->Clone();

    h1_num_NormUnity->Scale(1.0/h1_num_NormUnity->Integral());
    h1_den_NormUnity->Scale(1.0/h1_den_NormUnity->Integral());
    h2_num_NormUnity->Scale(1.0/h2_num_NormUnity->Integral());
    h2_den_NormUnity->Scale(1.0/h2_den_NormUnity->Integral());

    h1_num->SetLineColor(1);
    h2_num->SetLineColor(2);
    h1_den->SetLineColor(1);
    h2_den->SetLineColor(2);
    h1_num_NormUnity->SetLineColor(1);
    h2_num_NormUnity->SetLineColor(2);
    h1_den_NormUnity->SetLineColor(1);
    h2_den_NormUnity->SetLineColor(2);

    c1->SetLogy(0);
    auto rp2 = new TRatioPlot(h1_num_NormUnity, h2_num_NormUnity);
    c1->SetTicks(0, 1);
    rp2->SetSeparationMargin(0.0);
    rp2->Draw();
    rp2->GetLowerRefYaxis()->SetTitle("ratio");
    // rp2->GetUpperRefYaxis()->SetTitle("entries");
    rp2->GetLowerRefGraph()->SetMinimum(0);
    rp2->GetLowerRefGraph()->SetMaximum(2);
    l1->Draw();
    c1->Update();
    c1->SaveAs("QCD_eg_et_WithTrkIsoCut.png");

    c1->SetLogy(0);
    auto rp3 = new TRatioPlot(h1_den_NormUnity, h2_den_NormUnity);
    c1->SetTicks(0, 1);
    rp3->SetSeparationMargin(0.0);
    rp3->Draw();
    rp3->GetLowerRefYaxis()->SetTitle("ratio");
    // rp3->GetUpperRefYaxis()->SetTitle("entries");
    rp3->GetLowerRefGraph()->SetMinimum(0);
    rp3->GetLowerRefGraph()->SetMaximum(2);
    l1->Draw();
    c1->Update();
    c1->SaveAs("QCD_eg_et_WithoutTrkIsoCut.png");

    TCanvas * c2 = new TCanvas("c2","c2",800,700);
    c2->cd();

}
