#!/bin/bash

echo "Parent process started"
echo "Parent PID: $$"

(
    echo "Child process started"
    echo "Child PID: $BASHPID"
    echo "Parent PID from child: $PPID"
    sleep 2
    echo "Child process completed"
) &

CHILD_PID=$!

echo "Child PID from parent: $CHILD_PID"
echo "Parent is waiting for child..."

wait $CHILD_PID

echo "Parent process completed"
