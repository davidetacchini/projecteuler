from itertools import permutations

def solve():
    LIMIT = 1000000
    perms = [''.join(p) for p in permutations("0123456789")]
    return perms[LIMIT - 1]

if __name__ == "__main__":
    print(solve())
