#!/usr/bin/python3

counter = 0

# set of 999 is just a {"9"} so it would be better the range ends to 999
# and 0 is not acceptable and 111 is just {"1"} so it would be better range start from 112

for num in range(112,999):

    # 1. num is integer and its needed to be a string so use str()
    # 2. for being a 3-digits number of 2 digits combination use set()
    # 3. if lenght of the set of string of num is 2 the first condition is met 
    # 4. the second condition is the digitis must not be a Zero (0)

    if len(set(str(num))) == 2 and "0" not in set(str(num)):
        counter += 1

print(counter)
