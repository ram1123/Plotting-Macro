#ifndef TREEREADERCLASS_H
#define TREEREADERCLASS_H
#include "TChain.h"
// #include "branches.h"
#include "TreeReaderClass.h"

TreeReaderClass::TreeReaderClass(TString inputFile, TString TreeName) 
{
	TChain * chain = new TChain(TreeName);

	chain->AddFile( inputFile );

    fReader = new TTreeReader(chain);    
}

TreeReaderClass::~TreeReaderClass() {}
#endif