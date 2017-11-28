#include "langtraining.h"
#include <vector>
#include <string>
#include <map>

using namespace std;

// Map of alphabet to help make map of all trigrams
map<int, char> alphabet;
alphabet[0] = ' ';
for (i = 1; i < 27; i++)
    alphabet[i] = 'a' + (i - 1);

// Iterator map to loop through trigram map of input
map<string, int>::iterator it;

/*
Function that takes a string input and returns a map of all trigrams from that input
*/
map<string, int> trigrams(string input)
{
    map<string, int> inputTris;
    for (int j = 0; j < input.length() - 2; j++)
    {
        string trigram = input.substr(j,3);
// If trigram is already in the map, increment that frequency to avoid adding a repeated trigram
        for (it = inputTris.begin(); it != inputTris.end(); it++)
        {
            if (trigram == it->first)
                {it->second += 1;}
        }
// Otherwise add trigram to map
        inputTris[trigram] = 1
    }
    return inputTris;
}

/*
Function that creates a map of every trigram using ' ' and a-z with frequencies of 0
*/
map<string, int> allTris()
{
    map<string, int> everyTri;

    // Digit for each char in trigram
    int firstDig = 0;
    int secDig = 0;
    int thirdDig = 0;

    for(int i = 0; i < 19683; i++)
    {
        string trigram = "";
// Check if each digit needs to be incremented, otherwise add characters using alphabet map to trigram and store
        if (firstDig == 27 && secDig == 27 && thirdDig == 27)
            {break;}
        else if (secDig == 27 && thirdDig == 27)
        {
            firstDig += 1;
            secDig = 0;
            thirdDig = 0;
        }
        else if (thirdDig == 27)
        {
            secDig += 1;
            thirdDig = 0;
        }
        else
        {
            trigram += alphabet[firstDig] + alphabet[secDig] + alphabet[thirdDig];
            thirdDig += 1;
        }
        everyTri[trigram] = 0
    }
    return everyTri;
}
