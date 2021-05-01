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

def is_truncatable(n):
    count = 1
    length = len(str(n))
    for i in range(1, length):
        l = int(str(n)[i:])
        r = n // 10 ** i
        if (is_prime(l) and is_prime(r)):
            count += 1
    return length == count

count = 0
result = 0
i = 11
while count < 11:
    if is_prime(i) and is_truncatable(i):
        count += 1
        result += i
    i += 2

print(result)
