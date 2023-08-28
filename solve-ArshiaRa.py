def solve():
    # storing how many numbers in count
    count = 0
    #Looping through all 3-digit numbers
    for num in range(100, 1000):
        #Converting each number to string and then set to check the two conditions
        NumSet = set(str(num))
        # 0 should not be in the combination, and the set length should be two (set doesn't have repetitive elements in it)
        if '0' not in NumSet and len(NumSet) == 2:
            count += 1
    return count
