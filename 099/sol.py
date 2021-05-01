from math import log

with open("numbers.txt", "r") as fp:
    file = fp.read()

lines = [line for line in file.split('\n')]
maxx = 0
res = 0

for i, line in enumerate(lines, start=1):
    a, b = line.split(',')
    logr = log(int(a), 10) * int(b)
    if logr > maxx:
        maxx = logr
        res = i

print(res)
