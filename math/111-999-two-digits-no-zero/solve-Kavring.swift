let total = (100 ... 999).map { digit in
    let strDigit = String(digit)
    let digitStrList = [String(strDigit.first!), String(strDigit[strDigit.index(strDigit.startIndex, offsetBy: 1)]), String(strDigit.last!)]
    return Set(digitStrList)
}.filter { (s: Set<String>) in
    s.count == 2 && !s.contains("0")
}
.count

print(total)
