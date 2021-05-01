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

def generate_primes():
    primes = []
    for i in range(10**3 + 1, 10**4, 2):
        if is_prime(i):
            primes.append(str(i))
    return primes

def get_permutations(n):
    perms = []
    for p in permutations(n):
        p = int(''.join(p))
        # we only care about prime and 4-digits numbers
        if is_prime(p) and len(str(p)) == 4:
            perms.append(p)
    return perms

primes = generate_primes()

# TODO: maybe improve the structure
for prime in primes:
    perms = get_permutations(prime)
    for i in range(len(perms)):
        for j in range(i):
            for k in range(j):
                a, b, c = perms[i], perms[j], perms[k]
                if a < b < c and b - a == c - b:
                    print(str(a) + str(b) + str(c))
