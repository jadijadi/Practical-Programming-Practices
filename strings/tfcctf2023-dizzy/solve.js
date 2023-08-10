let str = "T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317 y35 d31 F1 m22 g19 d38 z34 423 l15 329 c12 ;37 19 h13 _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24"
let words = str.split(" ");

let answer = []
words.forEach((item) => {
    let index = ""
    let word = ""
    for(let i = 0 ; i < item.length ; i++ ){
        if(i == 0){
            word = item[i]
        }else {
            index += item[i]
        }
    }

    for(let i = 0 ; i < item.length ; i++){
        answer[index] = word
    }

})

console.log("24 found the answer! jadi :) \n")

console.log(answer);
