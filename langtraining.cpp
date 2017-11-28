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


map<string, int>::iterator it;

map<string, int> trigrams(string input)
{
    for (int i = 0; i < input.length() - 3; i+=3)
    {

    }
}


map<string, int> allTris()
{
    map<string, int> everyTri;

    // Digit for each char in trigram
    int firstDig = 0;
    int secDig = 0;
    int thirdDig = 0;

    for(int i = 0; i < 19683; i++)
    {
        string trigram = ""

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
        }        
        everyTri[trigram] = 0
    }
    return everyTri;
}
