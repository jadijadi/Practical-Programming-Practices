string = "T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317 y35 d31 F1 m22 g19 d38 z34 423 l15 329 c12 ;37 19 h13 _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24"

sorted_string_by_number_in_list_format: list = sorted(
    # Split string into a list with " ".
    string.split(),
    # Using key parameter and lambda to sorting string with numbers after first char.
    # Example: T4 l16 _36 510 --> T4 510 l16 _36
    key=lambda element: int(element[1:])
)

# Using map function to move between elements of sorted_string_by_number_in_list_format and get first char.
decrypted_message = map(
    # Using lambda to append first char of sorted_string_by_number_in_list_format values into decrypted_message.
    lambda element: element[0],
    # The sorted string, based on the number after first char in the list format, that was created above.
    sorted_string_by_number_in_list_format
)

# Using the join method to paste the characters of the decoded message list and finally print it.
print(''.join(decrypted_message))