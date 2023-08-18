string = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven"

words = string.split

specials = {
  'One' => 1,
  'Two' => 2,
  'Three' => 3,
  'Four' => 4,
  'Five'=> 5,
  'Six' => 6,
  'Seven' => 7,
  'Eight' => 8,
  'Nine' => 9,
  'Zero' => 0,
  'Dash' => '_',
}

for word in words
  if specials.has_key?(word)
    print specials[word]
  else
    print word[0]
  end
end
