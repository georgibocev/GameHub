import sys
import ctypes

lib = ctypes.CDLL('../../build/RGBTask/libRGBTaskLib.dll')

def findLongestColourSequence(matrix, x, y, N):
    return lib.findLongestColourSequence(matrix, x, y, N)

if len(sys.argv) > 1:
    for file in range(1, len(sys.argv)):
        with open(sys.argv[file], 'r') as testfile:
            rows, cols = map(int, testfile.readline().split())
            matrix = []

            for _ in range(rows):
                row = testfile.readline().strip()
                matrix.append(row)

            
            c_matrix = (ctypes.POINTER(ctypes.c_char) * rows)()
            for i in range(rows):
                c_matrix[i] = (ctypes.c_char * cols)()
                for j in range(cols):
                    c_matrix[i][j] = matrix[i][j].encode()

            maxCount = 0
            for i in range(rows):
                for j in range(cols):
                    if c_matrix[i][j] != b'*':
                        count = findLongestColourSequence(c_matrix, i, j, rows)
                        maxCount = max(maxCount, count)

            print(f"Result for file {sys.argv[file]}: {maxCount}")
else:
    rows, cols = map(int, input().split())
    matrix = []

    for _ in range(rows):
        row = input().strip()
        matrix.append(row)


    c_matrix = (ctypes.POINTER(ctypes.c_char) * rows)()
    for i in range(rows):
        c_matrix[i] = (ctypes.c_char * cols)()
        for j in range(cols):
            c_matrix[i][j] = matrix[i][j].encode()

    maxCount = 0
    for i in range(rows):
        for j in range(cols):
            if c_matrix[i][j] != b'*':
                count = findLongestColourSequence(c_matrix, i, j, rows)
                maxCount = max(maxCount, count)

    print(maxCount)
