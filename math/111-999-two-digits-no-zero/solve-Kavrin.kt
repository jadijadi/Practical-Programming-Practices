fun main() {
    (100..999)
        .count { digit ->
            digit.toString()
                .split("")
                .filter { it.isNotBlank()}
                .toSet()
                .let { 
                    it.size == 2 && !it.contains("0")
                }
        }
        .also(::println)
}