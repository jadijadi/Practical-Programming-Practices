def has_conditions(num):
    result = set() # creating a set
    for _ in range(3):
        digit = num % 10
        num = num // 10
        result.add(digit) # adding digits to set
    if 0 not in result and len(result) == 2: # check if we have 0 in our set and our set length
        return True
    return False
        
def main():
    count = 0
    for i in range(112, 1000):
        if has_conditions(i):
            count += 1
    print(count)
        