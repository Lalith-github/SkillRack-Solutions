vowels = "AEIOUaeiou"
strVal = input().strip()
for ch in strVal:
    if ch not in vowels:
        print(ch, end="")
