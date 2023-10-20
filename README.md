# Longest-Counpound-Word
Problem statement given by Impledge

Problem Statement Write a program:

Reads the given files (Input_01.txt, Input_02.txt) containing a list of words in alphabetical order (one word per line, no spaces, all lowercase)
Identifies and displays the following data in the logs/console/output file o Longest compound word o Second longest compound word Time taken to process the input file Note: A compound word is something that can be made by concatenating (joining) smaller words. located in the same file
Solution:

Two functions are created, the first is an iterative function that returns a list of compound words. It defines an internal function "isConcat" which is used to check whether a given word is a concatenated word. It uses memorization (caching) to improve function performance by storing preformed results. The function takes a word as input and iterates through all possible prefixes and suffixes of that word, determining whether it can be formed by adding other words in the word set. If it finds a valid combination, it returns True; Otherwise it returns false.

The second function compares all values and returns the largest and second of the given terms
