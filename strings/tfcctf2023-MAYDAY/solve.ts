const string: string =
  "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven";

const wordsToArray: string[] = string.split(" ");

interface SpecialsWord {
  One: number;
  Two: number;
  Three: number;
  Four: number;
  Five: number;
  Six: number;
  Seven: number;
  Eight: number;
  Nine: number;
  Zero: number;
  Dash: string;
}

const specialsWord: SpecialsWord = {
  One: 1,
  Two: 2,
  Three: 3,
  Four: 4,
  Five: 5,
  Six: 6,
  Seven: 7,
  Eight: 8,
  Nine: 9,
  Zero: 0,
  Dash: "-",
};

let answer: string = "";

wordsToArray.forEach((word) => {
  answer += specialsWord[word] !== undefined ? specialsWord[word] : word[0];
});

console.log(answer);
