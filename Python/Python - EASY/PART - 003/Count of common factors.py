n = int(input())

count = 0
arr = []

for i in range(n):
    arr.append(int(input()))

arr = sorted(arr, reverse=True)

for i in range(2, arr[0]):
    for j in range(0, n):
        if arr[j] % i !=0:
            break
    if j>=n: count +=1
print(count)