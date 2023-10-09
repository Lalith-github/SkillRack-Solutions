#Your code below

time_input = input().split()
count = 0

for time in time_input:
    hour, min = map(int, time.split(":"))
    
    minutes = hour * 60 + min
    
    if minutes > 600:
        count +=1
print(count)