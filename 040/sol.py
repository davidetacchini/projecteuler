string = ""
i = 0

while len(string) <= 10**6:
    string += str(i)
    i += 1

result = 1
for i in range(0, 7):
    result *= int(string[10**i])

print(result)
