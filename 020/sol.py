fact = 1;

for i in range(1, 100):
    fact *= i

print(sum(int(n) for n in str(fact)))
