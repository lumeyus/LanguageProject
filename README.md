# Luis Ibanez
# Zachary Miller
# CSC 211 Final Language Project

## What small problems to solve?  How to solve?

Need to figure out how to get trigram frequencies from both test and training data.

- Need a function to read input files
- Need a function to read store trigram data of files into a map or arrays
- Need way to test out if trigram data is being stored correctly (printing?)

Need to verify files follow specifications. (a-z lowercase and ' 's only)

## Classes? Subclasses?

A Language class that stores a language and it's trigram frequencies

- private instance variables for language name and array of trigram frequency numbers
- needs a constructor method to create object by reading from a file
- needs accessor to trigram frequency arrays to compare to training data frequency arrays

Could make a method that compares the first x characters of a trigram to figure out frequencies quicker
(similar to how the translate() method worked on the DNA class)

## What files will we need?

+ trigram.h for templated trigram frequency calculator
+ language.h and language.cpp for Language class
+ langtraining.cpp as implementation of machine language learning
+ main.cpp to test behavior of language class and trigram frequency calculation

## Milestone 1 main?

Need main to test trigram frequency function.
- Has to print out frequency array from '   ' to 'zzz'
- Has to get trigram frequency given an input string from command line arg
- Needs to store data in form of array to print
- Inspect results of trigram calculator by hand

## Milestone 2 main?

Need main to test trigram frequency between training and test data, includes:
- creating a language object for each training data file
- creating an unnamed language object using the test data files
- compare the frequencies using a bool operator from language class

## Libraries?

+ trigram.h
+ language.h
+ string
+ vector
+ algorithm
+ using namespace std
+ iostream
+ fstream

## Files that compile script will need?

We will need to compile:
+ trigram.h
+ language.h
+ language.cpp
+ langtraining.cpp
+ main.cpp

## PS. The git log only shows one account making all the changes, however we tried using Zach's computer but the commits wouldn't function with the commits already made which ended up messing up the readme file in some weird ways (putting random >>>>>>>>>>>> and ========== signs everywhere)
