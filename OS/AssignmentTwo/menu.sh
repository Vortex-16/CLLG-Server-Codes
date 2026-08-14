#!/usr/bin/bash

echo "Enter choice: 1 = merge files, 2 = search pattern"
read -r ch

case "$ch" in

    1)
        printf "Enter 2 file names and Output File Name: "
        read -r f1 f2 f3
        cat "$f1" "$f2" > "$f3"
        printf "Congratulations! You are done with merging files. Thank you for using my program.\n"
        ;;

    2)
        printf "Enter the pattern to search from the file: "
        read -r p f1
        grep "$p" "$f1"
        ;;

    *)
        echo "Invalid choice"
        ;;
esac
