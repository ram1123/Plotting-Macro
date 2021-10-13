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

        TCanvas* c3 = new TCanvas("c", "canvas", 600, 700);
    TPad* pad1 = new TPad("pad1", "pad1", 0.0, 0.3, 1.0, 1.0);
    pad1->SetBottomMargin(0);
    pad1->SetLeftMargin(0.1);
    pad1->SetRightMargin(0.03);
    pad1->SetLogy(0);
    pad1->SetGridx();
    pad1->SetTickx(1);
    pad1->SetTicky(1);
    pad1->Draw();
    c3->cd();
    TPad* pad2 = new TPad("pad2", "pad2", 0.0, 0.00, 1.0, 0.3);
    pad2->SetTopMargin(0);
    pad2->SetBottomMargin(0.25);
    pad2->SetLeftMargin(0.1);
    pad2->SetRightMargin(0.03);
    pad2->SetGridx();
    pad2->SetTickx(1);
    pad2->SetTicky(1);
    pad2->Draw();


    TCanvas * c1 = new TCanvas("c1","c1",800,700);
    gStyle->SetOptStat(0);
    gROOT->ForceStyle(kTRUE);
    TGaxis::SetMaxDigits(3);

    TFile* f1 = new TFile("../QCD_default.root");
    TFile* f2 = new TFile("../QCD_PetaTrk.root");

    TTree* t1 = (TTree*) f1->Get("egHLTRun3Tree");
    TTree* t2 = (TTree*) f2->Get("egHLTRun3Tree");

    TH1F* h1_num = new TH1F("h1_num", ";E_{T};Number of entrise", 51, 0, 120);
    TH1F* h1_den = new TH1F("h1_den", ";E_{T};Number of entrise", 51, 0, 120);
    TH1F* h2_num = new TH1F("h2_num", ";E_{T};Number of entrise", 51, 0, 120);
    TH1F* h2_den = new TH1F("h2_den", ";E_{T};Number of entrise", 51, 0, 120);
    TLegend* l1 = new TLegend(0.7,0.89,0.99,0.99);

    //////////////////////////////////////////////////
    // TH1F* h1_trkIso = new TH1F("h1_trkIso", ";Track Isolation;Number of entrise", 51, 0, 40);
    // TH1F* h2_trkIso = new TH1F("h2_trkIso", ";Track Isolation;Number of entrise", 51, 0, 40);


    // t1->Draw("eg_trkIsol>>h1_trkIso");
    // t2->Draw("eg_trkIsol>>h2_trkIso");
    // l1->AddEntry(h1_trkIso,"QCD default");
    // l1->AddEntry(h2_trkIso,"QCD PataTrk");
    // // h1_trkIso->Scale(1.0/h1_trkIso->Integral());
    // // h2_trkIso->Scale(1.0/h2_trkIso->Integral());

    // h1_trkIso->SetLineColor(1);
    // h2_trkIso->SetLineColor(2);

    // h1_trkIso->Draw();
    // h2_trkIso->Draw("same");
    // l1->Draw();

    // c1->SetLogy(0);
    // c1->SaveAs("eg_trkIsol_QCD.png");
    // c1->SetLogy(1);
    // c1->SaveAs("eg_trkIsol_log_QCD.png");
    // c1->SetLogy(0);
    // l1->Clear();
    //////////////////////////////////////////////////

    t1->Draw("eg_et>>h1_num","eg_trkIsol<1.0");
    t1->Draw("eg_et>>h1_den");
    t2->Draw("eg_et>>h2_num","eg_trkIsol<1.0");
    t2->Draw("eg_et>>h2_den");

    // h1_num->Scale(1.0/h1_num->Integral());
    // h1_den->Scale(1.0/h1_den->Integral());
    // h2_num->Scale(1.0/h2_num->Integral());
    // h2_den->Scale(1.0/h2_den->Integral());

    h1_num->SetLineColor(1);
    h2_num->SetLineColor(2);
    h1_num->Draw();
    h2_num->Draw("same");
    // l1->AddEntry(h1_num,"QCD default");
    // l1->AddEntry(h2_num,"QCD PataTrk");
    l1->Draw();

    c1->SaveAs("eg_et_TrkIsoCut_QCD.png");
    c1->SetLogy(1);
    c1->SaveAs("eg_et_TrkIsoCut_log_QCD.png");
    c1->SetLogy(0);

    h1_den->SetLineColor(1);
    h2_den->SetLineColor(2);
    h1_den->Draw();
    h2_den->Draw("same");
    l1->Draw();


    c1->SaveAs("eg_et_NoTrkIsoCut_QCD.png");
    c1->SetLogy(1);
    c1->SaveAs("eg_et_NoTrkIsoCut_log_QCD.png");
    c1->SetLogy(0);

    c1->Clear();

    TCanvas * c2 = new TCanvas("c2","c2",800,700);
    c2->cd();

    TEfficiency* pEff_sig = 0;
    pEff_sig = new TEfficiency(*h1_num,*h1_den);

    pEff_sig->SetLineColor(kAzure+3);
    pEff_sig->SetMarkerColor(kAzure+3);
    pEff_sig->SetMarkerStyle(21);
    pEff_sig->SetLineWidth(3);
    pEff_sig->SetTitle(";gen E_{T} [GeV];per electron efficiency");
    pEff_sig->Draw();
    gPad->Update();
    auto graph = pEff_sig->GetPaintedGraph();
    // graph->SetMinimum(0.0);
    //    graph->SetMaximum(1.05);
    // graph->SetMaximum();
    c2->Update();
    c2->SaveAs("Efficiency_QCD.png");


    TEfficiency* pEff_sig_PataTrk = 0;
    pEff_sig_PataTrk = new TEfficiency(*h2_num,*h2_den);

    pEff_sig_PataTrk->SetLineColor(2);
    pEff_sig_PataTrk->SetMarkerColor(2);
    pEff_sig_PataTrk->SetMarkerStyle(21);
    pEff_sig_PataTrk->SetLineWidth(3);
    pEff_sig_PataTrk->SetTitle(";gen E_{T} [GeV];per electron efficiency");
    pEff_sig_PataTrk->Draw();
    gPad->Update();
    auto graph1 = pEff_sig_PataTrk->GetPaintedGraph();
    // graph->SetMinimum(0.0);
    //    graph->SetMaximum(1.05);
    // graph->SetMaximum();
    c2->Update();
    c2->SaveAs("Efficiency_QCD_PataTrk.png");

    c2->Clear();
    pEff_sig->Draw();
    pEff_sig_PataTrk->Draw("same");
    l1->Draw();
    c2->SaveAs("Efficiency_QCD_PataTrkVsDefault.png");

    c3->cd();
    l1->Clear();
    pad1->cd();
    h1_den->Draw();
    h2_den->Draw("same");
    l1->AddEntry(h1_den,"default");
    l1->AddEntry(h2_den,"PataTrk");
    l1->Draw();
    pad2->cd();
    TH1F *htemp = (TH1F*) h1_den->Clone();
    htemp->Divide(h2_den);
    // htemp->Sumw2();


    htemp->SetMaximum(1.1);
    htemp->SetMinimum(0.8);
    htemp->GetYaxis()->SetTitle("Ratio");
    htemp->GetXaxis()->SetTitle("E_{T}");
    htemp->Draw();
    c3->SaveAs("QCDFinal_ratio_NoCut.png");

    c3->cd();
    l1->Clear();
    pad1->cd();
    h1_num->Draw();
    h2_num->Draw("same");
    l1->AddEntry(h1_num,"default");
    l1->AddEntry(h2_num,"PataTrk");
    l1->Draw();
    pad2->cd();
    TH1F *htemp2 = (TH1F*) h1_num->Clone();
    htemp2->Divide(h2_num);

    // htemp2->Sumw2();

    htemp2->SetMaximum(1.1);
    htemp2->SetMinimum(0.8);
    htemp2->GetYaxis()->SetTitle("Ratio");
    htemp2->GetXaxis()->SetTitle("E_{T}");
    htemp2->Draw();
    c3->SaveAs("QCDFinal_ratio_Cut.png");
}
