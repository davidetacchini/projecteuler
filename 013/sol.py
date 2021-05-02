def solve():
    with open("numbers.txt", "r") as fp:
        file = fp.read()

    res = 0
    for number in file.split('\n'):
        if number:
            res += int(number)
    return str(res)[:10]

if __name__ == "__main__":
    print(solve())
