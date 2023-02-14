PROJECT ANALYSIS

ANALYSIS OF QUESTION 11 IN PROJECT 0x06-pointers_arrays_strings

_this post is for a critical overview of this code, u are free to assert ur opinion and and can also copy and run this code on ur termux or any virtual or real time software avalaible to ur disposal_

in this project we have the assumptoon that we are dealing with a large number of unsigned integers and will primarily apply elementary mathematics to our sum
e.g		57
		+5
		__
		62

ASSUMPTIONS:
1. we will start by adding the last digits of the numbers contained in the pointer to the two respective string *n1 and *n2
2. if the sum of this digits is lessthan 10, then just print their su, however, if thier sum is greater than 10, as in seen in our example above 5 + 7 = 12, then will write down the last digit 2, carry the first digit 1, and add it to the next number 5.
3. this carried number should be stored in the variable carry_over.
4. As opposed to us humans, the computer will add 7 and 5 and print 2 first, then carry over 1 and add it to 5 to get 6, then it prints 6 after 2 i.e 26, which is not the expected answer, hence we need a reverse function to reverse the array of result i.e if result = 26 then
	reverse_array(result) = 62.
which is the answer we want.

VARIABLES:
In Infinite_add function
1. p and k the running counter to the elements of the array n1[] and n2[] respectively.
2. digits is the running counter to the buffer r[]
3. value1 and value2 are the numbers we print, without the carry_over
4. sum_total is sum of value1, value2 and carry_over.

here's the code:


#include <stdio.h>

void reverse_array(char *n)
{
	int k, p;
	char temp;

	p = 0;
	while (n[p] != '\0')
	{
		p++; /*read through the array from begining to the end while excluding the null terminator*/
	}
	p--; /*start reading from end to beginining*/
	for (k = 0; k < p; k++, p--)
	{
		temp = n[p];
		n[p] = n[k];
		n[k] = temp;
	}
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int p = 0;
	int k = 0;
	int value1;
	int value2;
	int digits;
	int sum_total = 0;
	int carry_over = 0;

	while (n1[p] != '\0')
		p++;
	while (n2[k] != '\0')
		k++;

	if (p >= size_r || k >= size_r)
		return (0);
	while (p >= 0 || k >= 0 || carry_over == 1)
	{
		if (p < 0)
			return (0);
		else
			value1 = n1[p] - '0';
		if (k < 0)
			return (0);
		else
			value2 = n2[k] - '0';
		sum_total = value1 + value2 + carry_over;
		if (sum_total >= 10)
			carry_over = 1;
		else
			carry_over = 0;
		if (digits >= size_r - 1)
			return (0);
		r[digits] = (sum_total % 10) + '0';
		digits++;
		p--;
		k--;
	}
	
	if (digits == size_r)
		return (0);
	r[digits] = '\0';
	reverse_array(r);
	return (r);
}

int main(void)
{
	char *m = "1668778";
	char *n = "1246479";
	char r[100];
	char *result;

	result = infinite_add(m, n, r, 100);
	if (result == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", m, n, result);
	}

	return (0);
}
