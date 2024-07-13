function checkNum(num: number): boolean {
  //* split each number into an one digit array
  const splited = String(num).split("").map(Number);

  let hasZero: boolean = false;

  //* check if the number have zero init
  splited.map((item) => {
    if (item === 0) {
      hasZero = true;
    }
  });

  //* return false if the number have digit zero
  if (hasZero === false) {
    //* return false if the all digits of the number have the same value like 222, 333
    if (num % 111 === 0) {
      return false;
      //* return true if any two digits are have the same value like 121, 855
    } else if (
      splited[0] === splited[1] ||
      splited[0] === splited[2] ||
      splited[1] === splited[2]
    ) {
      return true;
    } else {
      //* return false for other normal numbers
      return false;
    }
  } else {
    return false;
  }
}

let count = 0;

//* count from 100 to 999 and check every number with checkNum function
for (let i = 100; i < 999; i++) {
  //* count every time that the checkNum returns true
  if (checkNum(i)) {
    count++;
  }
}
console.log(count);
