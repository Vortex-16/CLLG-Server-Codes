#!/bin/bash

echo "Parent PID: $$"

(
    sleep 2
    echo "Child is stopping the parent..."
    kill -STOP $PPID
) &

while true
do
    echo "Parent process is running..."
    sleep 1
done