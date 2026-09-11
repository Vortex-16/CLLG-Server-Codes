#!/bin/bash

echo "Enter first number:"
read a

echo "Enter second number:"
read b

if [ $a -gt $b ]
then
    small=$b
else
    small=$a
fi

for ((i=1; i<=small; i++))
do
    if [ $((a % i)) -eq 0 ] && [ $((b % i)) -eq 0 ]
    then
        gcd=$i
    fi
done

echo "GCD of $a and $b is: $gcd"
