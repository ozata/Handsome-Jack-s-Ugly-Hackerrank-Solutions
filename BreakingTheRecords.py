#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the breakingRecords function below.
def breakingRecords(scores):
    worst = scores[0]
    best = scores[0]
    high = 0
    low = 0
    for i in range(1 , len(scores)):
        if scores[i] > best:
            high = high + 1
            best = scores[i]
        if scores[i] < worst:
            low = low + 1
            worst = scores[i]
    print(str(high) + " " + str(low))

    
games = input()
games = int(games)
scores = []

scores.append(input().split(" "))
scores = scores[0]
for i in range(0,games):
    scores[i] = int(scores[i])

breakingRecords(scores)