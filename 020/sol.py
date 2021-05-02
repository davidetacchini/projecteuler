def solve():
    fact = 1;
    for i in range(1, 100):
        fact *= i
    return sum(int(n) for n in str(fact))

if __name__ == "__main__":
    print(solve())
