def get_string():
    s, i = "", 0
    while len(s) <= 10**6:
        s += str(i)
        i += 1
    return s
    
def solve():
    string = get_string()
    res = 1
    for i in range(0, 7):
        res *= int(string[10**i])
    return res

if __name__ == "__main__":
    print(solve())
