#! /bin/bash

#PROGRAM TO READ A FILE INTO AN ARRAY OF NONEMPTY ELEMENTS


arr=()
while IFS= read -r lines
do
	arr+=("$lines")
	echo "${arr[@]}"
done < $1
