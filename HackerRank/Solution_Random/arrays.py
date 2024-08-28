#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'arrayManipulation' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. 2D_INTEGER_ARRAY queries
#

def arrayManipulation(n, queries):
    sparse = {}
    for a, b, k in queries:
        sparse[a] = sparse.get(a, 0) + k
        sparse[b+1] = sparse.get(b+1, 0) - k
        
    cumm = 0
    max_ = 0
    for i in range(1, n+1):
        cumm += sparse.get(i, 0)
        max_ = max(cumm, max_)
    return max_

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    queries = []

    for _ in range(m):
        queries.append(list(map(int, input().rstrip().split())))

    result = arrayManipulation(n, queries)

    fptr.write(str(result) + '\n')

    fptr.close()
