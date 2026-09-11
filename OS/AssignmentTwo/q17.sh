#!/bin/bash

echo "Enter the number of terms:"
read n

a=0
b=1

echo "Fibonacci series:"

for ((i=1; i<=n; i++))
do
    echo -n "$a "

    c=$((a + b))
    a=$b
    b=$c
done

echo
#!/bin/bash

echo "Enter the number of terms:"
read n

a=0
b=1

echo "Fibonacci series:"

for ((i=1; i<=n; i++))
do
    echo -n "$a "

    c=$((a + b))
    a=$b
    b=$c
done

echo
