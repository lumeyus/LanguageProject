#include "langtraining.h"
#include <vector>
#include <string>
#include <map>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])    // Argv 1 - (argc - 1) test files, (argc - 1) = test file
{
    if (argc <= 1){exit(EXIT_FAILURE);}
    cout << argv[argc-1] << endl;

    return 0;
}
