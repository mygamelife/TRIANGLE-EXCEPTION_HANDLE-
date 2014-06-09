#include "stdio.h"
#include "TRIANGLE.h"
#include "CException.h"

char *respond(int value1 , int value2 , int value3)
{	
	/*Invalid checking*/
	if(value1 < 0 || value2 < 0 || value3 < 0)
		return "Invalid Input";
	
	else if(value1 == 0 || value2 == 0 || value3 ==0)
		return "Invalid Input";
	
	else if((value1 + value2) < value3 || (value1 + value3) < value2 || (value2 + value3) < value1)
		return "Invalid Input";
	/*Invalid checking*/
	
	else if(value1 == value2 && value2 == value3)
		return "Equilateral";
	
	else if(value1 == value2 || value2 == value3)
		return "Isosceles";
	
	else if(value1 == value2 || value1 == value3 || value2 == value3)
		return "Isosceles";
	
	else
		return "Scalene";
}

int AreLengthsAllStrictlyPositive(int side1 , int side2, int side3)
{
	if(side1 <= 0 || side2 <= 0 || side3 <= 0)
		Throw(ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE);
	
	printf("Lengths are strictly positive");
}

int isTriangle(int side1 , int side2 , int side3)
{
	if((side1 + side2) < side3 || (side1 + side3) < side2 || (side2 + side3) < side1)
		Throw(ERR_NOT_TRIANGLE);
		
	printf("This is a Triangle");
}