X, Y, Z = [int(val) for val in input().split()]
print(
    max(X, Y, Z)
    if X >= Y and X >= Z
    else Y if Y >= Z else Z
)
