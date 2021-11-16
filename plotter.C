#include "src/ComparisonPlots.cpp"
// #include <filesystem>
// namespace fs = std::filesystem;
#include <sys/stat.h>
#include "PlottingVariable.h"

void plotter(const plotVar_t plotvars[] = commonplotvars_test)
{
    // create a directory with name path
    mkdir(path,S_IRWXU);

    // initialize the class `ComparisonPlots`
    ComparisonPlots CompareFun(inputFile1, "OLD", TreeName, inputFile2, "NEW_Petr");

    // for loop over all input variables defined in `PlottingVariable.h`
    for (int ivar=0; ; ivar++)
    {
        plotVar_t pv = plotvars[ivar];
        if ( !pv.plotvar.Length() ) break;

        std::cout << "\n\n===========================" << std::endl;
        std::cout << "var: " << ivar+1 << " : " << pv.plotvar << std::endl;

        CompareFun.SimpleHistComparisonWithRatio(pv.plotvar, pv.NBINS, pv.MINRange, pv.MAXRange, TString(path)+"/"+TString(pv.outfile)+".png", true);
    }
    std::cout << "\n\n===========================" << std::endl;

}
