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
    for(int i = 0; i < 19683; i++)
    
}
