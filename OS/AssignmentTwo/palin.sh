#!/usr/bin/bash

printf 'Enter a string: '
read str

rev=""
for (( i = 0; i < ${#str}; i++)) ; do
	rev="${str:i:1}$rev"
done

if [ $str == $rev ]; then
	echo "Palindrome"
else
	echo "Not palindrome"
fi
