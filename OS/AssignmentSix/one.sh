#!/bin/bash

echo "Enter the Process ID (PID):"
read pid

kill -9 "$pid"

if [ $? -eq 0 ]; then
    echo "Process killed successfully using SIGKILL."
else
    echo "Failed to kill the process."
fi