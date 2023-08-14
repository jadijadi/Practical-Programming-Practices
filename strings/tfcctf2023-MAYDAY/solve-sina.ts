const text =
  "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven";

//* Define an object for gobbledygook special words
const specials: Record<string, string> = {
  One: "1",
  Two: "2",
  Three: "3",
  Four: "4",
  Five: "5",
  Six: "6",
  Seven: "7",
  Eight: "8",
  Nine: "9",
  Zero: "0",
  Dash: "-",
};

//* Split the string into an array of words
const Words: string[] = text.split(" ");

let firstLetters: string[] = [];

//* Loop through each word in the array
for (let i = 0; i < Words.length; i++) {
  //* Replace special words with their values
  specials[Words[i]] && (Words[i] = specials[Words[i]]);

  //* Add the first letter of the word to the array
  firstLetters.push(Words[i].charAt(0));
}

console.log(firstLetters.join(""));
