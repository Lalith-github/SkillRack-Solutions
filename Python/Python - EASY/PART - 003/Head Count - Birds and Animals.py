#Your code below
heads = int(input())
legs = int(input())

animals = abs((legs - (4 * heads))//2)
birds = abs((legs - (2*heads))//2)

print(animals, birds)