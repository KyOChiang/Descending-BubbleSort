#include "unity.h"
#include "descendingBubbleSort.h"


void setUp(){

}



void tearDown(){



}



void test_smallerVal_should_swap_to_right_within_2_val_only(){

 int intArray[] = {4,66};

 takeSmallerAndSwapToRight(&intArray[0],&intArray[1]);

 UnityAssertEqualNumber((_U_SINT)((66)), (_U_SINT)((intArray[0])), (((void *)0)), (_U_UINT)14, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((intArray[1])), (((void *)0)), (_U_UINT)15, UNITY_DISPLAY_STYLE_INT);

}
