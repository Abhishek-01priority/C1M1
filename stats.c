/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
  print_statistics(test,SIZE);
}

void print_statistics(unsigned char array[], unsigned int length){

 unsigned int p;
 print_array(array,SIZE);
 printf("\n");
 sort_array(array,SIZE);

 print_array(array, length);

 printf("\nThe maximum of the array is %d\n",find_maximum(array,SIZE));
 printf("The minimum of the array is %d\n",find_minimum(array,SIZE));
 printf("The mean of the array is %d\n",find_mean(array,SIZE));
 printf("The median of the array is %d\n", find_median(array,SIZE));

}
 

void print_array( unsigned char array[], unsigned int length){

int i;

	for (i=0;i<length;i++){


		printf("%d ",array[i]);


	}

return;

}


unsigned int find_median(unsigned char array[], unsigned int length){
unsigned int median;

	if (length%2 == 0){
		
		median  = array[(length+1)/2];
	}

	else{

		median = (array[(length/2)] + array[(length/2)+1])/2;

	}
return median;

}

int find_mean(unsigned char array[], unsigned int length){

int i,sum=0;

	for (i=0;i<length;i++){

		sum = sum + array[i];
	}

return (sum/length);

}


void sort_array(unsigned char array[], unsigned int length){


unsigned int i,j;
unsigned char temp;

	for (i = 0;i<length-1;i++){

		for (j = 0;j<length-i-1;j++){

			if (array[j] >array[j+1] ){

				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}



}

unsigned char find_maximum(unsigned char array[], unsigned int length){

return array[length-1];

}

unsigned char find_minimum(unsigned char array[], unsigned int length){

return array[0];

}



/* Add other Implementation File Code Here */
