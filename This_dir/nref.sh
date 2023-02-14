#! /bin/bash

#INVESTIGATING THE CHARACTERISTICS OF NREF(NAME OF INDIRECT REFERENCE OF A VARIABLE

func(){
	 local -n var=$1
	 var=new_house_is_duplex
	 echo "changing ${!var} .."
      }

bungalow=old_house
echo "before function call, bungalow = $bungalow"
func bungalow
echo "after function call, bungalow = $bungalow"
echo $var
