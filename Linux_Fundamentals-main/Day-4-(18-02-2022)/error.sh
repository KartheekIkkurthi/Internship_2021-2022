#!bin/bash
#Store path to commands
LOGGER=/usr/bin/logger
#FILE=/var/log/mcelog
FILE=/home/kartheek/hwlogfile
#Store email settings
#AEMAIL="vivek@nixcraft.net.in"
#ASUB="H/W Error -$(hostname)"
AMESS="Warning -Hardware errors found on $(hostname) @ $(date). See log file for $FILE."

OK_MESS="OK: NO Hardware Error Founds."
WARN_MESS="ERROR: Hardware Error Found."
#Check if $FILE exists or not
if test ! -f "$FILE"
then
	echo" Error -$FILE not found or mcelog is not configure for 64bit Linux Systems."
	exit 1
fi
#okay search for errors in file
error_log=$(grep -c -i "hardware error" $FILE)
#error found or not ?
if [$error_log -gt 0]
then #yes error(s) found,let send an email
	echo "$AMESS"| email -s "$ASUB" $AEMAIL
else #naa,everything looks okay
	echo "$OK_MESS"
fi
