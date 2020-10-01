#ifndef GRABLEGENDNAME_H
#define GRABLEGENDNAME_H
#include "GrabLegendName.h"
// #include "utils.C" // Tokenize

GrabLegendName::GrabLegendName(TString InputFileName, int FieldPosition)
{
    vector<string> fields;
    Tokenize((string)InputFileName,fields, "/");
    string FileName = fields[fields.size()-1];
    // fields.clear();

    Tokenize(FileName,fields,"_");
    // TString title;
    if (fields[0] == "Radion") title = fields[3];  //
    else if (fields[0] == "GF") title = fields[2];  //
    else {
    std::cout << "Please enter correct sample name" << std::endl;
    exit(0);
    }
    // std::cout << "lenght of title: " << title.Length() << "\t" << title << endl;
    if (title.Length()==1) title = "Node"+title;
    // std::cout << "lenght of title: " << title.Length() << "\t" << title << endl;
    // LegendString.push_back(title);
}

GrabLegendName::~GrabLegendName() {}
#endif