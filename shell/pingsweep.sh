#!/bin/bash
echo "please enter the subnet"
read subnet

for ip in $(seq 1 254); do
	ping -c 5 subnet.$ip
done
