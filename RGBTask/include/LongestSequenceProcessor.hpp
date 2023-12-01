#ifndef LONGEST_SEQUENCE_PROCESSOR_HPP
#define LONGEST_SEQUENCE_PROCESSOR_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

class LongestSequenceProcessor {
public:
    void readMatrix(std::istream &input, std::vector<std::vector<char>> &matrix);
    int findMaxCountForCell(char **cMatrix, int rows, int i, int j);
    void processInput(std::istream &inputStream);
    void processFiles(int argc, char* argv[]);
};

#endif // LONGEST_SEQUENCE_PROCESSOR_HPP
