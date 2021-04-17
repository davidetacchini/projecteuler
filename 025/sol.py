from itertools import count
from functools import cache

@cache
def fib(n):
    if n < 2:
        return n
    return fib(n-1) + fib(n-2)

for n in count(1):
    if len(str(fib(n))) >= 1000:
        res = n
        break

print(res)
