let counter = 0

const checkDigit = (digit) => {
    const digitArray = digit.toString().split('')
    const digits = [...new Set(digitArray)]

    if (digits.length === 2 && !digits.includes("0")) {
        counter++
    }
}

// from 111
// to 999

for (let i = 111; i <= 999; i++) {
    checkDigit(i)
}

console.log(counter)