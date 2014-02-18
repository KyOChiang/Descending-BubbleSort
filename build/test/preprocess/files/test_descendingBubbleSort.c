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



void test_smallerVal_should_not_swap_if_in_order(){

 int intArray[] = {66,4};

 takeSmallerAndSwapToRight(&intArray[0],&intArray[1]);

 UnityAssertEqualNumber((_U_SINT)((66)), (_U_SINT)((intArray[0])), (((void *)0)), (_U_UINT)21, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((intArray[1])), (((void *)0)), (_U_UINT)22, UNITY_DISPLAY_STYLE_INT);

}



void test_smallerVal_should_not_swap_if_in_order_for_neg_no(){

 int intArray[] = {-33,-99};

 takeSmallerAndSwapToRight(&intArray[0],&intArray[1]);

 UnityAssertEqualNumber((_U_SINT)((-33)), (_U_SINT)((intArray[0])), (((void *)0)), (_U_UINT)28, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-99)), (_U_SINT)((intArray[1])), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT);

}



void test_smallerVal_should_swap_if_not_in_order_for_neg_no(){

 int intArray[] = {-187,-22};

 takeSmallerAndSwapToRight(&intArray[0],&intArray[1]);

 UnityAssertEqualNumber((_U_SINT)((-22)), (_U_SINT)((intArray[0])), (((void *)0)), (_U_UINT)35, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-187)), (_U_SINT)((intArray[1])), (((void *)0)), (_U_UINT)36, UNITY_DISPLAY_STYLE_INT);

}



void test_sortSmallestToRightMost_should_move_largest_to_right_most_for_5elements(){





 int intArray[] = {-30,67,10,2,-3};

 sortSmallestToRightMost(intArray,(sizeof(intArray)/sizeof(int)));

 UnityAssertEqualNumber((_U_SINT)((67)), (_U_SINT)((intArray[0])), (((void *)0)), (_U_UINT)44, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((10)), (_U_SINT)((intArray[1])), (((void *)0)), (_U_UINT)45, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((intArray[2])), (((void *)0)), (_U_UINT)46, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-3)), (_U_SINT)((intArray[3])), (((void *)0)), (_U_UINT)47, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-30)), (_U_SINT)((intArray[4])), (((void *)0)), (_U_UINT)48, UNITY_DISPLAY_STYLE_INT);

}



void test_descendingBubbleSort_should_sort_all_10_elements_in_correct_order(){

 int intArray[] = {-1 ,33, 22, -9, 0, -200, 315, 11, 8, 3};

 descendingBubbleSort(intArray,(sizeof(intArray)/sizeof(int)));



 UnityAssertEqualNumber((_U_SINT)((315)), (_U_SINT)((intArray[0])), (((void *)0)), (_U_UINT)55, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((33)), (_U_SINT)((intArray[1])), (((void *)0)), (_U_UINT)56, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((22)), (_U_SINT)((intArray[2])), (((void *)0)), (_U_UINT)57, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((11)), (_U_SINT)((intArray[3])), (((void *)0)), (_U_UINT)58, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((intArray[4])), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((intArray[5])), (((void *)0)), (_U_UINT)60, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((intArray[6])), (((void *)0)), (_U_UINT)61, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-1)), (_U_SINT)((intArray[7])), (((void *)0)), (_U_UINT)62, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-9)), (_U_SINT)((intArray[8])), (((void *)0)), (_U_UINT)63, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((-200)), (_U_SINT)((intArray[9])), (((void *)0)), (_U_UINT)64, UNITY_DISPLAY_STYLE_INT);

}
