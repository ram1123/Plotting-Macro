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

void plotEfficiency()
{
    TCanvas * c1 = new TCanvas("c1","c1",800,700);
    gStyle->SetOptStat(0);
    gROOT->ForceStyle(kTRUE);
    TGaxis::SetMaxDigits(3);

    TFile* f1 = new TFile("../QCD_default.root");
    TFile* f2 = new TFile("../QCD_PetaTrk.root");

    TTree* t1 = (TTree*) f1->Get("egHLTRun3Tree");
    TTree* t2 = (TTree*) f2->Get("egHLTRun3Tree");

    TH1F* h1 = new TH1F("h1", "", 250, 0, 40);
    TH1F* h2 = new TH1F("h2", "", 250, 0, 40);


    t1->Draw("eg_trkIsol>>h1");
    t2->Draw("eg_trkIsol>>h2");

    h1->SetLineColor(1);
    h2->SetLineColor(2);

    h1->Draw();
    h2->Draw("same");

    c1->SaveAs("eg_trkIsol.png");
    c1->SetLogy();
    c1->SaveAs("eg_trkIsol_log.png");


    // TCanvas * c2 = new TCanvas("c2","c2",800,700);
    // c2->cd();

    // TEfficiency* pEff_sig = 0;
    // pEff_sig = new TEfficiency(*h1,*h2);
}
