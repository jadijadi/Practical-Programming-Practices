val str =
    "Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven"
val numbers = mapOf("dash" to "_", "zero" to "0", "one" to "1", "two" to "2", "three" to "3", "four" to "4", "five" to "5", "six" to "6", "seven" to "7", "eight" to "8", "nine" to "9")

fun main() {
    str.split(" ")
        .joinToString(separator = "") {
            numbers[it.lowercase()] ?: it.first().toString()
        }
        .also(::println)
}
