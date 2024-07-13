#!/bin/python3

from typing import Dict, List

CIPHER = """T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317 y35 d31 F1 m22
g19 d38 z34 423 l15 329 c12 ;37 19 h13 _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24"""

def main() -> None:
    parts: Dict[int, str] = {int(word[1:]): word[0] for word in CIPHER.split()}
    sorted_parts: List[str] = [part[1] for part in sorted(parts.items())]

    print(''.join(sorted_parts))


if __name__ == '__main__':
    main()

