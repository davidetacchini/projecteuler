def has_same_digits(n):
    count = 0
    string = ''.join(sorted(str(n)))
    for i in range(2, 7):
        number = n * i
        mul = ''.join(sorted(str(number)))
        if mul == string:
            count += 1
    return count == 5

i = 1
while True:
    if has_same_digits(i):
        break
    i += 1
    
print(i)    
