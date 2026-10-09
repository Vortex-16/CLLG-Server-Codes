#!/bin/bash

sleep 100 &
pid=$!

echo "Process started with PID: $pid"

sleep 2

kill -9 "$pid"

echo "SIGKILL sent to process $pid"

if kill -0 "$pid" 2>/dev/null; then
    echo "Process is still running or not yet reaped"
else
    echo "Process terminated successfully"
fi
