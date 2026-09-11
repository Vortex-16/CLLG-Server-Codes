#!/bin/bash

armstrong_check() {
        num=$1
        len=${#num}
        sum=0
        temp=$num

        while [ $temp -gt 0 ]; do
                digit=$((temp % 10))

                power=1
                for ((i=0; i<len; i++)); do
                        power=$((power * digit))
                done

                sum=$((sum + power))
                temp=$((temp / 10))
        done

        if [ $num -eq $sum ]; then
                echo "True"
        else
                echo "False"
        fi
}

# Examples

armstrong_check 153
armstrong_check 253
armstrong_check 370
armstrong_check 7845
