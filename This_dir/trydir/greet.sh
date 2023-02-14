#! /bin/bash

#PROGRAM TO GREET A PERSON (WHO NAME IS PROBIDED) TO A GIVEN NUMBER OF TIMES

NAME=""
TIME=1
#FUNCTION DECLARATION
USAGE(){
	echo "Usage:  $0 [ -n name] [ -t k ] where k is a positive integer i.e 1,2,3,...,etc"
       } 
abnormal_exit(){
		   exit 1
	       }

while getopts ":n:t:" opt
do
	case "$opt" in
		n) NAME=${OPTARG}  ;;
		t) TIME=${OPTARG}
			num='^[0-9]+$'
			if ! [[ $TIME =~ $num ]]
			then
			     echo "E: insert a positive integer after -t flag"
			     USAGE
			     exit 1 

			elif [ $TIME -eq 0 ]
			then
				echo "E: The number after -t flag cannot be 0"
			     USAGE
	                     exit 1
			fi         ;;

		:) echo "E:"${OPTARG}" mising: pls parse an argument to n"
			     USAGE 
		        exit 1	   ;;
		
		*) USAGE         
			exit 1     ;;
	esac
done

	if [ -z "$NAME" ]
	then
		echo "Hi"
	fi
	      count=1	
	      while [ $count -le $TIME ]
	     
	      do
		    echo "Hello $NAME"
                   
		 let   count=$((count+1))
	      done
                    
		    
	
exit 0
