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

}

uint8_t find_minimum(uint8_t* data, uint16_t length)
{

}


uint8_t find_maximum(uint8_t* data, uint16_t length)
{

}

uint8_t find_mean(uint8_t* data, uint16_t length)
{

}

uint8_t find_median(uint8_t* data, uint16_t length)
{

}

void sort_array(uint8_t* data, uint16_t length)
{

}





