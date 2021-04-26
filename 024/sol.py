from itertools import permutations

LIMIT = 1000000
N = "0123456789" 

permutations = [''.join(p) for p in permutations(N)]
print(permutations[LIMIT - 1])
