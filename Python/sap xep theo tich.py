def product_digits(x):
    res = 1
    for d in str(x):
        res *= int(d)
    return res

def sorted_list(lst):
    return sorted(lst, key=lambda x: (product_digits(x),x))


testcase = int(input())
for _ in range(testcase):
    n = int(input())
    lst = list(map(int, input().split()))
    print(*sorted_list(lst))
