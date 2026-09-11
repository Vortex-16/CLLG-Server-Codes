#!/usr/bin/bash

echo "Enter choice:"
echo "1 = Display the content of the whole file"
echo "2 = Display information of a student using Roll Number"
echo "3 = Delete a student using Roll Number"
echo "4 = Add a new student entry"
echo "5 = Update a student entry using Roll Number"

read -r ch

case "$ch" in

    1)
        printf "Enter the file name: "
        read -r p

        if [ -f "$p" ]; then
            echo "Contents of the file:"
            cat "$p"
        else
            echo "File does not exist."
        fi
        ;;

    2)
        printf "Enter the file name: "
        read -r p

        if [ ! -f "$p" ]; then
            echo "File does not exist."
            exit 1
        fi

        printf "Enter Roll Number: "
        read -r roll

        echo "Student Information:"

        result=$(awk -v r="$roll" '$1 == r {print}' "$p")

        if [ -n "$result" ]; then
            echo "$result"
        else
            echo "Student with Roll Number $roll not found."
        fi
        ;;

    3)
        printf "Enter the file name: "
        read -r p

        if [ ! -f "$p" ]; then
            echo "File does not exist."
            exit 1
        fi

        printf "Enter Roll Number to delete: "
        read -r roll

        if grep -q "^$roll[[:space:]]" "$p"; then
            grep -v "^$roll[[:space:]]" "$p" > temp.txt
            mv temp.txt "$p"

            echo "Student with Roll Number $roll deleted successfully."
        else
            echo "Student with Roll Number $roll not found."
        fi
        ;;

    4)
        printf "Enter the file name: "
        read -r p

        printf "Enter Roll Number: "
        read -r roll

        if [ -f "$p" ] && grep -q "^$roll[[:space:]]" "$p"; then
            echo "A student with Roll Number $roll already exists."
            exit 1
        fi

        printf "Enter Student Name: "
        read -r name

        printf "Enter Age: "
        read -r age

        printf "Enter Department: "
        read -r department

        printf "Enter Marks: "
        read -r marks

        echo "$roll $name $age $department $marks" >> "$p"

        echo "Student added successfully."
        ;;

    5)
        printf "Enter the file name: "
        read -r p

        if [ ! -f "$p" ]; then
            echo "File does not exist."
            exit 1
        fi

        printf "Enter Roll Number to update: "
        read -r roll

        if ! grep -q "^$roll[[:space:]]" "$p"; then
            echo "Student with Roll Number $roll not found."
            exit 1
        fi

        printf "Enter New Student Name: "
        read -r name

        printf "Enter New Age: "
        read -r age

        printf "Enter New Department: "
        read -r department

        printf "Enter New Marks: "
        read -r marks

        awk -v r="$roll" \
            -v n="$name" \
            -v a="$age" \
            -v d="$department" \
            -v m="$marks" \
            '$1 == r {print r, n, a, d, m; next} {print}' "$p" > temp.txt

        mv temp.txt "$p"

        echo "Student record updated successfully."
        ;;

    *)
        echo "Invalid choice."
        echo "Please enter a number from 1 to 5."
        ;;

esac
