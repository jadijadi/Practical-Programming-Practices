# checking 3-digit numbers that haven't got 0 in digits and have only 2 different digits from 1-9.
def check(number):
    digits = set()
    # add number digits to a set
    while number > 0:
        digits.add(number % 10)
        number //= 10
    # if has conditions return true 
    return (not 0 in digits) and (len(digits) == 2)

# counting the 3-digit numbers that has conditions
count = 0
for number in range(100, 1000):
    if check(number):
        count += 1
print(count)