#ifndef TRIANGLE_H
#define TRIANGLE_H

typedef enum {ERR_NO_ERROR,
			  ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE,
			  ERR_NOT_TRIANGLE
			 } ErrorCode;
char *respond(int value1 , int value2 , int value3);
int AreLengthsAllStrictlyPositive(int side1 , int side2, int side3);
int isTriangle(int side1 , int side2 , int side3);
#endif // TRIANGLE_H
