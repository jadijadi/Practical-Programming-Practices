cnt=0
# scan yekan, dahgan, sadgan from 1 to 9, generate all numbers
for sadgan in range(1,10):
    for dahgan in range(1,10):
        for yekan in range(1,10):
            if ((yekan==dahgan) or (yekan==sadgan) or (dahgan==sadgan)) and not(yekan==dahgan==sadgan):
#                print(sadgan,dahgan,yekan)
                cnt=cnt+1
print(cnt)
