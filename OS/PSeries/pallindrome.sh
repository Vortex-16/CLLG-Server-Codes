
#!/bin/bash

echo "Enter a string:"
read str

rev=""
len=${#str}

i=$((len - 1))

while [ $i -ge 0 ]
do
    rev=$rev${str:$i:1}
    i=$((i - 1))
done

if [ "$str" = "$rev" ]
then
    echo "Palindrome"
else
    echo "Not Palindrome"
fi