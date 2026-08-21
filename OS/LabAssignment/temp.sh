#!/bin/bash

> teachers

for i in {1..20}
do
    printf "Enter Teacher ID (T%03d): " "$i"
    read id

    printf "Enter X.Y: "
    read xy

    printf "Enter P.Q: "
    read pq

    printf "Enter location: "
    read location

    echo "$id|$xy|$pq|$location" >> teachers
done

echo "20 teacher records saved in teachers."

