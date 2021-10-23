#!/bin/bash

echo "1) yes
2) no"

echo "please enter your choice:"
read choice


if [ "$choice" = "1" ];
then
	echo "please enter the value of A:"
	read  A 
	while  [ "$A" = "1" ]
	do
		echo "$A"
		((A++))
		# echo "$A"
	done
else
	echo " invalid!!!"
fi 



#break N continue work as same as in c++	


