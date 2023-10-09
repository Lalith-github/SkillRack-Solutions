numList = [int(val) for val in input().split()]
for index in range(0, len(numList), 2):
    print(numList[index], end=" ")