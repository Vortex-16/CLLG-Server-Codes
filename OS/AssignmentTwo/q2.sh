#!/usr/bin/bash

printf "Enter a string: "
read str

str=${str,,}

revstr=$(echo "$str" | rev)

if [ "$str" = "$revstr" ]; then
    echo "Actually, it's a Palindrome: Good Input"
else
    echo "It is not a Palindrome"
fi
