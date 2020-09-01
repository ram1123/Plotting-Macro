class TreeReaderClass {
protected:
    TTreeReader*     fReader;          //!the tree reader   

public:

	TreeReaderClass(TString inputFile, TString TreeName);
	~TreeReaderClass();

	TTreeReader* reader() {return fReader;}
	
};