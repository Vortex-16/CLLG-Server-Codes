#!/usr/bin/bash

printf 'Enter a string: '
read str
str=${str,,}
rev=""

for (( i = 0; i < ${#str}; i++)) ; do
	rev="${str:i:1}$rev"
done

if [ $str == $rev ]; then
	echo "Actully It's A Palindrome: Good Input"
else
	echo "Whenever You Enter Invalid Input It Will be Not palindrome"
fi
