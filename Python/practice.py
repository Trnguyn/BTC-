#tính tiền bậc thang(taxi)
"""def taxi_bill(km):
    oringinal_km = km
    km_gia = [
        (0.3,20000),
        (3,18600),
        (11,14200),
        (20,13000),
        (30,12000),
        (float('inf'),11000)
    ]

    price = 0
    for so_km, gia in km_gia:
        if km <= 0:
            break
        distance = min(km, so_km)
        price += distance * gia
        km -= distance

    price_w_vat = price * 1.05

    if oringinal_km >=120:
        price_w_vat *= 0.9

    return price_w_vat

km = float(input())
tien = taxi_bill(km)
print(f"Tổng tiền phải trả: {tien:,.0f} VND")"""

#số Armstrong
# câu a
def is_armstrong(n):
    original_num = n
    so_mu = len(str(n))
    total = 0
    while n != 0:
        total += (n%10)**so_mu
        n //= 10
    return total == original_num
# câu b
def list_n_armstrong(n):
    arm_list = []
    i = 0
    while len(arm_list) < n:
        if is_armstrong(i):
            arm_list.append(i)
        i+=1
    return arm_list

# câu c
def get_armstrong(my_list):
    result = []
    for num in my_list:
        if is_armstrong(num):
            result.append(num)
    return result
# câu d
def get_frequency(path_to_file):
    import re
    freq = {}
    with open(path_to_file,"r", encoding= "utf-8") as f:
        content = f.read()

    numbers = re.findall(r'\b\d+\b', content)

    for num_str in numbers:
        num = int(num_str)
        if is_armstrong(num):
            freq[num] = freq.get(num, 0) + 1

    with open("D:\\get_frequency.log","w", encoding= "utf-8") as log_file:
        for key, value in freq.items():
            log_file.write(f"{key}: {value}\n")

    return freq
# câu e
def main():
    # Câu a: Kiểm tra một số có phải Armstrong không
    print("Câu a: Kiểm tra số Armstrong")
    num = int(input("Nhập một số để kiểm tra: "))
    if is_armstrong(num):
        print(f"{num} là số Armstrong.")
    else:
        print(f"{num} không phải là số Armstrong.")

    print("\nCâu b: In n số Armstrong đầu tiên")
    n = int(input("Nhập số lượng số Armstrong cần lấy: "))
    arm_list = list_n_armstrong(n)
    print(f"{n} số Armstrong đầu tiên là: {arm_list}")

    print("\nCâu c: Lọc số Armstrong từ danh sách")
    input_list = input("Nhập danh sách số nguyên cách nhau bởi dấu cách: ")
    my_list = list(map(int, input_list.split()))
    result = get_armstrong(my_list)
    print(f"Các số Armstrong trong danh sách: {result}")

    print("\nCâu d: Đếm số Armstrong trong tập tin văn bản")
    path = input("Nhập đường dẫn đến file văn bản (vd: my_text_1.txt): ")
    freq = get_frequency(path)
    print("Tần suất số Armstrong tìm được:")
    for k, v in freq.items():
        print(f"{k}: {v}")


if __name__ == "__main__":
    main()
