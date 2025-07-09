def reversed_num(number):
    return number[::-1]

def check_ucln(number1,number2):
    while number2:
        number1, number2 = number2, number1 % number2
    return number1

def de(number1,number2):
    if check_ucln(number1,number2) == 1:
        return "YES"
    return "NO"


testcase = int(input())
for _ in range(testcase):
    number = input()
    res = de(int(number),int(reversed_num(number)))
    print(res)



