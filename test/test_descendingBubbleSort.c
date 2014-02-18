#include "unity.h"
#include "descendingBubbleSort.h"

void setUp(){
}

void tearDown(){

}

void test_smallerVal_should_swap_to_right_within_2_val_only(){
	int intArray[] = {4,66};
	takeSmallerAndSwapToRight(&intArray[0],&intArray[1]);
	TEST_ASSERT_EQUAL(66,intArray[0]);
	TEST_ASSERT_EQUAL(4,intArray[1]);
}

void test_smallerVal_should_not_swap_if_in_order(){
	int intArray[] = {66,4};
	takeSmallerAndSwapToRight(&intArray[0],&intArray[1]);
	TEST_ASSERT_EQUAL(66,intArray[0]);
	TEST_ASSERT_EQUAL(4,intArray[1]);
}

void test_smallerVal_should_not_swap_if_in_order_for_neg_no(){
	int intArray[] = {-33,-99};
	takeSmallerAndSwapToRight(&intArray[0],&intArray[1]);
	TEST_ASSERT_EQUAL(-33,intArray[0]);
	TEST_ASSERT_EQUAL(-99,intArray[1]);
}

void test_smallerVal_should_swap_if_not_in_order_for_neg_no(){
	int intArray[] = {-187,-22};
	takeSmallerAndSwapToRight(&intArray[0],&intArray[1]);
	TEST_ASSERT_EQUAL(-22,intArray[0]);
	TEST_ASSERT_EQUAL(-187,intArray[1]);
}

void test_sortSmallestToRightMost_should_move_largest_to_right_most_for_5elements(){
	// Just to swap the smallest to right, might not swap the
	// second or third smallest in correct order.
	int intArray[] = {-30,67,10,2,-3};
	sortSmallestToRightMost(intArray,(sizeof(intArray)/sizeof(int)));
	TEST_ASSERT_EQUAL(67,intArray[0]);
	TEST_ASSERT_EQUAL(10,intArray[1]);
	TEST_ASSERT_EQUAL(2,intArray[2]);
	TEST_ASSERT_EQUAL(-3,intArray[3]);
	TEST_ASSERT_EQUAL(-30,intArray[4]);
}

void test_descendingBubbleSort_should_sort_all_10_elements_in_correct_order(){
	int intArray[] = {-1 ,33, 22, -9, 0, -200, 315, 11, 8, 3};
	descendingBubbleSort(intArray,(sizeof(intArray)/sizeof(int)));
	
	TEST_ASSERT_EQUAL(315,intArray[0]);
	TEST_ASSERT_EQUAL(33,intArray[1]);
	TEST_ASSERT_EQUAL(22,intArray[2]);
	TEST_ASSERT_EQUAL(11,intArray[3]);
	TEST_ASSERT_EQUAL(8,intArray[4]);
	TEST_ASSERT_EQUAL(3,intArray[5]);
	TEST_ASSERT_EQUAL(0,intArray[6]);
	TEST_ASSERT_EQUAL(-1,intArray[7]);
	TEST_ASSERT_EQUAL(-9,intArray[8]);
	TEST_ASSERT_EQUAL(-200,intArray[9]);
}
