#!/bin/bash

echo "Enter a 3-digit number:"
read num

a=${num:0:1}
b=${num:1:1}
c=${num:2:1}

for i in $a $b $c
do
    for j in $a $b $c
    do
        for k in $a $b $c
        do
            if [ "$i" != "$j" ] && [ "$i" != "$k" ] && [ "$j" != "$k" ]
            then
                echo "$i$j$k"
            fi
        done
    done
done
