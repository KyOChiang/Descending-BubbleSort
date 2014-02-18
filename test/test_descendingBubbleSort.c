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