#include <string>
#include <map>
#include <vector>
#include <iostream>
#include <fstream>
#include "dna.h"
#include "langtraining.h"

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

language::language(ifstream &infile, string fileName)
{
    string fileText = "";
    for (string line; getline(infile, line);)
    {
        fileText += line;
    }
    map<string, int> everyTri = allTris();
    trigrams(fileText, everyTri);
    language(fileName, everyTri);
}

string getName()
{
    return name;
}

map<string, int> trigrams()
{
    return trigrams;
}
