S = input().strip()

seen_chars = set()

for char in S:
    if char in seen_chars:
        seen_chars.remove(char)
    else:
        seen_chars.add(char)

print(seen_chars.pop())
