class GrabLegendName {
protected:
    TString title;

public:

	GrabLegendName(TString InputFileName, int FieldPosition);
	~GrabLegendName();

    TString GetName() {return title;}
};