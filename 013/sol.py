with open("./numbers.txt", "r") as fp:
    numbers = fp.read()

res = 0

for number in numbers.split("\n"):
    if number:
        res += int(number)

print(str(res)[:10])
