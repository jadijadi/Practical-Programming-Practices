// how many 3 digit numbers with 2 digits and no zero are there Challenge in Client side - Javascript

// Declare the counter to findout the answer
let counter = 0;

// Loop from firs 3 digits number until last ( 100 to 999 ) to count similar digits

for (let i = 100; i <= 999; i++) {
  if (hasConditions(i)) counter++
}

// Fisrst declare a Set 
// Then we make an array of above i loop 
// Then Add to set
// Then check the conditions and return boolean

function hasConditions(i) {
  const digitsSet = new Set();
  i.toString().split("").map(j => { digitsSet.add(j) })
  return !(digitsSet.has("0") || digitsSet.size !== 2)
}

// We logged the answer
console.log({ counter })

// Enjoy coding ;)