const code = "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven"
const numbers = [
    'zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine',
]
const splittedCode = code.toLowerCase().split(" ")
let answer = []
for (let i = 0; i < splittedCode.length; i++) {
    if (numbers.includes(splittedCode[i])) {
        answer.push(numbers.indexOf(splittedCode[i]))
    } else if (splittedCode[i] === 'dash') {
        answer.push('-')
    } else {
        answer.push(splittedCode[i].split("")[0])
    }
}

console.log(answer.join(""))
