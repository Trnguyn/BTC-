def is_integer(s):
    try:
        num = int(s)
        return -2147483648 <= num <= 2147483647
    except ValueError:
        return False


def process_file(filename):
    words = []
    with open(filename, 'r') as file:
        for line in file:
            for word in line.split():
                if not is_integer(word):
                    words.append(word)
    words.sort()
    print(' '.join(words))

process_file('DATA.in')