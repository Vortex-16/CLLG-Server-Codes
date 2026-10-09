#!/bin/bash

trap 'echo "Ctrl+C pressed!";' SIGINT

echo "Press Ctrl+C. The default action is changed."
sleep 10

trap - SIGINT

echo "Default function of Ctrl+C restored."
echo "Press Ctrl+C to terminate."

while true
do
    sleep 1
done