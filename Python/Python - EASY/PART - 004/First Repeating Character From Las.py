def first_repeating_from_last(S):
    seen = set()
    for char in reversed(S):
        if char in seen:
            return char
        seen.add(char)
    return None

# Input
S = input().strip()

# Output
print(first_repeating_from_last(S))
