def solve():
    count = 0
    for i in range(1, 10**4):
        iters = 0
        while iters < 50:
            i = i + int(str(i)[::-1])
            iters += 1
            if str(i) == str(i)[::-1]:
                break
        else:
            count += 1
    return count 

if __name__ == "__main__":
    print(solve())
