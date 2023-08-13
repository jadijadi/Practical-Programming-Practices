result = 0

for i in 111..999
  num = i.to_s
  if ! num.include? '0'
    for digit in num.split ''
      digit_count = num.count digit
      if digit_count == 2
        result += 1
        break
      end
    end
  end
end

puts result
