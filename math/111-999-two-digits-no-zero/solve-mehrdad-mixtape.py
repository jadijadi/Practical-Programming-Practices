#!/bin/python3
print([digit for digit in range(112, 999) if len(set(f"{digit}")) == 2 and '0' not in f"{digit}"].__len__())
