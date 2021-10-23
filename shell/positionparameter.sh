#!/bin/bash 

#$0-$9

echo "execution of script : $0"

echo "please enter the name of the user: $1"

#adding user

sudo adduser --home /$0 $1 