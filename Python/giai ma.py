testcase = int(input())
for a in range(testcase):
    s = input()
    i = 0
    res = ""

    while i < len(s):
        if s[i].isalpha():
            char = s[i]
            i += 1
            num = 0

            while i < len(s) and s[i].isdigit():
                num = num * 10 + int(s[i])
                i += 1

            res += char * num
        else:
            i += 1

    print(res)
