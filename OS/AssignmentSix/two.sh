#!/bin/bash

(
    echo "Child process started."
    echo "Child PID: $$"
    sleep 5
    echo "Child is still running after parent termination."
    echo "New Parent PID: $PPID"
) &

child=$!

echo "Parent PID: $$"
echo "Child PID: $child"
echo "Killing parent process using SIGKILL..."

kill -9 $$