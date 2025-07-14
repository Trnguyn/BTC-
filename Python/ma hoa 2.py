P = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."

def encrypt(S, K):
    result = ""
    for char in S:
        index = P.index(char)
        new_char = P[(index + K) % 28]
        result += new_char
    return result[::-1]

while True:
    try:
        line = input()
        if line.strip() == "":
            continue
        parts = line.strip().split()
        K = int(parts[0])
        if K == 0:
            break
        S = parts[1]
        print(encrypt(S, K))
    except EOFError:
        break
