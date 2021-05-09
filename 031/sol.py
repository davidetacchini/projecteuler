def solve():
    N = 200
    coins = [1, 2, 5, 10, 20, 50, 100, 200]
    cache = [0] * (N + 1)
    cache[0] = 1
    for coin in coins:
        for i in range(coin, len(cache)):
            cache[i] += cache[i - coin]
    return cache[N]

if __name__ == "__main__":
    print(solve())
