<?php
//  Input string
$string = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven";

//  Convert a string to an array of words
$words = explode(" ", $string);

//  Define an array of specific words and translate them
$specialWords = [
    "One" => 1, "Two" => 2, "Three" => 3, "Four" => 4,
    "Five" => 5, "Six" => 6, "Seven" => 7, "Eight" => 8,
    "Nine" => 9, "Zero" => 0, "Dash" => '-'
];

//  Loop over the words and check if they are special or not and echo
foreach ($words as $w) {
    echo array_key_exists($w, $specialWords) ?  $specialWords[$w] : $w[0];
}
