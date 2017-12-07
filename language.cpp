#include <string>
#include <map>
#include <vector>
#include <iostream>
#include <fstream>
#include "langtraining.h"
#include "language.h"

using namespace std;

// Default constructor for language object
Language::Language()
{
    name = "";
    map<string, int> trigrams;
}

// Constructor that creates a Language object with a given name string and map of trigrams
// Error if trigrams map is not of size 27^3
Language::Language(string nameStr, map<string, int> trigrams)
{
    name = nameStr;
    trigramsMap = trigrams;
    if (trigramsMap.size() != 19683) exit(EXIT_FAILURE);
}

// Constructor that creates a Language object from a file input
// If input contains any characters besides ' ' and 'a' - 'z', gives error
// since trigrams() will add extra maps for trigrams with those invalid characters
Language::Language(string fileName, ifstream &infile)
{
    name = fileName;
    string fileText = "";
    char ch;
	while(infile.get(ch)){fileText += ch;}
    map<string, int> everyTrigram = allTris();
    trigrams(fileText, everyTrigram);
    trigramsMap = everyTrigram;
    if (trigramsMap.size() != 19683) exit(EXIT_FAILURE);
}

// Returns name of Language
string Language::getName()
{
    return name;
}

// Returns map of trigrams/frequencies of Language
map<string, int> Language::getTrigrams()
{
    return trigramsMap;
}
