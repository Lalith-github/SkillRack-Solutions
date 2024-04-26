# Read the input strings S1 and S2
S1 = input().strip()
S2 = input().strip()

# Find the common part
common_part = ""
for i in range(min(len(S1), len(S2))):
    if S1[-(i + 1):] == S2[:i + 1]:
        common_part = S1[-(i + 1):]
        break

# Print the common part
print(common_part)
