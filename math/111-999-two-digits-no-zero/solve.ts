//its a simple problem in math combination
// i try to solve this using math, so i need two core `factorial` and `combination` formula function.

function factorial(input: number): number {
  if (input === 0 || input === 1) {
    return 1;
  }

  return input * factorial(input - 1);
}

function combination(base: number, choose: number): number {
  if (choose > base) {
    return 0;
  }

  return factorial(base) / (factorial(choose) * factorial(base - choose));
}

function solve() {
  // i need to choose two number from range 1..9
  // in definition of combination, i need choose 2 from 9;

  const choices = combination(9, 2);

  //but i need numbers with 3-digits. so i need choose a number from other two choices.

  const lastDigitsChoices = combination(2, 1);

  //it has 3 permutation so i need repeat this 3 times (because of 3 digits).

  const result = choices * lastDigitsChoices * 3;

  console.log(`count: ${result}`);
}
