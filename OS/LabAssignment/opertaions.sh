

#!/bin/bash

while true
do
    clear

    echo "========================================"
    echo "       TEACHERS FILE MENU"
    echo "=======                   =============="
    echo "1.  Show first 3 lines"
    echo "2.  Explain: ls -t | tail -1"
    echo "3.  Show first 100 characters"
    echo "4.  Show last 3 lines"
    echo "5.  Show line 5 onwards"
    echo "6.  Show first 5 lines and store in shortlist"
    echo "7.  Display name and city from shortlist"
    echo "8.  Cut 3rd field -> Cutlist1"
    echo "9.  Cut 1st, 2nd and 4th fields -> Cutlist2"
    echo "10. Paste Cutlist1 and Cutlist2 laterally"
    echo "11. Sort teachers according to teacher name"
    echo "12. Sort teachers in reverse order"
    echo "13. Sort The Numfile"
    echo "14. Replace the Character 'l' with 'n' as well as Translate"
    echo "15. Display the Lines Contaning  the line  container"
    echo "16. Get The occurance of the Word 'Howrah'"
    echo "17. Display the line Number in which 'Jadavpur' appears"
    echo "18. Exit"

    read -p "Enter your choice: " ch

    case $ch in

        1)
            echo
            echo "First 3 lines:"
            head -3 teachers
            ;;

        2)
            echo
            echo "Explanation:"
            echo "ls -t lists files according to modification time,"
            echo "with the newest file first."
            echo "tail -1 displays the last entry."
            echo "Therefore, it displays the oldest entry."
            ;;

        3)
            echo
            echo "First 100 characters:"
            head -c 100 teachers
            echo
            ;;

        4)
            echo
            echo "Last 3 lines:"
            tail -3 teachers
            ;;

        5)
            echo
            echo "Line 5 onwards:"
            tail -n +5 teachers
            ;;

        6)
            echo
            echo "First 5 lines:"
            head -5 teachers | tee shortlist
            ;;

        7)
            echo
            echo "Name and City:"
            cut -d'|' -f2,4 shortlist
            ;;

        8)
            echo
            echo "Third field:"
            cut -d'|' -f3 shortlist | tee Cutlist1
            ;;

        9)
            cut -d'|' -f1,2,4 shortlist > Cutlist2
            echo "First, second and fourth fields stored in Cutlist2."
            ;;

        10)
            echo
            echo "Cutlist1 and Cutlist2 pasted laterally:"
            paste Cutlist1 Cutlist2
            ;;

        11)
            echo
            echo "Teachers sorted according to name:"
            sort -t'|' -k2,2 teachers
            ;;

        12)
            echo
            echo "Teachers in reverse order:"
            sort -r teachers
            ;;
	13)
	    echo
	    printf "2 10 5 27 4" > numfile
	    cat numfile  | tr ' ' '\n' | sort -n
	    echo "Actually, It's Not Possible  To Sort by simply using 'Sort -n'"
	    echo "So To perform Sorting we are first translating the numfile and then performing 'sort -n'"
	    ;;
	14)
	    echo
	    sed s/l/n/g teachers | tr  'a-z' 'A-Z'
	    ;;
	15)
       	    echo
	    echo "Pls Wait! For This Section"
	    ;;
	16)
	    echo
	    grep -o "Howrah" teachers | wc -l
	    ;;
	17)
	    echo
	    grep -n "Jadavpur" teachers
	    ;;
        18)
            echo
            echo "Thank You For Using & Trusting This Program! "
            exit
            ;;

        *)
            echo
            echo "Respected Sir/Ma'am! Please select between 1-18."
            ;;

    esac

    echo
    read -p "Press Enter to continue..."
done
