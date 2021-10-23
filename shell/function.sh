#!/bin/bash

function test_shadow(){
	if [ -e /etc/shadow ];
	then 
		echo "yes it exists"
	else
		echo "no does not exists"
	fi 			
    }

function test_passwd(){
	if [ -e /etc/passwd ];
	then 
		echo "yes it exists"
	else
		echo "no does not exists"
	fi 			
    }    

test_shadow
test_passwd