N = 100
combs = set()

for a in range(2, N + 1):
    for b in range(2, N + 1):
        power = a ** b
        combs.add(power)

print(len(combs))
