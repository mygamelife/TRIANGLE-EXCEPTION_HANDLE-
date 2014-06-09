#include "unity.h"
#include "Add01.h"


int ADDITION(int value1 , int value2);



void setUp(void)

{

}



void tearDown(void)

{

}



void test_2_add_2_equal_to_4(void)

{

 int result;

 result = ADDITION(2,2);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)18, UNITY_DISPLAY_STYLE_INT);

}
