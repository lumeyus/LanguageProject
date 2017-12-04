#include "langtraining.h"
#include <vector>
#include <string>
#include <map>

using namespace std;

// Map of alphabet to help make map of all trigrams
map<int, char> alphabet;
alphabet[0] = ' ';
for (i = 0; i < 26; i++)
    alphabet[i] = 'a' + i;

// Iterator map to loop through trigram map of input
map<string, int>::iterator it;

/*
Function that takes a string input and returns a map of all trigrams from that input
*/
void trigrams(string input, map<string, int> &allTrigrams)
{
    for (int j = 0; j < input.length() - 2; j++)
    {
        string trigram = input.substr(j,3);
        allTrigrams[trigram] += 1;
    }
}

/*
Function that creates a map of every trigram using ' ' and a-z with frequencies of 0
*/
map<string, int> allTris()
{
    map<string, int> everyTri;

    for (int i = 0; i < 27; i++)
    {
        string trigram1 = alphabet[i];
        for (int j = 0; j < 27; j++)
        {
            string trigram2 = trigram1 + alphabet[j];
            for (int k = 0; k < 27; k++)
                {
                    string trigram3 = trigram2 + alphabet[k];
                    everyTri[trigram3] = 0;
                }
        }
    }
}
