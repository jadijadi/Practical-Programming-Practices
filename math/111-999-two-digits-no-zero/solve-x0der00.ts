function count3DigitNumbers(): number {
    let count = 0;

    // Loop through all possible pairs of digits (from 1 to 9)
    for (let i = 1; i <= 9; i++) {
        for (let j = 1; j <= 9; j++) {
            if (i !== j) {
                count++; // Increment the count for each valid pair of different digits
            }
        }
    }

    // Each pair of digits can be arranged in [3] ways: XY, YX, XXY (X repeated twice)
    return count * 3; // Multiply the count by [3] to get the total number of 3-digit numbers
}

console.log(count3DigitNumbers()); // result = 6 * 6 * 6 :D
