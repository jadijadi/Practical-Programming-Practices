s = 'Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven'

char = {
  'One' => 1,
  'Two' => 2,
  'Three' => 3,
  'Four' => 4,
  'Five' => 5,
  'Six' => 6,
  'Seven' => 7,
  'Eight' => 8,
  'Nein' => 9,
  'Zero' => 0,
  'Dash' => '-'
}

p = []

s.split(' ').each do |i|
  if !char.key?(i)
    p << i[0]
  else
    p << char[i].to_s
  end
end

puts p.join('')
