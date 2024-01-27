str1 = list(set(input().strip()))
str2 = list(set(input().strip()))

count = 0

for i in str1:
    if i in str2:
        count +=1
print(count)
