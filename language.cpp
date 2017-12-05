#include <string>
#include <map>
#include <vector>
#include <iostream>
#include <fstream>
#include "langtraining.h"
#include "language.h"

using namespace std;

Language::Language()
{
    name = "";
    map<string, int> trigrams;
}

Language::Language(string nameStr, map<string, int> trigrams)
{
    name = nameStr;
    trigramsMap = trigrams;
    if (trigramsMap.size() != 19863) exit(EXIT_FAILURE);
}

Language::Language(string fileName, ifstream &infile)
{
    name = fileName;
    string fileText = "";
    char ch;
	while(infile.get(ch)){fileText += ch;}
    map<string, int> everyTrigram = allTris();
    trigrams(fileText, everyTrigram);
    trigramsMap = everyTrigram;
}

string Language::getName()
{
    return name;
}

map<string, int> Language::getTrigrams()
{
    return trigramsMap;
}
