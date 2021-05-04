def solve():
    with open("triangle.txt", "r") as fp:
        file = fp.read()
    
    triangle = []
    for line in file.split('\n'):
        numbers = []
        if line:
            for n in line.split(' '):
                numbers.append(n)
            triangle.append(numbers)
   
    for t in range(len(triangle) - 1, -1, -1):
        r1, r2 = triangle[t], triangle[t-1]
        if len(r1) == 1:
            break
        for i, a in enumerate(r2):
            s = int(a) + max(int(r1[i]), int(r1[i+1])) # sum to the current parent the maximum child value
            triangle[t-1][i] = s # update the current parent with the sum
        triangle.pop() # pop latest row (we don't need it anymore)
    return triangle

if __name__ == "__main__":
    print(solve())
