def solve():
    m = 0
    for a in range(1, 100):
        for b in range(1, 100):
            power = a**b
            s = sum(int(d) for d in str(power))
            if s > m:
                m = s
    return m

if __name__ == "__main__":
    print(solve())
