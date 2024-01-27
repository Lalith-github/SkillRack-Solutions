n = int(input())

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**.5) + 1):
        if n % i == 0:
            return False
    return True

while not is_prime(n+1):
    n += 1
print(n+1)