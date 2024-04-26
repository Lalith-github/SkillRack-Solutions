S = input().strip()

# Find the index of the alphabet character indicating the operation
op_index = -1
for i, char in enumerate(S):
    if not char.isdigit() and char != '-':
        op_index = i
        break

# Extract the two integers and the operation
num1 = int(S[:op_index])
num2 = int(S[op_index+1:])
operation = S[op_index]

# Perform the operation based on the given alphabet
if operation in ['A', 'a']:
    result = num1 + num2
elif operation in ['S', 's']:
    result = num1 - num2
elif operation in ['M', 'm']:
    result = num1 * num2
elif operation in ['D', 'd']:
    result = num1 // num2  # Use integer division to ignore any floating point values

print(result)
