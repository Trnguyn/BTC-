def sum_digits(x):
    return sum(int(d) for d in str(x))

def sorted_list(lst):
    return sorted(lst, key=lambda x: (sum_digits(x),x))


testcase = int(input())
for _ in range(testcase):
    n = int(input())
    lst = list(map(int, input().split()))
    print(*sorted_list(lst))
