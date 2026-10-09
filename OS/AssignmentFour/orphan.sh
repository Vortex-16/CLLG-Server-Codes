#!/bin/bash

echo "Parent process PID: $$"

(
    echo "Child process PID: $BASHPID"
    echo "Child's parent PID before termination: $PPID"

    sleep 5

    echo "Child is still running"
    ps -o pid,ppid,cmd -p "$BASHPID"
) &

echo "Parent process terminating"
exit 0
