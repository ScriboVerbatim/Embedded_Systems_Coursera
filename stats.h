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
 * @brief Contains declarations of functions used in stats.c
 * 
 * Functions declared consist those meant for finding mean, median, maximum, minimum and for sorting
 * an array using selection sort
 *
 * @author Abhilash Mishra 
 * @date 27/07/19
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
unsigned char find_median(unsigned char test[]);
/**
 * @brief Returns the median of an unsigned char array with an even number of elements
 *
 * This function takes an unsigned char array as a parameter and returns the average of its middle
 * two elements as the median.
 *
 * @param test The array whose median is to be found
 * @return The median of the given array
 */
 
 void sort_array(unsigned char test[]);
 /**
 * @brief Sorts an unsigned char array in descending order
 *
 * This function takes an unsigned char array as a parameter and sorts the same array in descending 
 * order.
 * @param test The array to be sorted
 */
 
 void print_array(unsigned char test[]);
 /**
 * @brief Prints an unsigned char array
 *
 * This function takes an unsigned char array as a parameter and prints its contents serially. 
 * 
 * @param test The array to be printed
 */
 
 unsigned char find_mean(unsigned char test[]);
 /**
 * @brief Returns the mean of an unsigned char array
 *
 * This function takes an unsigned char array as a parameter and returns the mean of its elements. 
 * 
 * @param test The array whose mean is to be found
 * @return The mean of the given array
 */
 
 unsigned char find_maximum(unsigned char test[]);
 /**
 * @brief Returns the maximum element of an unsigned char array
 *
 * This function takes an unsigned char array as a parameter, sorts it if unsorted and returns the 
 * maximum of its elements. 
 * 
 * @param test The array whose maximum element is to be found
 * @return The maximum element of the given array
 */
 unsigned char find_minimum(unsigned char test[]);
 /**
 * @brief Returns the minimum element of an unsigned char array
 *
 * This function takes an unsigned char array as a parameter, sorts it if unsorted and returns the 
 * minimum of its elements. 
 * 
 * @param test The array whose minimum is to be found
 * @return The mean of the given array
 */
 void print_statistics(unsigned char test[]);
 /**
 * @brief Prints the statistical parameters(mean, median, max, min) of an unsigned char array
 *
 * This function takes an unsigned char array as a parameter and prints its mean, median, max and 
 * min. 
 * 
 * @param test The array to be printed
 */


#endif /* __STATS_H__ */
