#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pickingNumbers' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#


arr_length = input()
arr = list(map(int, input().split()))



def pickingNumbers(a):
    f = 0
    empty = [0] * 100
    for b in range((len(a))):
        for i in range(len(a)):
            if(a[i]==f or a[i]==f+1):
                empty[b] = empty[b] + 1
        i = 0
        f = f + 1
    cevap = sorted(empty)
    return cevap[99]

print(pickingNumbers(arr))



