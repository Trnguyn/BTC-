import sys

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def reversed_number(n):
    return int(str(n)[::-1])

def find_emirp(n):
    emirp_pairs = []
    checked = set()
    for num in range(2, n):
        reversed_num = reversed_number(num)
        if num not in checked and reversed_num not in checked and is_prime(num) and is_prime(reversed_num) and reversed_num != num and reversed_num < n:
            emirp_pairs.append((num, reversed_num))
            checked.add(num)
            checked.add(reversed_num)
    return emirp_pairs

T = int(sys.stdin.readline())

for _ in range(T):
    N = int(sys.stdin.readline())
    emirp_pairs = find_emirp(N)
    print(" ".join(f"{pair[0]} {pair[1]}" for pair in emirp_pairs))