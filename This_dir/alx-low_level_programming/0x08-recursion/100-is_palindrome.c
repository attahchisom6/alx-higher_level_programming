#include "main.h"
#include <stdio.h>

/**
 * check_paldrome - this function will check to see if
 * a given string is pallindrome
 * @s:test string to be checked
 * @p:length of string
 * @k:counter
 * Return:1 if found, 0 if not
 */
int check_paldrome(char *s, int p, int k)
{
	int g;

	if (k < p && s[k] == s[p])
	{
		g = check_paldrome(s, p - 1, k + 1);
		return (g);
/* p repreaent lenght and k counter*/
	}
	if (s[p] != s[k])
		return (0);
	return (1);
}

/**
 * _strlen -this function will get yhe lenght of test string
 * @s:string whose lenght we seek;
 * Return:lenght of string
 */

int _strlen(char *s)
{
	int h;

	if (*s != '\0')
	{
		h = 1 + _strlen(s + 1);
		return (h);
	}
	return (0);
}

/**
 * is_palindrome - function to evaluate the palindrome
 * @s:string to evaluate
 * Return:1 if string is palindrome; 0 otherwise
 */

int is_palindrome(char *s)
{
	int w, x, y = 0;

	x = _strlen(s) - 1;
	w = check_paldrome(s, x, y);
	return (w);
	return (0);
}
