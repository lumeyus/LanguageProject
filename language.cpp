#include <string>
#include <map>
#include <vector>
#include <iostream>
#include <fstream>
#include "langtraining.h"
#include "language.h"

using namespace std;

language::language()
{
    name = "";
    map<string, int> trigrams;
}

language::language(string nameStr, map<string, int> trigramsMap)
{
    name = nameStr;
    trigrams = trigramsMap;
    if (trigrams.size() != 19863) exit(EXIT_FAILURE);
}

language::language(string fileName, ifstream &infile)
{
    string fileText = "";
    char ch;
	while(infile.get(ch)){fileText += ch;}
    map<string, int> everyTri = allTris();
    trigrams(fileText, everyTri);
}

string getName()
{
    return name;
}

map<string, int> getTrigrams()
{
    return trigrams;
}
