
#!/bin/bash

base1=$1
value=$2
base2=$3

decimal=$((base#$value))

result=""

while [ $decimal -gt 0 ]
do
    remainder=$((decimal % base2))
    decimal=$((decimal / base2))

    if [ $remainder -lt 10 ]
    then
        digit=$remainder
    else
        digit=$(printf "\\$(printf '%03o' $((55 + remainder)))")
    fi

    result=$digit$result
done

echo "Result: $result"