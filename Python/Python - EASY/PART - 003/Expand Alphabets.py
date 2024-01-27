string = input().strip()
digit = 0
is_continous = False
for i in string:
    if i.isdigit():
        if digit >= 0:
            digit = (digit * 10 ) + int(i)
        else:
            digit = int(i)
        continue
    else:
        print(i * digit, end="")
        digit = -1