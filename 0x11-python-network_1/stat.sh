#!/usr/bin/bash
#MY PS1 PROMPT

#export PS1="\[\e[31m\][\[\e[m\]\[\e[38;5;172m\]\u\[\e[m\]@\[\e[38;5;153m\]\h\[\e[m\] \[\e[38;5;214m\]\W\[\e[m\]\[\e[31m\]]\[\e[m\]\\$ "

func ()
{
	if [[ $? == 0 ]]
	then
		export PS1="[\[\e[32m\]✓attah@\[\e[0m\]\[\e[31m\]\h\[\e[0m\]:\[\e[34m\]\w\[\e[0m\]]: \n$ "

	else
		export PS1="[\[\e[31m\]×attah@\[\e[0m\]\[\e[31m\]\h\[\e[0m\]:\[\e[34m\]\w\[\e[0m\]]: \n$ "
	fi
}

func
