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
 * @file stats.h 
 * @brief functions declaration
 *
 * this file contains the function declaration for the tools 
 * to be used in the main function
 *
 * @author Mohamed Merdan
 * @date 15/5/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

#include <stdint.h>

/**
 * @brief prints the stats of the data set
 *
 * takes the data calculated by the other function tools
 * and prints them to the screen
 *
 * @param min the minimum value of the dataset
 * @param max the maxmum value of the dataset
 * @param mean the mean value of the dataset
 * @param median the median value of the dataset
 *
 * @return returns nothing, prints directly to the screen
 */
void print_statistics(uint8_t min, uint8_t max, uint8_t mean, uint8_t median);

void print_array(uint8_t* data, uint16_t length);

uint8_t find_minimum(uint8_t* data, uint16_t length);

uint8_t find_maximum(uint8_t* data, uint16_t length);

uint8_t find_mean(uint8_t* data, uint16_t length);

uint8_t find_median(uint8_t* data, uint16_t length);

void sort_array(uint8_t* data, uint16_t length);
#endif /* __STATS_H__ */
