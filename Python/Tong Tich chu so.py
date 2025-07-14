
def tong_tich(n):
    tong = 0
    tich = 1
    nonzero = False
    digits = [int(d) for d in str(n)]
    for i in range(len(digits)):
        if i % 2 == 0:
            tong += digits[i]
        else:
            if digits[i] != 0:
                tich *= digits[i]
                nonzero = True
    if not nonzero:
        tich = 0
    return tong, tich

testcase = int(input())
for _ in range(testcase):
    N = input().strip()
    tong, tich = tong_tich(N)
    print(f"{tong} {tich}")
"""def tinh_tong_va_tich(N):
    digits = [int(d) for d in str(N)]

    tong_chan = sum(digits[i] for i in range(0, len(digits), 2))

    tich_le = 1
    has_nonzero = False
    for i in range(1, len(digits), 2):
        if digits[i] != 0:
            tich_le *= digits[i]
            has_nonzero = True

    if not has_nonzero:
        tich_le = 0

    return tong_chan, tich_le

testcase = int(input())

for _ in range(testcase):
    N = input().strip()
    tong, tich = tinh_tong_va_tich(N)
    print(tong, tich)"""