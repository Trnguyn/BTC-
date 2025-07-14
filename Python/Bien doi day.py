def tinh_so_buoc(A, target):
    return sum(abs(num - target) for num in A)


def tim_gia_tri_toi_uu(A):
    best_target = None
    min_steps = float('inf')

    for target in A:
        steps = tinh_so_buoc(A, target)
        if steps < min_steps:
            min_steps = steps
            best_target = target

    return min_steps, best_target


# Đọc dữ liệu đầu vào
N = int(input())
A = list(map(int, input().split()))

if len(A) != N:
    print("Số lượng phần tử không khớp với N!")
else:
    min_steps, best_target = tim_gia_tri_toi_uu(A)
    print(min_steps, best_target)