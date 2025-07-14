def generate_hamming_pos(limit):
    hamming = [1]
    pos = {1: 1}

    i2 = i3 = i5 = 0

    while len(hamming) < limit:
        next2 = hamming[i2] * 2
        next3 = hamming[i3] * 3
        next5 = hamming[i5] * 5

        next_val = min(next2, next3, next5)

        if next_val != hamming[-1]:
            hamming.append(next_val)
            pos[next_val] = len(hamming)  # vị trí 1-indexed

        if next_val == next2:
            i2 += 1
        if next_val == next3:
            i3 += 1
        if next_val == next5:
            i5 += 1

    return pos


# Sinh sẵn dãy đủ lớn để xử lý mọi test
hamming_pos_map = generate_hamming_pos(200000)  # Tăng giới hạn lên cho an toàn

# Đọc số lượng test
testcase = int(input())
for _ in range(testcase):
    n = int(input())
    print(hamming_pos_map.get(n, "Not in sequence"))
