<?php

$count = 0;
//  We loop over the numbers and check the condition, if true we add one to the counter
foreach (range(111, 999) as $number) {
    if (hasCondition($number)) {
        $count++;
    }
}
echo $count;

//  A function to check conditions, absence of zero digit and presence of two digits in the number
function hasCondition($number): bool
{
    $digits = [];
    foreach (range(1, 3) as $i) {
        $digit = $number % 10;
        $digits[] = $digit;
        $number /= 10;
    }
    $digits = array_unique($digits);
    return !(in_array(0, $digits) or count($digits) !== 2);
}
