string = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven"

# A dictionary to store special words signs and numbers.
special_words: dict = {
    "One": "1",
    "Two": "2",
    "Three": "3",
    "Four": "4",
    "Five": "5",
    "Six": "6",
    "Seven": "7",
    "Eight": "8",
    "Nine": "9",
    "Zero": "0",
    "Dash": "-",
}

# Define an empty list to write messages.
message_in_list_format: list = []

# Using the for loop to move through the list created by separating the string by space (word by word).
for word in string.split():
    # If the word is one of the keys of the special_words dictionary.
    if word in special_words:
        # The value of the specified key will be appended to message_in_list_format.
        message_in_list_format.append(special_words[word])
    else:
        # Otherwise, the first letter of the word will be appended to message_in_list_format.
        message_in_list_format.append(word[0])

# Finally, using the join method, the chars of the message_in_list_format will be attached as a string and printed.
print(''.join(message_in_list_format))