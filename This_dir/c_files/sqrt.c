#include <stdio.h>

/* TO CALCULATE A SQUARE */



double sq(double x){
	double result;
	result = x*x;
	return result;
}


int main(){
	double p;
	printf("Enter a number to be squared: ");
	scanf("%lf", &p);
	double y;	
	y = sq(p);
	
printf("The square of the number is: %f", y);
    

printf("\n");
  
}
