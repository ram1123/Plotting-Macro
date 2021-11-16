#ifndef _PLOTVAR_T_H
#define _PLOTVAR_T_H

#if 0
PlotVar_t(char *inpv, int innbin, double inminr,double inmaxr,char *inxl,char *inoutf,int inslog,int indl,int legPos) :
  plotvar(inpv),
  NBINS(innbin),MINRange(inminr),MAXRange(inmaxr),
  xlabel(inxl),outfile(inoutf),
  slog(inslog),drawleg(indl), LegPosition(legPos) {}
#endif
struct plotVar_t {
  TString plotvar;
  int    NBINS;
  double MINRange;
  double MAXRange;
  TString xlabel;
  TString outfile;
  int    slog;
  int  drawleg;
  int LegPosition;
};

#endif // _PLOTVAR_T_H
