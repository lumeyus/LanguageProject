#include "langtraining.h"
#include <string>
#include <map>
#include <set>
#include <iostream>
#include <cmath>
#include <algorithm>

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
Calculates summation of each portion of similarity equation by iterating through
each language trigrams map
*/
double simCheck(map<string, int> firstTrigrams, map<string, int> otherTrigrams)
{
    // Initialize sums and set to iterate through
    unsigned long long aTimesB = 0;
    unsigned long long aSquared = 0;
    unsigned long long bSquared = 0;

    // Iterate through map and add to summation of each portion of similarity equation
    map<string, int>::iterator it;
    for (it = firstTrigrams.begin(); it != firstTrigrams.end(); it++)
    {
        aTimesB += (unsigned long long)(firstTrigrams[it->first]) * (unsigned long long)(otherTrigrams[it->first]);
        aSquared += (unsigned long long)(firstTrigrams[it->first]) * (unsigned long long)(firstTrigrams[it->first]);
        bSquared += (unsigned long long)(otherTrigrams[it->first]) * (unsigned long long)(otherTrigrams[it->first]);
    }

    // Calculate similarity and return
    double bottom1 = sqrt(aSquared);
    double bottom2 = sqrt(bSquared);
    double bottom = bottom1*bottom2;
    double similarity = aTimesB/bottom;
    return similarity;
}
