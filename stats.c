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
 * @file stats.c 
 * @brief main code and functions definitions
 *
 * this code contains the tools functions implementation like 
 * 	  max,min,mean,sort,print,median
 *        and the main function code
 *
 * @author Mohamed Merdan
 * @date 15/5/2020
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


}

void print_statistics(uint8_t min, uint8_t max, uint8_t mean, uint8_t median)
{

}

void print_array(uint8_t* data, uint16_t length)
{
	printf("[ ");
	uint16_t i;
	for(i = 1;i < length;i++){

		//print data point in a 3-digit format
		printf("%3d, ", data[i - 1]);

		//breakline every 8 points of data to increase readability
		if(i % 8 == 0) printf("\n ");

	}
	printf("%3d ]\n", data[i - 1]);
}

uint8_t find_minimum(uint8_t* data, uint16_t length)
{
	uint8_t min = 255;
	
	for(uint16_t i = 0;i < length;i++){

		if(data[i] < min){
			min = data[i];
		}	
	}

	return min;
}


uint8_t find_maximum(uint8_t* data, uint16_t length)
{
	uint8_t max = 0;
	
	for(uint16_t i = 0;i < length;i++){

		if(data[i] > max){
			max = data[i];
		}	
	}

	return max;
}

uint8_t find_mean(uint8_t* data, uint16_t length)
{
	uint32_t sum = 0;
	
	for(uint16_t i = 0;i < length;i++){
		sum += data[i];
	}
	
	//return the mean value
	return sum/length;
}

uint8_t find_median(uint8_t* data, uint16_t length)
{

}

void sort_array(uint8_t* data, uint16_t length)
{
	for(uint16_t m = 0;m < length;m++){
		//goes through all the elemnts and records the maximum data point and its index
		uint8_t max = 0;
		uint16_t maxIndex = 0;

		for(uint16_t i = m + 1;i < length;i++){

			if(data[i] > max){
				max = data[i];
				maxIndex = i;			
			}
		}

		//swaping the current elemnt with the maximum data point 
		//in the set infront of it incase it's bigger than it(current data point)
		if(data[m] < max){
			data[maxIndex] = data[m];
			data[m] = max;	
		}
	}
}





