def check_tang_giam(n):
    digits = [int(d) for d in str(number)]

    if len(digits) < 3:
        return "NO"

    max_pos = digits.index(max(digits))

    left_valid = all(digits[i] < digits[i + 1] for i in range(max_pos))

    right_valid = all(digits[i] > digits[i + 1] for i in range(max_pos, len(digits) - 1))

    if left_valid and right_valid:
        return "YES"
    return "NO"

testcase = int(input())
for _ in range(testcase):
    number = int(input())
    print(check_tang_giam(number))
