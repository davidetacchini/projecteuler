def factorial(n):
    f = 1
    for i in range(1, n + 1):
        f *= i
    return f

def solve():
    res = 0
    for i in range(3, 10**5):
        s = sum([factorial(int(c)) for c in str(i)])
        if s == i:
            res += i
    return res

if __name__ == "__main__":
    print(solve())
