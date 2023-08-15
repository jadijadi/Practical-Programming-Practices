<?php
// This code snippet decodes a given string into numbers and characters based on a defined dictionary.
// The dictionary maps words to their corresponding values, including numbers and special characters.
// The goal is to produce a decoded output that represents the input string in a condensed format.

$string = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven";
//spliting string to words
$words = explode(" ", $string);

$dic = ['One' => 1, 'Two' => 2, 'Three' => 3, 'Four' => 4, 'Five' => 5, 'Six' => 6, 'Seven' => 7, 'Eight' => 8, 'Nine' => 9, 'Ten' => 9, 'Zero' => 0, 'Dash' => '-'];

//getting all keys in array
$arr_keys = array_keys($dic);

foreach ($words as $word) {
    if (in_array($word, $arr_keys)) {
        // If the word is in the dictionary, replace it with the corresponding value.
        echo $dic[$word];
    } else {
        // If the word is not in the dictionary, use the first character of the word.
        $firstChar = substr($word, 0, 1);
        echo "$firstChar";
    }
}
