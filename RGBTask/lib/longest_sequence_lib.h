#ifndef LONGEST_SEQUENCE_LIB_H
#define LONGEST_SEQUENCE_LIB_H
 
#include <stdbool.h>

extern char colour;
extern int cellCounter;
 
bool isInMatrix(int x, int y, int N);
int findLongestColourSequence(char** matrix, int x, int y, int N);

#endif