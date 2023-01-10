#!/bin/bash
#this script is to verify the user password
read  -p "Enter the password" pass
if test "$pass" == "ei"
then
	echo "Password is verified"
else
	echo "Access Denied"
fi
