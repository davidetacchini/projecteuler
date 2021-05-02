from itertools import permutations

LIMIT = 1000000

permutations = [''.join(p) for p in permutations("0123456789")]
print(permutations[LIMIT - 1])
