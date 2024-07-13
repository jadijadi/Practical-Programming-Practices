let str =
    "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven"
let numbers = ["dash" : "_", "zero" : "0", "one" : "1", "two" : "2", "three" : "3", "four" : "4", "five" : "5", "six" : "6", "seven" : "7", "eight" : "8", "nine" : "9"]

let flag = str.split(separator: " ")
    .map { word in
        numbers[String(word).lowercased()] ?? String(word.first!)
    }
    .joined()
print(flag)
