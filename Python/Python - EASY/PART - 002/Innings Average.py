#Your code below
n = int(input())

teamA, teamB = 0,0

for i in range(n):
    a, b = map(int, input().split())
    teamA += a
    teamB += b

print("{:.2f}".format(teamA/n))
print("{:.2f}".format(teamB/n))