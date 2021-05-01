from itertools import permutations

perms = [''.join(p) for p in permutations("0123456789")]
primes = [2, 3, 5, 7, 11, 13, 17]

result = 0
for p in perms:
    count = 0
    for i in range(1, 8):
        if int(p[i : i + 3]) % primes[i - 1] == 0:
            count += 1
    
    if count == len(primes):
        result += int(p)

print(result)
