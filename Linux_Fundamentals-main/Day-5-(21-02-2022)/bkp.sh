#!/bin/bash
# This script is to take the backup of files.
DEST=/home/kartheek/backup
SRC=/home/kartheek
[! -d $DEST] && mkdir -p $DEST
#Simiiliar check for the source directory existence
[! -d $SRC] && {echo "$SRC does not exist,can not initiate backup to $DEST"
exit 1;}

echo "Backuping up in the Directory $DEST"

tar zcvf $DEST/backup.tar.gz $SRC 2>dev/null
status=$?
[ $status -eq 0] && echo "Backup is done" || echo "backup failed"

