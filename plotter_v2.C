#include "src/ComparisonPlots.cpp"
// #include <filesystem>
// namespace fs = std::filesystem;
#include <sys/stat.h>
void plotter_v2()
{
    const char *path = "test";
    mkdir(path,S_IRWXU);

    TString fileList[2] = {"../ZPrime_default.root", "../ZPrime_PetaTrk.root"};
    TString legendList[2] = {"default", "PataTrk"};
    TString treeList[2] = {"egHLTRun3Tree", "egHLTRun3Tree"};

    ComparisonPlots CompareFun(fileList, legendList, treeList, 2);

    TH1F* h1 = new TH1F("h1", "", 125, 0, 40);
    h1 = CompareFun.GetHist("eg_trkIsol", 125, 0, 40, 2);
    h1->Draw();

}
