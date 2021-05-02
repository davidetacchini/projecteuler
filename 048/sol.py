def solve():
    return str(sum(n**n for n in range(1, 1000)))[-10:]

if __name__ == "__main__":
    print(solve())
