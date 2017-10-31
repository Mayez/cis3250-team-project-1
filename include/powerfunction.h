// Version: 1.2
// Last major update: 10/27/2017 by Max Mastalerz
// Author(s): Kara Maedje
// Description: This function calculates the power of 
// the given integer 

#include <stdio.h>

double powerFn(double x, int n) {
	int i;
	double result = 1;

	for(i = 1; i <= n; i++){
	    result *= x;
	}

	return result;
}

