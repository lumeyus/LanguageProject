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

    // Make language object for test file
    ifstream infile;
    infile.open(argv[argc-1]);
    Language testlang (argv[argc-1], infile);
    infile.close();

    // Make language objects for training data
    vector<Language> trainingData;
    for (int i = 1; i < argc - 1; i++)
    {
        ifstream infile;
        infile.open(argv[i]);
        Language trainingLang (argv[i], infile);
        trainingData.push_back(trainingLang);
        infile.close();
    }
    return 0;
}
