<?php
$str = "T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317 y35 d31 F1 m22 g19 d38 z34 423 l15 329 c12 ;37 19 h13 _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24";
$words = explode(" " , $str);

$answer = [];
foreach ($words as $item){
    $word = "";
    $index = "";
    for($i=0 ; $i < strlen($item) ; $i++){
        if($i == 0){
            $word = $item[0];
        }else {
            $index = $index.$item[$i];
        }
    }
    for($i=0; $i < strlen($item) ; $i++){
        $answer[$index] = $word;
    }
}

ksort($answer);
echo "24 found the answer! jadi :)"."<br>";
echo $string = implode('', $answer);
?>
