#!/bin/bash
#A file to give permission to target files

for file in $@
do

	chmod u+x $file
done

if [$# -eq 1]
then
	echo "hello"
fi
