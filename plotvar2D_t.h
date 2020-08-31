#ifndef _PLOTVAR_T_H
#define _PLOTVAR_T_H

#if 0
PlotVar_t(char *inpv1, char *inpv2, int innbin1, double inminr1, double inmaxr1, int innbin2, double inminr2,double inmaxr2, char *inxl1, char *inxl2, char *inoutf,int inslog,int indl,int legPos) :
  plotvar1(inpv1),
  plotvar2(inpv2),
  NBINS1(innbin1),MINRange1(inminr1),MAXRange1(inmaxr1),
  NBINS2(innbin2),MINRange2(inminr2),MAXRange2(inmaxr2),
  xlabel1(inxl1),
  xlabel2(inxl2),
  outfile(inoutf),
  slog(inslog),drawleg(indl), LegPosition(legPos) {}
#endif
struct plotVar_t {
  TString plotvar1;
  TString plotvar2;
  int    NBINS1;
  double MINRange1;
  double MAXRange1;
  int    NBINS2;
  double MINRange2;
  double MAXRange2;  
  TString xlabel1;
  TString xlabel2;
  TString outfile;
  int    slog;
  int  drawleg;
  int LegPosition;
};

#endif // _PLOTVAR_T_H
