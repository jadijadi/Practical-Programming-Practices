// The input string containing a series of words
let str = 'Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven';


// Split the string into an array of words using a space as the separator
let words = str.split(' ');


// Define a dictionary (object) for special word replacements
let specials = {
    "One": 1, "Two": 2, "Three": 3, "Four": 4,
    "Five": 5, "Six": 6, "Seven": 7, "Eight": 8,
    "Nine": 9, "Zero": 0, "Dash": '-'
};


//create Array because better display answer
let answer = [];

// Loop through each word in the array
for (let w of words) {
       // Check if the word exists in the dictionary, if yes, use its value as replacement
      // Otherwise, use the first character of the word as a default replacement
    let replacement = specials[w] !== undefined ? specials[w] : w[0];

    answer.push(replacement);
    
}   

console.log(answer.join(''));