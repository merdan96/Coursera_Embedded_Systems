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
	print_array(test, SIZE);

	sort_array(test, SIZE);

	print_array(test, SIZE);

	uint8_t min, max, mean, median;

	min = find_minimum(test, SIZE);
	max = find_maximum(test, SIZE);
	mean = find_mean(test, SIZE);
	median = find_median(test, SIZE);
	
	print_statistics(min, max, mean, median);

}

void print_statistics(uint8_t min, uint8_t max, uint8_t mean, uint8_t median)
{
	printf("The Following data shows\nthe statistical analysis of the given dataset\nMinimum Value = %d\nMaximum Value = %d\nMean Value = %d\nMedian Value = %d\n",min, max, mean, median);

}

void print_array(uint8_t* data, uint16_t length)
{
	printf("[");
	uint16_t i;
	for(i = 0;i < length - 1;i++){
		printf("%d, ", data[i]);
		
		if(i % 8 == 0 && i != 0) printf("\n");
	}
	printf("%d]\n", data[i]);
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

	return sum/length;
}

uint8_t find_median(uint8_t* data, uint16_t length)
{
	uint32_t median = 0;
	if(length % 2 == 0){
		median = data[length/2];
	}
	else{
		uint8_t a,b;
		a = data[length/2 - 1];
		b = data[length/2];
		median = (a + b) / 2;
	}
	
	return median;
}

void sort_array(uint8_t* data, uint16_t length)
{
	uint8_t tempA, tempB;
	for(uint16_t n = 0;n < length;n++){
		for(uint16_t i = 0;i < length-1;i++){
			tempA = data[i];
			tempB = data[i + 1];
			if(tempA < tempB){
				data[i] = tempB;
				data[i + 1] = tempA;		
			}
		}
	}
}






