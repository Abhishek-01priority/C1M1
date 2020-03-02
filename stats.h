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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * This function prints the Sorted, Mean, Median, Maximum and Minimum
 * of the particular array.
 * 
 *
 * 
 *
 * @return <Add Return Informaiton here>
 */
void print_statistics(unsigned char array[], unsigned int length);

/**
 * This function prints the array  
 *
 *
 */

void print_array( unsigned char array[], unsigned int length);

/**
 * This function returns the value of median of the array 
 *
 *
 */

unsigned int find_median(unsigned char array[], unsigned int length);

/**
 * This function prints the mean of the array
 *
 *
 */
int find_mean(unsigned char array[], unsigned int length);

/**
 * This function prints the sorted array. The sorting alogrithm
 * used is bubble sort. 
 *
 */
void sort_array(unsigned char array[], unsigned int length);

/**
 * This function prints the maximum of the array 
 *
 *
 */
unsigned char find_maximum(unsigned char array[], unsigned int length);

/**
 * This array prints the minimum value of the array 
 *
 *
 */

unsigned char find_minimum(unsigned char array[], unsigned int length);
#endif /* __STATS_H__ */
