#!/bin/bash
Backuppath=/home/kartheek/backup
echo This is the directory $Backuppath for $USERNAME
file=/etc/mosquitto.conf
echo "File is \$file"
read -p "Enter value" n1 n2 n3
echo "Value entered is $n1 $n2 $n3"
read -p "enter the domain name"
domain_name
dig $domain_name
read -s -p "Enter the password:" my_pass
echo "Password is $my_pass"
nameserver="ns1.iqb.com ns2.iqb.com ns3.iqb.com"
read -r ns1 ns2 ns3<<<$nameserver
echo name servers are $ns1 $ns2 $ns3
echo $IFS
read -p "enter the values:" x y
echo Values are $x and $y
ans=$(($x+$y))
echo Answer is $ans
