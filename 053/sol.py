def factorial(n):
    fact = 1
    for i in range(1, n + 1):
        fact *= i
    return fact


def solve():
    count = 0
    for n in range(1, 100 + 1):
        for r in range(1, n + 1):
            res = factorial(n) / (factorial(r) * factorial((n - r)))
            if res > 10**6:
                count += 1
    return count

if __name__ == "__main__":
    print(solve())
