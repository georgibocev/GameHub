#include "LongestSequenceProcessor.hpp"
extern "C" {
    #include "longest_sequence_lib.h"
}

void LongestSequenceProcessor::readMatrix(std::istream &input, std::vector<std::vector<char>> &matrix) {
    int rows, cols;
    input >> rows >> cols;
    matrix.resize(rows, std::vector<char>(cols));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            input >> matrix[i][j];
        }
    }
}

int LongestSequenceProcessor::findMaxCountForCell(char **cMatrix, int rows, int i, int j) {
    if (cMatrix[i][j] != '*') {
        int count = findLongestColourSequence(cMatrix, i, j, rows);
        return count;
    }
    return 0;
}

void LongestSequenceProcessor::processInput(std::istream &inputStream) {
    std::vector<std::vector<char>> matrix;
    readMatrix(inputStream, matrix);

    int rows = matrix.size();
    int cols = matrix[0].size();

    char** cMatrix = new char*[rows];
    for (int i = 0; i < rows; ++i) {
        cMatrix[i] = new char[cols];
        for (int j = 0; j < cols; ++j) {
            cMatrix[i][j] = matrix[i][j];
        }
    }

    int maxCount = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int count = findMaxCountForCell(cMatrix, rows, i, j);
            maxCount = std::max(maxCount, count);
        }
    }

    std::cout << maxCount << std::endl;

    for (int i = 0; i < rows; ++i) {
        delete[] cMatrix[i];
    }
    delete[] cMatrix;
}

void LongestSequenceProcessor::processFiles(int argc, char* argv[]) {
    if (argc > 1) {
        for (int fileIndex = 1; fileIndex <= std::min(argc - 1, 4); ++fileIndex) {
            std::ifstream input(argv[fileIndex]);
            processInput(input);
            std::cout << "Processed file: " << argv[fileIndex] << std::endl;
        }
    } else {
        processInput(std::cin);
    }
}
