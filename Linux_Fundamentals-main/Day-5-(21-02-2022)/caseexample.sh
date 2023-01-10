#!/bin/bash
# Case Example Script

read -p "Enter the way you wish to take the backup" bktype
case $bktype in 

tar)
	echo "Compressing the File using Tar"
	;;

zip)
	echo "Compressing the File using Gzip"
	;;

dump)
	echo "Using mySQL dump for backup"
	;;
*)
	echo "Enter A Valid Choice either tar or zip or dump"

esac
