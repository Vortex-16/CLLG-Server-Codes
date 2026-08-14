#!/usr/bin/bash

echo "Enter choice: 1 = merge files, 2 = search pattern ::"
read ch

case $ch in

	1)
		printf "Enter 2 file names and an : "
		read f1 f2
		

	;;

	2) echo 2 ;;
	*) echo Invalid ;;
esac
