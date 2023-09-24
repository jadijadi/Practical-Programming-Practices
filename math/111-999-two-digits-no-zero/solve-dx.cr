# Use a range of numbers from 111 to 999 and count the elements that meet the condition
nmb = (111..999).count do |number|
  digits = number.to_s.chars.map { |char| char.to_i }
  unique_digits = digits.uniq

  unique_digits.size == 2 && !unique_digits.includes?(0)
end

puts nmb
