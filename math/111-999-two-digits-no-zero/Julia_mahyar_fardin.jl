counter = 0
for number in 112:999
    temp_list = Set(digits(number))
    ((0 ∉ temp_list) && (length(temp_list) == 2)) && (counter += 1)
end
counter