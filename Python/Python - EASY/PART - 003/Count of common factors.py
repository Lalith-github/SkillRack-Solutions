def find_factors(num):
    factors = set()
    for i in range(1, num + 1):
        if num % i == 0:
            factors.add(i)
    return factors

N = int(input())
numbers = [int(input()) for _ in range(N)]

smallest_number = min(numbers)
common_factors = find_factors(smallest_number)

# Remove factors of the smallest number that are not common to all numbers
for num in numbers:
    common_factors.intersection_update(find_factors(num))

# Exclude 1 from the common factors
common_factors.discard(1)

# Print the count of common factors
print(len(common_factors))
