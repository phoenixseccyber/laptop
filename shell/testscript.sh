#!/bin/bash

if [ -d /usr/share/wordlists ]; # (-d) this option check for the directory excist or not  
then 
	echo "yes it exists"
else
 	echo "does not exists"
fi		



if [ -e testscript.sh ]; # (-e) this option check for the file excist or not  
then 
	echo "yes it exists"
else
 	echo "does not exists"
fi	