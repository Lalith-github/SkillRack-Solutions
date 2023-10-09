#Your code below
n = int(input())

maxTotal = 0
maxStudent = ""

for i in range(n):
    inp = input().split(":")
    
    total = sum(map(int, inp[1:]))
    
    if total > maxTotal:
        maxTotal =  total
        maxStudent = inp[0]
        
print(maxStudent)