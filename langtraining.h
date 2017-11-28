#ifndef _langtraining_h
#define _langtraining_h
#include <map>
#include <string>

using namespace std;

/*
Returns a map of trigrams with key being the trigram and value the frequency of that trigram
*/
map<string trigram, int frequency> trigrams;

/*
Returns a map of all trigrams ("   " to "zzz")
*/
map<string trigram, int frequency> allTris;

/*
Returns a string with frequencies of each trigram ("   " to "zzz") seperated by spaces
*/
string frequencies(map trigrams);

#endif
