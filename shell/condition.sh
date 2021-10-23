#!/bin/bash 

echo -e "please enter your name: \c"

read NAME

if  [ "$NAME" == "elliot" ];
then
	echo "welcome"
elif [ "$NAME" == "akshit" ];
then
     echo "welcome2"
else
	echo "invalid name!"	     

fi 	
