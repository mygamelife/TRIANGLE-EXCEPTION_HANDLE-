#include "unity.h"
#include "TRIANGLE.h"
#include "CException.h"

char *respond(int value1 , int value2 , int value3);

void setUp(void)
{
}

void tearDown(void)
{
}

void test_side1_is_4_side2_is_2_and_length_is_5(void)
{
	char *P;
	P = respond(4,2,5);
	TEST_ASSERT_EQUAL_STRING("Scalene",P);
}

void test_side1_is_5_side2_is_5_and_length_is_8(void)
{
	char *P;
	P = respond(5,5,8);
	TEST_ASSERT_EQUAL_STRING("Isosceles",P);
}

void test_side1_is_2_side2_is_8_and_length_is_2(void)
{
	char *P;
	P = respond(4,8,4);
	TEST_ASSERT_EQUAL_STRING("Isosceles",P);
}

void test_side1_is_8_side2_is_12_and_length_is_12(void)
{
	char *P;
	P = respond(8,12,12);
	TEST_ASSERT_EQUAL_STRING("Isosceles",P);
}

void test_side1_is_8_side2_is_8_and_length_is_8(void)
{
	char *P;
	P = respond(8,8,8);
	TEST_ASSERT_EQUAL_STRING("Equilateral",P);
}

			
void test_side1_is_negative2_side2_is_4_and_length_is_8(void)/*Invalid checking*/
{
	char *P;
	P = respond(-2,4,8);
	TEST_ASSERT_EQUAL_STRING("Invalid Input",P);
}

void test_side1_is_negative2_side2_is_5_and_length_is_negative6(void)/*Invalid checking*/
{
	char *P;
	P = respond(-2,5,-6);
	TEST_ASSERT_EQUAL_STRING("Invalid Input",P);
}

void test_side1_is_negative8_side2_is_negative8_and_length_is_negative8(void)/*Invalid checking*/
{
	char *P;
	P = respond(-8,-8,-8);
	TEST_ASSERT_EQUAL_STRING("Invalid Input",P);
}

void test_side1_is_10_side2_is_30_and_length_is_8(void)/*Invalid checking*/
{
	char *P;
	P = respond(0,30,8);
	TEST_ASSERT_EQUAL_STRING("Invalid Input",P);
}

void test_side1_is_0_side2_is_0_and_length_is_8(void)/*Invalid checking*/
{
	char *P;
	P = respond(0,0,8);
	TEST_ASSERT_EQUAL_STRING("Invalid Input",P);
}

void test_side1_is_0_side2_is_0_and_length_is_0(void)/*Invalid checking*/
{
	char *P;
	P = respond(0,0,0);
	TEST_ASSERT_EQUAL_STRING("Invalid Input",P);
}

void test_side1_is_1_side2_is_1_and_length_is_7(void)/*Invalid checking*/
{
	char *P;
	P = respond(1,1,7);
	TEST_ASSERT_EQUAL_STRING("Invalid Input",P);
}

void test_side1_is_7_side2_is_12_and_length_is_3(void)/*Invalid checking*/
{
	char *P;
	P = respond(7,12,3);
	TEST_ASSERT_EQUAL_STRING("Invalid Input",P);
}

void test_AreLengthsAllStrictlyPositive_given_2_3_4_should_throw_exception(void)
{
	CEXCEPTION_T err;
	
	Try
	{
		AreLengthsAllStrictlyPositive(2,3,4);
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE , err);
		TEST_FAIL_MESSAGE("Lengths are not strictly positive");
	}
}

void test_isTriangle_given_8_6_9_should_not_throw_exception(void)
{
	CEXCEPTION_T err;
	
	Try
	{
		isTriangle(10,16,7);
	}
	Catch(err)
	{
		TEST_ASSERT_EQUAL(ERR_NOT_TRIANGLE , err);
		TEST_FAIL_MESSAGE("This is not a Triangle");
	}
}