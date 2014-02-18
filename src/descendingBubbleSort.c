#include "descendingBubbleSort.h"

void takeSmallerAndSwapToRight(int *firstVal,int *secondVal){
	int temp;
	
	if(*firstVal < *secondVal){
	temp = *secondVal;
	*secondVal = *firstVal;
	*firstVal = temp;
	}
}

void sortSmallestToRightMost(int *array, int size){
	
	int i;
	for(i=0;i < (size-1);i++){
		takeSmallerAndSwapToRight(&array[i],&array[i+1]);
	}
}
