void main(List<String> args) {
  var counter = 0;
  for (var number = 100; number < 1000; number++) {
    final digits = number.toString().split('');
    if (digits.toSet().length == 2 && !digits.contains('0')) {
      counter++;
    }
  }
  print(counter);
}
