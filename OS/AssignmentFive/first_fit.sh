#!/bin/bash

echo "Enter number of memory blocks:"
read n

echo "Enter memory block sizes:"
for ((i=0; i<n; i++)); do
    read block[i]
done

echo "Enter number of processes:"
read m

echo "Enter process sizes:"
for ((i=0; i<m; i++)); do
    read process[i]
done

for ((i=0; i<m; i++)); do
    alloc[i]=-1
    for ((j=0; j<n; j++)); do
        if [ "${block[j]}" -ge "${process[i]}" ]; then
            alloc[i]=$j
            block[j]=$((block[j]-process[i]))
            break
        fi
    done
done

echo "Process No.  Process Size  Block No."
for ((i=0; i<m; i++)); do
    if [ "${alloc[i]}" -ne -1 ]; then
        echo "$((i+1))             ${process[i]}             $((alloc[i]+1))"
    else
        echo "$((i+1))             ${process[i]}             Not Allocated"
    fi
done
