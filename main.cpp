#include "langtraining.h"
#include <vector>
#include <string>
#include <map>

using namespace ;

int main(int argc, char *argv[])
{
    if (argc != 2){exit(EXIT_FAILURE);}
    map<string, int> inTris = trigrams(argv[1])
    map<string, int> everyTri = allTris()

}
