def solve():
    count = 0
    for i in range(1, 50):
        for j in range(1, 50):
            power = j ** i
            if len(str(power)) == i:
                count += 1
    return count

if __name__ == "__main__":
    print(solve())
