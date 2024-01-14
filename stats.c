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
 * @brief Doing some algorithm and statistic, then print the data to the console
 *
 * There are 4 main function for calculate: 
 *  Find maximum of the array
 *  Find minimum of the array
 *  Find mean value of the array
 *  Find medium value of the array
 * 
 * There are 2 function for print to the console:
 *  Print the array
 *  Print the statistics
 * 
 * There also an sort function for sorting the array
 *
 * @author NGUYEN QUANG CHIEN
 * @date 14 Jan 2024
 *
 */



#include <stdio.h>
#include "stats.h"
#include "math.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


  /* Statistics and Printing Functions Go Here */
  printf("The array after doing algorithm:");
  print_array(test, SIZE);
  print_statistics(test, SIZE);
  printf("The array before doing algorithm:");
  print_array(test, SIZE);

}

/* Add other Implementation File Code Here */
// Print the statistics of an array including minimum, maximum, mean and median
void print_statistics(unsigned char *array, unsigned int size)
{
  printf("The minimum of the array is: %d\n", find_minimum(array, size));
  printf("The maximum of the array is: %d\n", find_maximum(array, size));
  printf("The mean of the array is: %d\n", find_mean(array, size));
  printf("The median of the array is: %d\n", find_median(array, size));
}


// Print the array to the screen
void print_array(unsigned char *array, unsigned int size)
{
  for(unsigned int i = 0; i < size; i++)
  {
    printf(" %d",array[i]);
  }
  printf("\n");
}

// Find the mean number of an array
unsigned char find_mean(unsigned char *array, unsigned int size)
{
  unsigned int total = 0;
  unsigned char result = 0;

  for (unsigned int i = 0; i < size; i++)
  {
    total += array[i];
  }

  result = floor(total/size);

  return result;
}

// Sort the array from largest to smallest
void sort_array(unsigned char *array, unsigned int size)
{
  unsigned char temp;
  for(unsigned int i = 0; i < size; i++)
  {
    for(unsigned int j = i + 1; j < size; j++)
    {
      if(array[j] > array[i])
      {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}

// Find the median of the array
unsigned char find_median(unsigned char *array, unsigned int size)
{
  sort_array(array, size);

  unsigned int middle = size/2;

  return (array[middle - 1] + array[middle + 1])/2;
} 

// Find the maximum of the array
unsigned char find_maximum(unsigned char *array, unsigned int size)
{
  unsigned char max = array[0];
  unsigned char temp;

  for(unsigned int i = 1; i < size; i++)
  {
    if(array[i] > max)
    {
      max = array[i];
    }
  }

  return max;
}

// Find the minimum of the array
unsigned char find_minimum(unsigned char *array, unsigned int size)
{
  unsigned char min = array[0];
  unsigned char temp;

  for(unsigned int i = 1; i < size; i++)
  {
    if(array[i] < min)
    {
      min = array[i];
    }
  }

  return min;
}






