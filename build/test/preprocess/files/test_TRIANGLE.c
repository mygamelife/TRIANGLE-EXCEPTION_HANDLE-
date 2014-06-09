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

 UnityAssertEqualString((const char*)("Scalene"), (const char*)(P), (((void *)0)), (_U_UINT)19);

}



void test_side1_is_5_side2_is_5_and_length_is_8(void)

{

 char *P;

 P = respond(5,5,8);

 UnityAssertEqualString((const char*)("Isosceles"), (const char*)(P), (((void *)0)), (_U_UINT)26);

}



void test_side1_is_2_side2_is_8_and_length_is_2(void)

{

 char *P;

 P = respond(4,8,4);

 UnityAssertEqualString((const char*)("Isosceles"), (const char*)(P), (((void *)0)), (_U_UINT)33);

}



void test_side1_is_8_side2_is_12_and_length_is_12(void)

{

 char *P;

 P = respond(8,12,12);

 UnityAssertEqualString((const char*)("Isosceles"), (const char*)(P), (((void *)0)), (_U_UINT)40);

}



void test_side1_is_8_side2_is_8_and_length_is_8(void)

{

 char *P;

 P = respond(8,8,8);

 UnityAssertEqualString((const char*)("Equilateral"), (const char*)(P), (((void *)0)), (_U_UINT)47);

}





void test_side1_is_negative2_side2_is_4_and_length_is_8(void)

{

 char *P;

 P = respond(-2,4,8);

 UnityAssertEqualString((const char*)("Invalid Input"), (const char*)(P), (((void *)0)), (_U_UINT)55);

}



void test_side1_is_negative2_side2_is_5_and_length_is_negative6(void)

{

 char *P;

 P = respond(-2,5,-6);

 UnityAssertEqualString((const char*)("Invalid Input"), (const char*)(P), (((void *)0)), (_U_UINT)62);

}



void test_side1_is_negative8_side2_is_negative8_and_length_is_negative8(void)

{

 char *P;

 P = respond(-8,-8,-8);

 UnityAssertEqualString((const char*)("Invalid Input"), (const char*)(P), (((void *)0)), (_U_UINT)69);

}



void test_side1_is_10_side2_is_30_and_length_is_8(void)

{

 char *P;

 P = respond(0,30,8);

 UnityAssertEqualString((const char*)("Invalid Input"), (const char*)(P), (((void *)0)), (_U_UINT)76);

}



void test_side1_is_0_side2_is_0_and_length_is_8(void)

{

 char *P;

 P = respond(0,0,8);

 UnityAssertEqualString((const char*)("Invalid Input"), (const char*)(P), (((void *)0)), (_U_UINT)83);

}



void test_side1_is_0_side2_is_0_and_length_is_0(void)

{

 char *P;

 P = respond(0,0,0);

 UnityAssertEqualString((const char*)("Invalid Input"), (const char*)(P), (((void *)0)), (_U_UINT)90);

}



void test_side1_is_1_side2_is_1_and_length_is_7(void)

{

 char *P;

 P = respond(1,1,7);

 UnityAssertEqualString((const char*)("Invalid Input"), (const char*)(P), (((void *)0)), (_U_UINT)97);

}



void test_side1_is_7_side2_is_12_and_length_is_3(void)

{

 char *P;

 P = respond(7,12,3);

 UnityAssertEqualString((const char*)("Invalid Input"), (const char*)(P), (((void *)0)), (_U_UINT)104);

}



void test_AreLengthsAllStrictlyPositive_given_2_3_4_should_throw_exception(void)

{

 unsigned int err;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  AreLengthsAllStrictlyPositive(2,3,4);

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_LENGTH_IS_NOT_STRICTLY_POSITIVE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)117, UNITY_DISPLAY_STYLE_INT);

  UnityFail( ("Lengths are not strictly positive"), (_U_UINT)118);;

 }

}



void test_isTriangle_given_8_6_9_should_not_throw_exception(void)

{

 unsigned int err;



 { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); if (_setjmp(NewFrame) == 0) { if (&PrevFrame)

 {

  isTriangle(10,16,7);

 }

 else { } CExceptionFrames[MY_ID].Exception = (0x5A5A5A5A); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != (0x5A5A5A5A))

 {

  UnityAssertEqualNumber((_U_SINT)((ERR_NOT_TRIANGLE)), (_U_SINT)((err)), (((void *)0)), (_U_UINT)132, UNITY_DISPLAY_STYLE_INT);

  UnityFail( ("This is not a Triangle"), (_U_UINT)133);;

 }

}
