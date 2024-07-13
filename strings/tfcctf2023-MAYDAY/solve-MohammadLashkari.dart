String mayday(String text) {
  final splitedText = text.split(' ');
  final answer = [];

  for (var word in splitedText) {
    final parsedWord = convet(word);
    answer.add(parsedWord);
  }
  return answer.join();
}

String convet(String word) {
  return switch (word) {
    'Zero' => '0',
    'One' => '1',
    'Two' => '2',
    'Three' => '3',
    'Four' => '4',
    'Five' => '5',
    'Six' => '6',
    'Seven' => '7',
    'Eight' => '8',
    'Nine' => '9',
    'Ten' => '10',
    'Dash' => '-',
    _ => word[0]
  };
}

void main(List<String> args) {
  const text =
      'Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven';

  print(mayday(text));
}
