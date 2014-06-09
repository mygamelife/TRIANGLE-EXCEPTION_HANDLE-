#include "unity.h"
#include "Add.h"


int add(int value1, int value2);



void setUp(void)

{

}



void tearDown(void)

{

}



void test_add_2_and_3_should_return_5(void)

{

 int result;

 result = add(2, 3);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)18, UNITY_DISPLAY_STYLE_INT);

}
