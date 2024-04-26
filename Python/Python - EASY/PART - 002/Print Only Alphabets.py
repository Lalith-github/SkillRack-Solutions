N = int(input())

for i in range(1, N + 1):
    # Print numbers from 1 to i in each row separated by a space
    print(*range(1, i + 1))
