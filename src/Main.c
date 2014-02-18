#include <stdio.h>
#include "descendingBubbleSort.h"

int main(void){

	int size = 5;
	int value, count;
	int intArray[5];
	printf("This is an descending BubbleSort program.\n");
	printf("-----------------------------------------\n");
	printf("You have an array with size of %i.\n\n", size);
	
	for(count = 0; count < size; count++){
		printf("Please enter value into array of index %i :",count);
		scanf("%i",&value);
		intArray[count] = value;
	}
	
	printf("\nHere is you result : \n");
	printf("---------------------\n");
	descendingBubbleSort(intArray,size);
	
	for(count = 0; count < size; count++){
		if(count == (size-1)){
			printf("%i ",intArray[count]);
			break;
		}
		printf("%i -> ",intArray[count]);
	}
	return 0;
}