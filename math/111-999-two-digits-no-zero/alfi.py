number = 111
mynumbers = []

while number <= 999:
    Snumber = str(number)  # Convert the number to a string
    tmp = []
    
    # Loop through each digit in the number
    for digit in Snumber:
        tmp.append(int(digit))  # Append each digit (as an integer) to tmp
    
    # Check for exactly two identical digits and no zeros
    if tmp.count(tmp[0]) == 2 or tmp.count(tmp[1]) == 2 or tmp.count(tmp[2]) == 2:
        if 0 not in tmp:  # Ensure no zeros are present
            mynumbers.append(number)  # Append the number to mynumbers
    
    number += 1  # Increment the number

# Print the result
print("Numbers between 111 and 999 with exactly two identical digits and no zeros:")
print(mynumbers)
