#include "langtraining.h"
#include <vector>
#include <string>
#include <map>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 2){exit(EXIT_FAILURE);}
    map<string, int> everyTri = allTris();
    trigrams(argv[1], everyTri);

    map<string, int>::iterator it;

    for (it = everyTri.begin(); it != everyTri.end(); it++)
    {
        cout << it->second
        if (it ->first == "zzz")
            break;
        else
            cout << " ";
    }
    cout << endl;
    return 0;
}
