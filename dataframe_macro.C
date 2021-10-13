#include "ROOT/RDataFrame.hxx"
#include "ROOT/RVec.hxx"
#include "TCanvas.h"
#include "TH1D.h"
#include "TLatex.h"
#include "Math/Vector4D.h"
#include "TStyle.h"

using namespace ROOT::VecOps;
using RNode = ROOT::RDF::RNode;

void ComparePlots(std::string var, RNode dataFrame_PetaTrk, RNode dataFrame_default)
{
    auto h1_PetaTrk = dataFrame_PetaTrk.Histo1D({var, "TEST;TEST;N_{Events}", 20, 0, 20}, "nrEgs");
    auto h1_default = dataFrame_default.Histo1D({var, "TEST;TEST;N_{Events}", 20, 0, 20}, "nrEgs");

    // Produce plot
    gStyle->SetOptStat(0);
    gStyle->SetTextFont(42);
    auto c = new TCanvas("c", "", 800, 700);

    h1_PetaTrk->GetXaxis()->SetTitleSize(0.04);
    h1_PetaTrk->GetYaxis()->SetTitleSize(0.04);
    h1_PetaTrk->DrawClone();
    h1_default->SetLineColor(3);
    h1_default->DrawClone("same");
    c->SaveAs(TString(var)+"_TEST.png");
    c->Clear();
}

void dataframe_macro()
{
    // Enable multi-threading
    ROOT::EnableImplicitMT(4);

    // Create dataframe from NanoAOD files
    ROOT::RDataFrame df_PetaTrk("egHLTRun3Tree", "../ZPrime_PetaTrk.root");
    ROOT::RDataFrame df_default("egHLTRun3Tree", "../ZPrime_default.root");

    ComparePlots("nrEgs", df_PetaTrk, df_default);
    // // Make histogram of dimuon mass spectrum. Note how we can set title and axis labels in one go
    // auto h1_PetaTrk = df_PetaTrk.Histo1D({"nrEgs", "nEGs;Number of EGamma candidates;N_{Events}", 20, 0, 20}, "nEGs");
    // auto h1_default = df_default.Histo1D({"nrEgs", "nEGs;Number of EGamma candidates;N_{Events}", 20, 0, 20}, "nEGs");

    // auto h2_PetaTrk = df_PetaTrk.Histo1D({"eg_et", "eg_et;eg_et;N_{Events}", 51, 0, 250}, "eg_et");
    // auto h2_default = df_default.Histo1D({"eg_et", "eg_et;eg_et;N_{Events}", 51, 0, 250}, "eg_et");
    // // auto h3 = df_PetaTrk.Histo1D({"eg_et[0]", "eg_et;eg_et;N_{Events}", 51, 0, 250}, "eg_et[0]");

    // auto h3_PetaTrk = df_PetaTrk.Histo1D({"eg_rawEnergy", "eg_rawEnergy;eg_rawEnergy;N_{Events}", 51, 0, 250}, "eg_rawEnergy");
    // auto h3_default = df_default.Histo1D({"eg_rawEnergy", "eg_rawEnergy;eg_rawEnergy;N_{Events}", 51, 0, 250}, "eg_rawEnergy");

    // // Produce plot
    // gStyle->SetOptStat(0);
    // gStyle->SetTextFont(42);
    // auto c = new TCanvas("c", "", 800, 700);
    // // c->SetLogx();
    // // c->SetLogy();

    // h1_PetaTrk->GetXaxis()->SetTitleSize(0.04);
    // h1_PetaTrk->GetYaxis()->SetTitleSize(0.04);
    // h1_PetaTrk->DrawClone();
    // h1_default->SetLineColor(3);
    // h1_default->DrawClone("same");
    // c->SaveAs("nrEgs.png");
    // c->Clear();

    // h2_PetaTrk->GetXaxis()->SetTitleSize(0.04);
    // h2_PetaTrk->GetYaxis()->SetTitleSize(0.04);
    // h2_PetaTrk->DrawClone();
    // h2_default->SetLineColor(3);
    // h2_default->DrawClone("same");
    // c->SaveAs("eg_et.png");


    // h3_PetaTrk->GetXaxis()->SetTitleSize(0.04);
    // h3_PetaTrk->GetYaxis()->SetTitleSize(0.04);
    // h3_PetaTrk->DrawClone();
    // h3_default->SetLineColor(3);
    // h3_default->DrawClone("same");
    // c->SaveAs("eg_rawEnergy.png");

    // // h3->GetXaxis()->SetTitleSize(0.04);
    // // h3->GetYaxis()->SetTitleSize(0.04);
    // // h3->DrawClone();
    // // c->SaveAs("egEt_0.png");

}