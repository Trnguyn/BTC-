def reversed_num(number):
    return number[::-1]

def tong_chu_so(number):
    return str(sum(int(digit) for digit in number))  # Tổng chữ số dưới dạng chuỗi

testcase = int(input())
for _ in range(testcase):
    N = input().strip()

    if len(tong_chu_so(N)) > 1 and reversed_num(tong_chu_so(N)) == tong_chu_so(N):
        print("YES")
    else:
        print("NO")