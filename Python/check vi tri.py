def check_prime(number):
    if number < 2:
        return False
    for i in range(2,int(number**0.5)+1):
        if number % i == 0:
            return False
    return True

def check_pos(number):
    prime_numbers = {'2','3','5','7'}
    for i in range(len(number)):
        if check_prime(i):
            if number[i] not in prime_numbers:
                return "NO"
        else:
            if number[i] in prime_numbers:
                return "NO"
    return "YES"

testcase = int(input())
for _ in range(testcase):
    N = input()
    print(check_pos(N))