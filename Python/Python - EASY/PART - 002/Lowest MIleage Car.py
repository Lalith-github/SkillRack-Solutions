#Your code below
car_details = [i.split("@") for i in input().split()]

print(min(car_details, key = lambda car_info: float(car_info[1]))[0])
    