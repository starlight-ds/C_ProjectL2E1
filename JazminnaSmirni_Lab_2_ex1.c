/*
 * JazminnaSmirni_Lab_2_ex1.c
 *
 *  Created on: Feb 7, 2024
 *      Author: jsmirni
 */
#include <stdio.h>
#include <math.h>

int
main(void)
{
	setvbuf(stdout, NULL,_IONBF, 0);
	double x,y,result;

	printf("Enter the X value): ");
	scanf("%lf", &x);
	printf("Enter the Y value): ");
	scanf("%lf", &y);

	result = abs(x-y);
	printf("The result is %.2f.", result);

	return 0;
}



