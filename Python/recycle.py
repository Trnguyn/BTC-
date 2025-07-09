import math
from itertools import product


def tong_tich(n):
    tong = 0
    tich = 1
    nonzero = False
    digits = [int(d) for d in str(n)]
    for i in range(len(digits)):
        if i % 2 == 0:
            tong += digits[i]
        else:
            if digits[i] != 0:
                tich *= digits[i]
                nonzero = True
    if not nonzero:
        tich = 0
    return tong, tich

testcase = int(input())
for _ in range(testcase):
    N = input().strip()
    tong, tich = tong_tich(N)
    print(f"{tong} {tich}")