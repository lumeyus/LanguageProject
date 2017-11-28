#ifndef _langtraining_h
#define _langtraining_h
#include <map>
#include <string>

using namespace std;

/*
Returns a map of trigrams with key being the trigram and value the frequency of that trigram
*/
map<string, int> trigrams(string input);

/*
Returns a map of all trigrams with frequency 0 for each one ("   " to "zzz")
*/
map<string, int> allTris();

/*
Returns a string with frequencies of each trigram ("   " to "zzz") seperated by spaces
*/
string frequencies(map trigrams, map allTris);

#endif
