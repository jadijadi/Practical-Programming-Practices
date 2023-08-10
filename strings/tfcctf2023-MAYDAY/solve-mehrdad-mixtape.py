#!/bin/python3

from typing import List, Dict

CIPHER = """Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar 
Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero
Uniform Seven"""

answer = "TFCCTF{@}"

words: Dict[str, str] = {
    'Dash': '-'
}

numbers: Dict[str, str] = {
    'One': '1',
    'Two': '2',
    'Three': '3',
    'Four': '4',
    'Five': '5',
    'Six': '6',
    'Seven': '7',
    'Eight': '8',
    'Nine': '9',
    'Zero': '0',
}

def main() -> None:
    parts: List[str] = CIPHER.split()

    for i, word in enumerate(parts):
        if word in numbers.keys():
            parts[i] = numbers[word]
        if word in words.keys():
            parts[i] = words[word]

    print(answer.replace('@', ''.join([word[0] for word in parts])))


if __name__ == '__main__':
    main()
