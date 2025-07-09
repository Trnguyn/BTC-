t = int(input())

for _ in range(t):
    n = int(input())
    base = 10
    while n >= base:
        n = ((n + base // 2) // base) * base
        base *= 10
    print(n)
