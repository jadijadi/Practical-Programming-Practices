text = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven"

list = text.split(' ')

def num_check(num):
    if num == "Zero":
        return 0
    elif num == "One":
        return 1
    elif num == "Two":
        return 2
    elif num == "Three":
        return 3
    elif num == "Four":
        return 4
    elif num == "Five":
        return 5
    elif num == "Six":
        return 6
    elif num == "Seven":
        return 7
    elif num == "Eight":
        return 8
    elif num == "Nine":
        return 9
    elif num == "Dash":
        return '-'
    else:
        return num[0]

for i in list:
    print(num_check(i), end='')