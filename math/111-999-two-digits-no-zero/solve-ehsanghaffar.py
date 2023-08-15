# This function checks if a number has only two different digits.
def has_two_unique_digits(number):
    # Convert the number to a set of its digits.
    digit_set = set(str(number))
    
    # If the number has exactly 2 unique digits, return True. Otherwise, return False.
    return len(digit_set) == 2

# This function counts how many numbers meet the conditions.
def count_numbers_with_two_unique_digits():
    # Start with zero, we haven't found any numbers yet.
    count = 0
    
    # Go through all numbers from 100 to 999.
    for num in range(100, 1000):
        # Check if the number doesn't have '0' in it and has only two unique digits.
        if '0' not in str(num) and has_two_unique_digits(num):
            # If both conditions are met, increase the count by 1.
            count += 1
    
    # After checking all numbers, return the final count.
    return count

# Call the counting function and save the result in the 'counter' variable.
counter = count_numbers_with_two_unique_digits()

# Display the total count of numbers meeting the conditions.
print(counter)
