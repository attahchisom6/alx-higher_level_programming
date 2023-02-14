#! /bin/bash

#PROGRAM TO PRINT A RECTANGLE WITH # AND =

for i in $(seq 1 8)
do
	count=1
	for j in $(seq 1 8)
	do
		
		printf  "#\t"
		count=$((count+1))
	done
	printf "=\t"
	count=$((count+1))
done
printf "\n"
