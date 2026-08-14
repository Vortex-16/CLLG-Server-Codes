#!/usr/bin/bash

echo "Enter numbers:"
read -a arr

echo "Numbers in descending order:"

printf "%s\n" "${arr[@]}" | sort -nr
