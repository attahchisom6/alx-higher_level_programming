#! /bin/bash

#THIS PROGRAM WILL DISPLAY THE NUMBER OF HROUPS THE USER IS LOGGED IN.

echo you are assigned to the following group
for group in ${GROUPS[@]}
do
	IFS=:  read -r name superflous_arg numbers members < <(getent group $group)
	printf "name: %-10s numbers: %-15s members: %s\n" "$name" "$numbers" "$members"

done
