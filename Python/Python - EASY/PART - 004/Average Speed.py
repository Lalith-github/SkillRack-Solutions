values = input().split()

distance = []
time = []

for value in values:
    temp = value.split("@")
    distance.append(int(temp[0]))
    time.append(int(temp[1]))

result = sum(distance) / sum(time)
print("{:.2f} kmph".format(result))
