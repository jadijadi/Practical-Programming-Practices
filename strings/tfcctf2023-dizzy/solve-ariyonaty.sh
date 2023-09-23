#!/bin/bash
#
# Usage: ./solve-ariyonaty.sh

# Encoded text
message="T4 l16 _36 510 _27 s26 _11 320 414 {6 }39 C2 T0 m28 317 y35 d31 F1 m22 g19 d38 z34 423 l15 329 c12 ;37 19 h13 _30 F5 t7 C3 325 z33 _21 h8 n18 132 k24"

# Split the encoded message into segments
segments=($message)

# Create indexed array to store decoded msg
declare -a decoded_message

# Iterate through each segment and decode the message
for segment in ${segments[@]}; do
    # Extract the character and index from the segment
    char=${segment:0:1}
    index=${segment:1}

    # Add char to associated index
    decoded_message[$index]=$char
done

# Construct the final decoded message
answer=""
for char in ${decoded_message[@]}; do
    answer+=$char
done

# Print the decoded message
echo $answer
