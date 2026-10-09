#!/bin/bash

while true
do
    echo " MEMORY ALLOCATION ALGORITHMS"
    echo "1. First Fit"
    echo "2. Best Fit"
    echo "3. Worst Fit"
    echo "4. Exit"
    echo "Enter your choice:"
    read choice

    if [ "$choice" -eq 4 ]; then
        echo "Exiting program..."
        break
    fi

    if [ "$choice" -lt 1 ] || [ "$choice" -gt 4 ]; then
        echo "Invalid choice!"
        continue
    fi

    echo "Enter number of memory blocks:"
    read n

    if [ "$n" -le 0 ]; then
        echo "Invalid number of blocks!"
        continue
    fi

    echo "Enter memory block sizes:"
    for ((i=0; i<n; i++))
    do
        read block[i]
        original[i]=${block[i]}
    done

    echo "Enter number of processes:"
    read m

    if [ "$m" -le 0 ]; then
        echo "Invalid number of processes!"
        continue
    fi

    echo "Enter process sizes:"
    for ((i=0; i<m; i++))
    do
        read process[i]
    done

    # Reset allocation
    for ((i=0; i<m; i++))
    do
        alloc[i]=-1
    done

    # Memory allocation
    for ((i=0; i<m; i++))
    do
        pos=-1

        for ((j=0; j<n; j++))
        do
            if [ "${block[j]}" -ge "${process[i]}" ]; then

                if [ "$choice" -eq 1 ]; then
                    pos=$j
                    break

                elif [ "$choice" -eq 2 ]; then
                    if [ "$pos" -eq -1 ] || \
                       [ "${block[j]}" -lt "${block[pos]}" ]; then
                        pos=$j
                    fi

                elif [ "$choice" -eq 3 ]; then
                    if [ "$pos" -eq -1 ] || \
                       [ "${block[j]}" -gt "${block[pos]}" ]; then
                        pos=$j
                    fi
                fi
            fi
        done

        if [ "$pos" -ne -1 ]; then
            alloc[i]=$pos
            block[pos]=$((block[pos] - process[i]))
        fi
    done

    # Display allocation table
    echo
    echo "Allocation Results"
    printf "%-12s %-15s %-12s\n" \
        "Process No." "Process Size" "Block No."

    for ((i=0; i<m; i++))
    do
        if [ "${alloc[i]}" -ne -1 ]; then
            printf "%-12d %-15d %-12d\n" \
                "$((i+1))" "${process[i]}" \
                "$((alloc[i]+1))"
        else
            printf "%-12d %-15d %-12s\n" \
                "$((i+1))" "${process[i]}" "Not Allocated"
        fi
    done

    echo "Remaining memory in each block:"

    for ((j=0; j<n; j++))
    do
        echo "Block $((j+1)): ${block[j]}"
    done

    echo
done
