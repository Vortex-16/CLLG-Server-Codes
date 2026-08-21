#!/bin/bash

while true
do
    echo "=============================="
    echo "        TEACHERS MENU"
    echo "=============================="
    echo "1. Show first 3 lines"
    echo "2. Explain: ls -t | tail -1"
    echo "3. Show first 100 characters"
    echo "4. Show last 3 lines"
    echo "5. Show line 5 onwards"
    echo "6. Show first 5 lines and store in shortlist"
    echo "7. Show name and city from shortlist"
    echo "8. Exit"
    echo "=============================="

    read -p "Enter your choice: " choice

    case $choice in

        1)
            head -3 teachers
            ;;

        2)
            echo "ls -t lists files according to modification time,"
            echo "with the newest file first."
            echo "tail -1 displays the last entry,"
            echo "so this shows the oldest entry."
            ;;

        3)
            head -c 100 teachers
            echo
            ;;

        4)
            tail -3 teachers
            ;;

        5)
            tail -n +5 teachers
            ;;

        6)
            head -5 teachers | tee shortlist
            ;;

        7)
            cut -d'|' -f2,4 shortlist
            ;;

        8)
            echo "Exiting..."
            exit
            ;;

        *)
            echo "Invalid choice!"
            ;;

    esac

    echo
    read -p "Press Enter to continue..."
    clear
done
