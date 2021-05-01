def is_sum(n):
    return sum(int(d)**5 for d in str(n)) == n

result = 0
for i in range(10, 10**6 // 2):
    if (is_sum(i)):
        result += i

print(result)
