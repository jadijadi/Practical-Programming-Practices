#!/bin/bash
#
# Usage: ./solve-ariyonaty.sh

# Define the word-to-number mapping array
declare -A mapping=(
  ["Zero"]="0"
  ["One"]="1"
  ["Two"]="2"
  ["Three"]="3"
  ["Four"]="4"
  ["Five"]="5"
  ["Six"]="6"
  ["Seven"]="7"
  ["Eight"]="8"
  ["Nine"]="9"
  ["Dash"]="-"
)

# The encoded message
message="Whiskey Hotel Four Tango Dash Alpha Romeo Three Dash Yankee Oscar Uniform Dash Sierra One November Kilo India November Golf Dash Four Bravo Zero Uniform Seven"

# Split the message into words
words=($message)

# Decode and print the message
decoded_message=""
for word in "${words[@]}"; do
  decoded_word="${mapping[$word]}"
  if [ -n "$decoded_word" ]; then
    decoded_message+="$decoded_word"
  else
    decoded_message+="${word:0:1}"
  fi
done

echo "$decoded_message"
