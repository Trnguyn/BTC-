import re

def find_min_number(s):
    numbers = list(map(int, re.findall(r'\d+', s)))
    return min(numbers) if numbers else None

T = int(input())

for _ in range(T):
    s = input().strip()
    print(find_min_number(s))