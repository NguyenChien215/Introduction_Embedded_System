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
 *
 * @author NGUYEN QUANG CHIEN
 * @date 14 Jan 2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief A function that prints the statistics of an array including mininum, maximum, mean and median
 * 
 * This function will prints the statistics of an array of miminum, mamximum, mean and median
 * 
 * @param array The initial array need to do some algorithm
 * @param size  The size of an initial array
 * @return It doesn't return anything, it just print to the console 
 * 
*/
void print_statistics(unsigned char *array, unsigned int size);  


/**
 * @brief Given an arrray of data and a length, prints the array to the screen   
 * 
 * @param array The initial array need to do some algorithm
 * @param size  The size of an initial array
 * @return It doesn't return anything, it just print to the console 
 * 
*/
void print_array(unsigned char *array, unsigned int size);            
    

/**
 * @brief Given an array of data and a length, returns the median value   
 * 
 * @param array The initial array need to do some algorithm
 * @param size  The size of an initial array
 * @return It's will return the median number of the initial array
 * 
*/    
unsigned char find_median(unsigned char *array, unsigned int size);   


/**
 * @brief Given an array of data and a length, returns the mean value
 * 
 * @param array The initial array need to do some algorithm
 * @param size  The size of an initial array
 * @return It's will return the mean number of the initial array
 * 
*/
unsigned char find_mean(unsigned char *array, unsigned int size);     


/**
 * @brief Given an array of data and a length, returns the maximum value
 * 
 * @param array The initial array need to do some algorithm
 * @param size  The size of an initial array
 * @return It's will return the maxnimum number of the initial array
 * 
*/
unsigned char find_maximum(unsigned char *array, unsigned int size);  


/**
 * @brief Given an array of data and a length, returns the minimum value
 * 
 * @param array The initial array need to do some algorithm
 * @param size  The size of an initial array
 * @return It's will return the minimum number of the initial array
 * 
*/
unsigned char find_minimum(unsigned char *array, unsigned int size);  


/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest.
 * 
 * @param array The initial array need to do some algorithm
 * @param size  The size of an initial array
 * @return It doesn't return anything, it will sort the array from largest to smallest
 * 
*/
void sort_array(unsigned char *array, unsigned int size);            



#endif /* __STATS_H__ */
