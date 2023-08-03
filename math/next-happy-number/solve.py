# My solution
def nextHappy(N):
    next_happy_number = N + 1
    number_list = []
    def finder(num):
        str_num = str(num)
        tmp = 0
        for i in str_num:
            tmp += ((int(i))*(int(i)))
        if tmp in number_list:
            return nextHappy(next_happy_number)
        ''' A happy number eventually reaches such numbers: 1,
            10, 100, 1000, ..., which only the sum of the digits of
            such numbers becomes 1.'''
        digit_sum = sum(int(digit_char) for digit_char in str(tmp))
        if digit_sum == 1:
            return next_happy_number
        else:
            number_list.append(tmp)
            return finder(tmp)
    return finder(next_happy_number)
    
print(nextHappy(10))







# geeksforgeeks.org solution
'''
def nextHappy(N):
    def isHappy(n):
        print("check for", n)
        seen = set()
        while n not in seen:
            seen.add(n)
            n = sum(int(digit)**2 for digit in str(n))
            print(n)
            if n == 1:
                return True
        return False

    while True:
        if isHappy(N+1):
            return N+1
        N += 1
'''