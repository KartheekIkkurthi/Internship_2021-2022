#!/bin/bash -x
# this script is to get network info
echo "Current date: $(date) hostname:$(hostname)"
echo "Network Information is "
/sbin/ifconfig
