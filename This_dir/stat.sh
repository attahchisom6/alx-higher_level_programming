yellow="\e[0;33m"
green="\e[0;32m"
red="\e[0;31m"
blue="\e[0;34m"
clear="\e[00m"

#FUNCTION DECLARATION
stat() {
	  if [ $? -eq 0 ]
	  then
		  echo -en "$green✓$clear"
	  else
		  echo -en "$red×$clear"
	  fi
  }

  PS1='$(stat)'
  PS1+="${green}[attah"
  PS1+="@${clear}$red\h$clear:$blue\w$clear]:\n$ "
  
  
