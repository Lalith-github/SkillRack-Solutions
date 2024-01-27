string = input().strip()

l = ""
r = ""
op = ""
for i in string:
    
    if i.isalpha():
        op = i
        r = string[string.index(i)+1:]
        break
    l += i
l = int(l)
r = int(r)
op = op.upper()
if op == "A":
    print(l + r)
elif op == "S":
    print(l - r)
elif op == "M":
    print(l * r)
elif op == "D":
    print(l // r)


