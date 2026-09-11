#!/bin/bash

echo "Enter file name:"
read file

while true
do
    echo "1. Display whole file"
    echo "2. Display student by Roll Number"
    echo "3. Delete student by Roll Number"
    echo "4. Add a new student"
    echo "5. Update student by Roll Number"
    echo "6. Exit"

    echo "Enter your choice:"
    read ch

    case $ch in

    1)
        echo "Student Records:"
        cat $file
        ;;

    2)
        echo "Enter Roll Number:"
        read roll

        grep "^$roll " $file
        ;;

    3)
        echo "Enter Roll Number to delete:"
        read roll

        sed -i "/^$roll /d" $file

        echo "Student deleted."
        ;;

    4)
        echo "Enter Roll Number:"
        read roll

        echo "Enter Name:"
        read name

        echo "Enter City:"
        read city

        echo "$roll $name $city" >> $file

        sort -n -o $file $file

        echo "Student added."
        ;;

    5)
        echo "Enter Roll Number to update:"
        read roll

        echo "Enter New Name:"
        read name

        echo "Enter New City:"
        read city

        sed -i "s/^$roll .*/$roll $name $city/" $file

        sort -n -o $file $file

        echo "Student updated."
        ;;

    6)
        echo "Exiting program..."
        exit
        ;;

    *)
        echo "Invalid choice. Please enter 1-6."
        ;;

    esac

done
