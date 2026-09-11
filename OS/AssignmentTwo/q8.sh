#!/usr/bin/bash

echo "Enter the numbers separated by spaces:"
read -r -a arr

l=${#arr[@]}

for ((i=0; i<l-1; i++)); do
    for ((j=0; j<l-i-1; j++)); do
        if (( arr[j] > arr[j+1] )); then
            temp=${arr[j]}
            arr[j]=${arr[j+1]}
            arr[j+1]=$temp
        fi
    done
done

echo "Sorted array: ${arr[*]}"
