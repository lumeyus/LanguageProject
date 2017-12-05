#ifndef _language_h
#define _language_h

#include <string>
#include <map>
#include <vector>
#include <iostream>
#include <fstream>
#include "dna.h"
#include "langtraining.h"

using namespace std;

/*
A class to represent trigram frequencies
A language object has two member fields: a name, to identify what language is being represented
and a map of its trigrams, which contains all 19683 possible trigrams from "   " to "zzz"
*/

class language
{

public:
    // Default Constructor
    langauge();

    // Constructor with arguments for name and trigrams
    language(string name, map<string, int> trigrams);

    /*
    Constructor that takes input file stream to a text files
    File is expected to contain only characters including ' ' and 'a' - 'z'
    */
    language(ifstream &infile, string fileName);

    // Getter methods
    string getName();
    map<string, int> getTrigrams();

private:
    // Instance variables
    string name;
    map<string, int> trigrams;
}
