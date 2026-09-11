#!/bin/sh

while true; do :; done &
PID1=$!

while true; do :; done &
PID2=$!

echo "Process 1 PID: $PID1"
echo "Process 2 PID: $PID2"

kill "$PID1" "$PID2"

echo "Both processes terminated."
