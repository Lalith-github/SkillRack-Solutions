string = input().strip()

splitted = string.split("_")
if len(splitted) >= 2:
    print(splitted[0][::-1] + "_" + splitted[1])
else:
    print(string[::-1])