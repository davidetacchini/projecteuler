with open("names.txt", "r") as fp:
    names = fp.read()

new = names.split(',')
names = sorted(new)
alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

res = 0
for i, name in enumerate(names, start=1):
    summ = 0
    for letter in name:
        if letter in alphabet:
            summ += alphabet.find(letter) + 1
    res += i * summ

print(res)
