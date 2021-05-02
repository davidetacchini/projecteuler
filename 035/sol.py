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

def get_count(s):
    count = 0
    for i in range(len(s)):
        circle = int(s[i:] + s[:i])
        if is_prime(circle):
            count += 1
    return count

def solve():
    res = 1
    for i in range(3, 10**6, 2):
        if is_prime(i):
            s = str(i)
            if get_count(s) == len(s):
                res += 1
    return res

if __name__ == "__main__":
    print(solve())
