#!/bin/bash
if [ -z "$1" -o -z "$2" -o -z "$3" ]; then
	echo "Error 3 argumentss required"
	exit 1
fi

srb=$1
tgb=$2
n=$3

n10=""
pow=1

while [ $n -gt 0 ]; do
	d=$(( n % 10 ))
	n10=$(( n10 + d * pow ))
	pow=$(( pow * srb ))
	n=$(( n / 10 ))
done

out=""
while [ $n10 -gt 0 ]; do
	rem=$(( n10 % tgb ))
	out="$rem$out"
	n10=$(( n10 / tgb ))
done

echo $out
