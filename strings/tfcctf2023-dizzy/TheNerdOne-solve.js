(function findCode() {
    const code = "T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317 y35 d31 F1 m22 g19 d38 z34 423 l15 329 c12 ;37 19 h13 _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24"
    const splitedCode = code.split(" ")
    const indexes = []
    const chars = []
    const str = []
    splitedCode.forEach((code) => {
        let char = code.toString()[0]
        indexes.push(code.split("").splice(1, code.length).join(""))
        chars.push(char)
    })
    for (let i = 0; i < indexes.length; i++) {
        str[indexes[i]] = chars[i]

    }
    console.log('splitedCode', splitedCode)
    console.log('indexes', indexes)
    console.log('chars', chars)
    console.log('str', str.join(""))

})()
