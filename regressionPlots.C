#include "src/ComparisonPlots.cpp"
// #include <filesystem>
// namespace fs = std::filesystem;
#include <sys/stat.h>

void regressionPlots()
{
    // system("mkdir plots_ZPrime");
    // fs::create_directory("plots_ZPrime");
    const char *path = "plots_regression";
    mkdir(path,S_IRWXU);

    TString inputFile1 = "/afs/cern.ch/user/a/arun/public/results_regression/Run3HLT_RealIC_IdealTraining_stdVar_stdCuts_ntrees1500_applied.root";
    TString TreeName = "egHLTRun3TreeFriend";

    TCanvas* c1 = new TCanvas();
    ComparisonPlots CompareFun(inputFile1, "default", TreeName);

    // CompareFun.logY = false;
    TString branches[2] = {"invTar", "invTar*mean"};
    CompareFun.CompareBranchesFromSameTree(branches, 2, 75, 0, 2, TString(path)+"/mean_with_withoutCorr.png");

}