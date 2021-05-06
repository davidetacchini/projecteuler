def chain(n):
    while True:
        n = sum(int(d)**2 for d in str(n))
        if n == 1 or n == 89:
            break
    return n

def solve():
    count = 0
    for i in range(1, 10**7):
        if chain(i) == 89:
            count += 1
    return count 

if __name__ == "__main__":
    # takes about 1 minute
    print(solve())
