#! /bin/bash
#program to print a chessboard and assign it desired colors
clear="\033[0m"
for (( i = 1; i <= 9; i++ ))
do
	for (( j = 1; j <= 9; j++ ))
    do
        total=`expr $i + $j`
        S=`expr $total % 2`
        if [ $S -eq 0 ]
        then
        echo -e "\033[47m"
        else
        echo -e "\033[40m"
     fi
   done
 echo -e "\033[40m"
 echo 
done
echo $clear
