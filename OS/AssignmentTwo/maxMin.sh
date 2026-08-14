#!/usr/bin/bash

echo "Enter numbers:"
read -a arr

max=${arr[0]}
min=${arr[0]}

for n in "${arr[@]}"
do
    if [ "$n" -gt "$max" ]; then
        max=$n
    fi

    if [ "$n" -lt "$min" ]; then
        min=$n
    fi
done

echo "Maximum = $max"
echo "Minimum = $min"
