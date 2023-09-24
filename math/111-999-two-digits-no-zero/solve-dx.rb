nmb = 0

# Iterate through all numbers between 111 and 999
(111..999).each do |number|
  digits = number.to_s.chars.map(&:to_i)

  # Count the unique digits
  unique_digits = digits.uniq

  # Check if there are exactly two unique digits and no zero
  if unique_digits.length == 2 && !unique_digits.include?(0)
    nmb += 1
  end
end

puts nmb
