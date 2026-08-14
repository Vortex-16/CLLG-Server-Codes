#!/usr/bin/bash

echo "Enter choice: 1 = To Display the No. Of Current Users On The Server, 2 = Display Some Disred No. Of Lines from Top Of a File, 3 = Update Access Time Of A Given file to current time"
read -r ch

case "$ch" in

    1)
        printf "The List Of User Active Right Now On The Server Is:  "
	who
        printf "The above list are the current Users Live On The Server"
        ;;

    2)
        printf "Enter the file name to Print top of a file "
        read -r p 
        head -1 "$p"
        ;;

    3)  printf "Enter the file name To update The Access Time To Current: "
        read -r p
        touch -a "$p"
        stat "$p"
        ;;
    *)
        echo "Invalid choice"
        ;;
esac
