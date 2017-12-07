#ifndef _langtraining_h
#define _langtraining_h
#include <string>
#include <map>
#include <set>

using namespace std;

/*
Returns a map of trigrams with key being the trigram and value the frequency of that trigram
*/
void trigrams(string input, map<string, int> &allTrigrams);

/*
Returns a map of all trigrams with frequency 0 for each one ("   " to "zzz")
*/
map<string, int> allTris();

/*
Returns similarity between two trigram maps
*/
int simCheck(map<string, int> firstTrigrams, map<string, int> otherTrigrams);


#endif
