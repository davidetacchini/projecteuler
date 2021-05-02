def solve():
    N = 100
    combs = set()
    for a in range(2, N + 1):
        for b in range(2, N + 1):
            power = a ** b
            combs.add(power)
    return len(combs)

if __name__ == "__main__":
    print(solve())
