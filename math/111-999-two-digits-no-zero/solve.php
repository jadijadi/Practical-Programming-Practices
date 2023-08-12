<?php

$count = 0;

foreach (range(111, 999) as $number) {
    if (hasCondition($number)) {
        $count++;
    }
}

echo $count;


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
