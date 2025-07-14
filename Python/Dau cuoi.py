testcase = int(input())
for i in range(testcase):
    n = int(input())
    save = n
    while save >= 100:
        save = save // 10
    first_two = save
    last_two = n % 100
    if first_two == last_two:
        print("YES")
    else:
        print("NO")
