#!/bin/bash

echo "Parent process PID: $$"

(
    echo "Child process PID: $BASHPID"
    exit 0
) &

child_pid=$!

echo "Child PID: $child_pid"

sleep 10

echo "Checking child process state:"
ps -o pid,ppid,state,cmd -p "$child_pid"

echo "Parent process exiting"
