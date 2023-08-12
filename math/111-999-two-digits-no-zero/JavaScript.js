//  i chose to solve this with string metod in js 

//  make counter 
let counter = 0


const giveMeDigits = number => {
  //  creating set and turn my number to string
  
  let mynumb = number.toString()
  const mySet1 = new Set()

  //  loop on number and adding each elemet on it to my set 
  for (let i = 0; i < mynumb.length; i++) {
    mySet1.add(mynumb[i])
  }

  // if size of my set equal to 2 mean => my number like this 122 
  // making with only two number
  return mySet1.size == 2 ? true : false
}


// making loop for testing all number 

for (let i = 100; i <= 999; i++) {
  
  //  in this line i check if i {my number from 100 to 999} have 0 inside that pass that i 
  if (i.toString().includes(0) == false) {
    giveMeDigits(i) == true && (counter += 1)
  }
}

console.log(counter)
