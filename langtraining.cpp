#include "langtraining.h"
#include <string>
#include <map>
#include <set>
#include <iostream>

using namespace std;

/*
Function that takes a string input and returns a map of all trigrams from that input
*/
void trigrams(string input, map<string, int> &allTrigrams)
{
    for (size_t j = 0; j < input.length() - 2; j++)
    {
        // Go through string and increment frequency of each trigram found in allTrigrams map
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

    // Map of alphabet to help make map of all trigrams
    map<int, char> alphabet;
    alphabet[0] = ' ';
    for (int i = 1; i < 27; i++)
        alphabet[i] = 'a' + i - 1;

    for (int i = 0; i < 27; i++)
    {   // Add first letter as string
        string trigram1 = "";
        trigram1 += alphabet[i];
        for (int j = 0; j < 27; j++)
        {   // Add second letter as string
            string trigram2 = trigram1 + alphabet[j];
            for (int k = 26; k >= 0; k--)
                {   // Add third letter as string
                    string trigram3 = trigram2 + alphabet[k];
                    everyTri[trigram3] = 0;
                }
        }
    }
    return everyTri;
}

/*
Function that returns the similarity between two maps of trigrams
Creates a set adding the non-zero-frequency trigrams, then iterates through set
calculating each summation of similarity formula and using those to calculate final similarity
*/
int simCheck(map<string, int> firstTrigrams, map<string, int> otherTrigrams)
{
    // Initialize sums and set to iterate through
    unsigned int aTimesB = 0;
    unsigned int aSquared = 0;
    unsigned int bSquared = 0;
    set<string> relevantTris;

    // Add non-zero-frequency trigrams to set
    map<string, int>::iterator it1;
    for (it1 = firstTrigrams.begin(); it1 != firstTrigrams.end(); it1++)
    {
        if (firstTrigrams[it1->first] != 0 && otherTrigrams[it1->first] != 0)
        {
            relevantTris.insert(it1->first);
        }
    }

    // Iterate through set, adding to sum of each similarity equation piece
    set<string>::iterator it2;
    for(it2 = relevantTris.begin(); it2 != relevantTris.end(); it2++)
    {
        aTimesB += (firstTrigrams[*it2] * otherTrigrams[*it2]);
        aSquared += (firstTrigrams[*it2] * firstTrigrams[*it2]);
        bSquared += (otherTrigrams[*it2] * otherTrigrams[*it2]);
    }

    // Calculate similarity and return
    int similarity = aTimesB/(aSquared*bSquared);
    return similarity;
}
