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

void plotEfficiency_ZPrime()
{
    TCanvas * c1 = new TCanvas("c1","c1",800,700);
    gStyle->SetOptStat(0);
    gROOT->ForceStyle(kTRUE);
    TGaxis::SetMaxDigits(3);

    TFile* f1 = new TFile("../ZPrime_default.root");
    TFile* f2 = new TFile("../ZPrime_PetaTrk.root");

    TTree* t1 = (TTree*) f1->Get("egHLTRun3Tree");
    TTree* t2 = (TTree*) f2->Get("egHLTRun3Tree");

    TH1F* h1_num = new TH1F("h1_num", ";E_{T};Number of entrise", 250, 0, 1000);
    TH1F* h1_den = new TH1F("h1_den", ";E_{T};Number of entrise", 250, 0, 1000);
    TH1F* h2_num = new TH1F("h2_num", ";E_{T};Number of entrise", 250, 0, 1000);
    TH1F* h2_den = new TH1F("h2_den", ";E_{T};Number of entrise", 250, 0, 1000);

    //////////////////////////////////////////////////
    TH1F* h1_trkIso = new TH1F("h1_trkIso", ";Track Isolation;Number of entrise", 250, 0, 40);
    TH1F* h2_trkIso = new TH1F("h2_trkIso", ";Track Isolation;Number of entrise", 250, 0, 40);

    TLegend* l1 = new TLegend(0.7,0.89,0.99,0.99);

    t1->Draw("eg_trkIsol>>h1_trkIso");
    t2->Draw("eg_trkIsol>>h2_trkIso");
    l1->AddEntry(h1_trkIso,"ZPrime default");
    l1->AddEntry(h2_trkIso,"ZPrime PataTrk");

    h1_trkIso->SetLineColor(1);
    h2_trkIso->SetLineColor(2);

    h1_trkIso->Draw();
    h2_trkIso->Draw("same");
    l1->Draw();

    c1->SetLogy(0);
    c1->SaveAs("eg_trkIsol_ZPrime.png");
    c1->SetLogy(1);
    c1->SaveAs("eg_trkIsol_log_ZPrime.png");
    c1->SetLogy(0);
    //////////////////////////////////////////////////

    t1->Draw("eg_et>>h1_num","eg_trkIsol<1.0");
    t1->Draw("eg_et>>h1_den");
    t2->Draw("eg_et>>h2_num","eg_trkIsol<1.0");
    t2->Draw("eg_et>>h2_den");

    h1_num->SetLineColor(1);
    h2_num->SetLineColor(2);
    h1_num->Draw();
    h2_num->Draw("same");
    l1->Draw();

    c1->SaveAs("eg_et_TrkIsoCut_ZPrime.png");
    c1->SetLogy(1);
    c1->SaveAs("eg_et_TrkIsoCut_log_ZPrime.png");
    c1->SetLogy(0);

    h1_den->SetLineColor(1);
    h2_den->SetLineColor(2);
    h1_den->Draw();
    h2_den->Draw("same");
    l1->Draw();

    c1->SaveAs("eg_et_NoTrkIsoCut_ZPrime.png");
    c1->SetLogy(1);
    c1->SaveAs("eg_et_NoTrkIsoCut_log_ZPrime.png");
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
    c2->SaveAs("Efficiency_ZPrime.png");
}
