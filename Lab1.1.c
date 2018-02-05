/*
 ============================================================================
 Name        : 1.c
 Author      : Leon
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#define pi 4

#include <stdio.h>

void main()
{
	float r,area;	//define the variables

	printf("Please enter the R:");

	scanf("%f",&r);	//input the radius

	area=pi*r*r;	//calculate the area

	printf("The area of the circle is: %.2f",area);	//out put the area.
}

