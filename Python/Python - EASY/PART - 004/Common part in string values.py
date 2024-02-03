string1 = input()
string2 = input()

count = 0

for i in range(len(string1)):
    if string1[i] == string2[count]:
        count +=1
print(string2[:count])