#A SCRIPT TO ANNOUCE MY LAUNCH TIME

lunchbreak(){ 
	if [[ $(date +%H) == 12 && $(date +%M) < 59 ]]
	then 
		printf "\033[5;31mwonserful, its lunch time\033[0m"
	else
		printf "\033[5;33mits not lunch time\033[0m"

		fi
	}

