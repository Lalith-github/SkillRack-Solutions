numbers = map(int, input().split(" "))
x = int(input())
y = int(input())

sum = 0

for number in numbers:
    if number % 2 == 0:
        sum -=y
    else:
        sum += x
print(sum)