#include "descendingBubbleSort.h"

void takeSmallerAndSwapToRight(int *firstVal,int *secondVal){
	int temp;
	
	if(*firstVal < *secondVal){
	temp = *secondVal;
	*secondVal = *firstVal;
	*firstVal = temp;
	}
}