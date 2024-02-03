string = input()
n = int(input())

for i in range(1, len(string)+1):
    if i % n == 0: 
        print(string[i - 1], end="")