# www.github.com/parham-dev27


def check(num: int) -> bool:
    # Separate digits, add them to a set
    # Note: Sets can not contain duplicate items
    lnum: set[str] = {i for i in str(num)}

    # Checks if the number contains a 0, because 0 is not a valid choice
    # Checks if length of number is equal to 2
    if "0" not in lnum and len(lnum) == 2:
        return True

    return False


counter: int = 0

for i in range(100, 1000):
    # Goes through all the 3 digit numbers
    # If the output of the function is true, then adds one to the counter
    if check(i):
        counter += 1


print(counter)
