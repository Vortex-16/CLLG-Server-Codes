#!/bin/bash

echo "Enter file name:"
read file

echo
echo "1. Display whole file"
echo "2. Display student by Roll Number"
echo "3. Delete student by Roll Number"
echo "4. Add a new student"
echo "5. Update student by Roll Number"
echo

echo "Enter your choice:"
read ch

case $ch in

1)
    # Display whole file
    cat $file
    ;;

2)
    # Display student using Roll Number
    echo "Enter Roll Number:"
    read roll

    grep "^$roll " $file
    ;;

3)
    # Delete student using Roll Number
    echo "Enter Roll Number to delete:"
    read roll

    sed -i "/^$roll /d" $file

    echo "Student deleted."
    ;;

4)
    # Add a new student
    echo "Enter Roll Number:"
    read roll

    echo "Enter Name:"
    read name

    echo "Enter City:"
    read city

    echo "$roll $name $city" >> $file

    # Sort file according to Roll Number
    sort -n -o $file $file

    echo "Student added."
    ;;

5)
    # Update student using Roll Number
    echo "Enter Roll Number to update:"
    read roll

    echo "Enter New Name:"
    read name

    echo "Enter New City:"
    read city

    sed -i "s/^$roll .*/$roll $name $city/" $file

    # Sort file again
    sort -n -o $file $file

    echo "Student updated."
    ;;

*)
    echo "Invalid choice."
    ;;

esac
