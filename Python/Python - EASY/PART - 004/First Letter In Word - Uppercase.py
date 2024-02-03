string = input()

print(string[0].upper(), end="")
i = 1

while i < len(string):
    
    current = string[i]

    if current.isspace():
        next = string[i+1]
        if not next.isspace():
            print(current + next.upper(), end="")
            i+=2
            continue
    print(current, end="")
    i+=1
    