def solve():
    with open("names.txt", "r") as fp:
        file = fp.read()

    names = sorted(file.split(','))
    alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

    res = 0
    for i, name in enumerate(names, start=1):
        summ = 0
        for letter in name:
            if letter in alphabet:
                summ += alphabet.find(letter) + 1
        res += i * summ
    return res

if __name__ == "__main__":
    print(solve())
