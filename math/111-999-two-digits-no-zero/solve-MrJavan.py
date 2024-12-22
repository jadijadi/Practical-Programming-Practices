numbers = range(100, 1000)

total = 0
for number in numbers:
    count = 0
    digits = set()
    for i in str(number):
        digits.add(i)
    if len(digits) == 2 and '0' not in digits:
        total += 1
        
print(total)