#!/usr/bin/env bash

if [ ! -f $1 ]
then
	echo "file doesent exist"
	touch $1
	echo "$1 created successfully"
else
	echo ''
fi
while read -r $line
do
	echo $line > $1
done <<< $2
cp $1 hello.py
rm $1
