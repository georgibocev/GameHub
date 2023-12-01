#include "longest_sequence_lib.h"
#include <stdio.h>
#include <stdlib.h>
 
char colour = ' ';
int cellCounter = 0;
 
bool isInMatrix(int x, int y, int N) {
    return (x >= 0 && x < N && y >= 0 && y < N);
}
 
int findLongestColourSequence(char** matrix, int x, int y, int N) {
    int countOfTraveledCells = 0;
 
    if (!isInMatrix(x, y, N)) {
        return countOfTraveledCells;
    }
 
    struct Cell {
        int x, y;
    };
 
    struct Cell *cellsQueue = (struct Cell *)malloc(N * N * sizeof(struct Cell));
    int front = 0, rear = 0;
 
    cellsQueue[rear++] = (struct Cell){x, y};
    colour = matrix[x][y];
    matrix[x][y] = '*';
 
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
 
    while (front < rear) {
        struct Cell currentCell = cellsQueue[front++];
        int currentX = currentCell.x;
        int currentY = currentCell.y;
        countOfTraveledCells++;
 
        for (int dir = 0; dir < 4; ++dir) {
            int newX = currentX + dx[dir];
            int newY = currentY + dy[dir];
            if (isInMatrix(newX, newY, N) && matrix[newX][newY] == colour) {
                matrix[newX][newY] = '*';
                cellsQueue[rear++] = (struct Cell){newX, newY};
            }
        }
    }
 
    free(cellsQueue);
 
    return countOfTraveledCells;
}