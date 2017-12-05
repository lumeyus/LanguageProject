#include "langtraining.h"
#include <vector>
#include <string>
#include <map>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 2){exit(EXIT_FAILURE);}

    // Make all trigrams, add frequencies to map from input substrings
    map<string, int> everyTri = allTris();
    trigrams(argv[1], everyTri);

    // Make map iterator to iterate through map
    map<string, int>::iterator it;
    for (it = everyTri.begin(); it != everyTri.end(); it++)
    {
        // Print each frequency with space after, break before printing " " after zzz frequency
        cout << it->second;
        if (it ->first == "zzz")
            break;
        else
            cout << " ";
    }
    cout << endl;
    return 0;
}
