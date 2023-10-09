function hasConditions(num) {
    const digitSet = new Set(); // creating a set
    for (i = 0; i < 3; i++) {
      let digit = num % 10;
      num = Math.floor(num / 10); // finding numbers
      digitSet.add(String(digit)); // adding str nums to a set
    }
    console.log(digitSet.size);
    if (digitSet.size !== 2 || digitSet.has("0")) {
      // check if we have 0 in our set and our set length
      return false;
    }
    return true;
  }
  

function main() {
  let count = 0;
  for (let i = 112; i < 1000; i++) {
    if (hasConditions(i)) {
      count++;
    }
  }
  console.log(count);
}


main(); // calling the main so we can see the result
