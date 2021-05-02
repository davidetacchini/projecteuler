def is_sum(n):
    return sum(int(d)**5 for d in str(n)) == n

def solve():
    res = 0
    for i in range(10, 10**6 // 2):
        if (is_sum(i)):
            res += i
    return res

if __name__ == "__main__":
    print(solve())
