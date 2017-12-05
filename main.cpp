#include "langtraining.h"
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include "language.h"
#include "langtraining.h"

using namespace std;

int main(int argc, char *argv[])    // Argv[1 -> (argc - 2)] = language files, [argc - 1] = test file
{
    if (argc <= 1){exit(EXIT_FAILURE);}
    //cout << argv[argc-1] << endl; // Test file

    ifstream infile;
    infile.open(argv[argc-1]);
    language testlang (argv[argc-1], infile);
    infile.close();

    //for (i = 0; i < argc - 1; i++)

    return 0;
}
