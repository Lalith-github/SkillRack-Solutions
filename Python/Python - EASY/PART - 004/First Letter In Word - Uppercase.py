string = input().strip()

# Split the input string into words based on single or multiple spaces
words = string.split(' ')

# Initialize an empty list to store the processed words
processed_words = []

# Process each word
for word in words:
    if word.strip():  # Check if the word is not just whitespace
        processed_word = word[0].upper() + word[1:]  # Capitalize first letter
        processed_words.append(processed_word)
    else:
        processed_words.append('')  # Preserve empty spaces

# Join the processed words back into a single string, preserving the original whitespace
result = ' '.join(processed_words)

# Print the result
print(result)
