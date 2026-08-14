#!/usr/bin/bash

printf "Enter the File Name: "
read f

printf "Enter Starting Line No.: "
read l

printf "Enter Number of Lines to Display: "
read l2

sed -n "${l},$((l + l2 - 1))p" "$f"
