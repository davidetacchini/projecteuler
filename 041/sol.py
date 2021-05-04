from itertools import permutations

def is_prime(n):
    if n <= 3:
        return n > 1
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

def solve():
    digits = "123456789"
    res = None
    while not res:
        perms = [''.join(p) for p in permutations(digits)]
        for p in perms:
            if is_prime(int(p)):
                res = p
        digits = digits[:-1]
    return res

if __name__ == "__main__":
    print(solve())
