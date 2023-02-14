#! /bin/bash

#TESTING EVAL COMMAND: A PROGRAM TO   CAL CULATE THE SUM OF N POSITIVE INTEGER IN A SERIES

sum=0

for n in {1..7}
do
	 x=$n
	sum=$(($sum+$x))
	 mycommand="echo The nth sum of the $n\'th term in  a sequence of positive integer is:"
eval $mycommand $sum

done
