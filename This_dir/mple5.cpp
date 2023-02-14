#include <iostream>
/*this will print the mutiple of the input by 5 including 1, so long as the input is a number between 1 and 15*/
int x=1;
cout<< "pls input a number between 1 and 15";
cin>> x ;
while (x < 15){
	x=x*5;
        cout<< x;
    }
