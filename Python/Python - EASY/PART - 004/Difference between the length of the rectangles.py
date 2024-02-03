alenAmount, timAmount = map(int, input().split())
alenArea , timArea = map(int, input().split())

alenCourt = (alenAmount / 5.0) / alenArea
timCourt = (timAmount / 5.0) / timArea

print("{:.2f}".format(abs(alenCourt - timCourt)))