
def is_valid_cccd(cccd):
    if len(cccd) != 12 or not cccd.isdigit():
        return False
    digits = [int(d) for d in cccd]
    reverse_digit = digits[::-1]
    for i in range(len(reverse_digit)):
        if i % 2 != 0:
            reverse_digit[i] *= 2
            if reverse_digit[i] > 9:
                reverse_digit[i] -= 9

    total = sum(reverse_digit)
    return total % 10 == 0

def get_all_cccd(atm):
    res = []
    for d in range(10):
        candidate_num = atm + str(d)
        if is_valid_cccd(candidate_num):
            res.append(candidate_num)
    return res

def test_is_valid_cccd():
    print("Test is_valid_cccd:")
    print(is_valid_cccd("086204006620"))  # Giả sử hợp lệ
    print(is_valid_cccd("012345678914"))  # Giả sử không hợp lệ

def test_get_all_cccd():
    test = "12345678915"
    result = get_all_cccd(test)
    print("các cccd hợp lệ")
    print(f"{result}")

if __name__ == "__main__":
    test_is_valid_cccd()
    test_get_all_cccd()