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
 * @brief A data processing function header file
 *
 * This file contains functions that can analyze an array of unsigned char data
 * and report analytics on the maximum, minimum, mean and median of the data set.
 * It can also reorder the data set from large to small.
 *
 * @author Jesus Christ
 * @date 11/12/23
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/*
This function will print Minimum, Maximum Number, the Mean and Median
*/ 
void print_statistics (unsigned char min, unsigned char max, double mean, double median);

/*
This function will print the array
*/
void print_array (unsigned char array[], int size);

/*
This function will find the median of the data from the array
*/
double find_median (unsigned char array[], int size);

/*
This function will find the mean of the data from the array
*/
double find_mean (unsigned char array[], int size);

/*
This function will find the largest number in the array
*/
unsigned char find_maximum (unsigned char array[], int size);

/*
This function will find the smallest number in the array
*/
unsigned char find_minimum (unsigned char array[], int size);

/*
This function will sort the data in the array in Descending order
*/
void sort_array (unsigned char array[], int size);

/**
 * @brief This function will print Minimum, Maximum Number, the Mean and Median
 *
 * This function will print Minimum, Maximum Number, the Mean and Median which
 * has been created by the other function in this file
 *
 * @param unsigned char min     This parameter will take minimum number
 * @param unsigned char max     This parameter will take the maximum number
 * @param double mean           This parameter will take the mean number
 * @param double median         This parameter will take the median number
 *
 * @return This function does not return any value.
 */
void print_statistics (unsigned char min, unsigned char max, double mean, double median)
{
    printf ("The Minimum Number is %d \n", min);
    printf ("The Maximum Number is %d \n", max);
    printf ("The Mean is %.0f \n", mean);
    printf ("The Median is %.0f \n", median);
}

/**
 * @brief This function will print the array
 *
 * This function will print the array
 *
 * @param unsigned char array[] This parameter will take the array
 * @param int size              This parameter will take the size of the array
 *
 * @return This function does not return any value.
 */
void print_array (unsigned char array[], int size)
{
    for (int i = 0, j = 0; i < size, j < size; i++, j++)
    {
        printf ("Array %d = %d \n", j ,array[i]);
    }
}

/**
 * @brief This function will find the median of the data from the array
 *
 * This function will find the median of the data from the array. It will
 * first sort the data in the array via the sort function, then check if 
 * there is a odd set of numbers or even set of numbers and calculate the 
 * median value.
 *
 * @param unsigned char array[] This parameter will take the array
 * @param int size              This parameter will take the size of the array
 *
 * @return This function returns a double value.
 */
double find_median (unsigned char array[], int size)
{
    sort_array (array, size);

    if (size % 2 == 1)
    {
        int index = (size / 2);

        return (double)array[index];
        
    }

    else if (size % 2 == 0)
    {
        int index1 = (size / 2) - 1;
        int index2 = (size / 2);

        double median = (double)(array[index1] + array[index2]) / 2;

        return median;
    }
}

/**
 * @brief This function will find the mean of the data from the array
 *
 * This function will find the mean of the data from the array. It will
 * sum up the numbers in the array and then calculate the average, casting
 * the int to a double. 
 *
 * @param unsigned char array[] This parameter will take the array
 * @param int size              This parameter will take the size of the array
 *
 * @return This function returns a double value.
 */
double find_mean (unsigned char array[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    double average = (double)sum / size;

    return average;
}

/**
 * @brief This function will find the largest number in the array
 *
 * This function will find the largest number in the array. It will first
 * sort the data using the bubble sort algorithm, then return the largest
 * ordered number. 
 *
 * @param unsigned char array[] This parameter will take the array
 * @param int size              This parameter will take the size of the array
 *
 * @return This function returns a unsigned char value.
 */
unsigned char find_maximum (unsigned char array[], int size)
{
    unsigned char temp; 

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    return array[size - 1];
}

/**
 * @brief This function will find the smallest number in the array
 *
 * This function will find the smallest number in the array. It will first
 * sort the data using the bubble sort algorithm, then return the smallest
 * ordered number. 
 *
 * @param unsigned char array[] This parameter will take the array
 * @param int size              This parameter will take the size of the array
 *
 * @return This function returns a unsigned char value.
 */
unsigned char find_minimum (unsigned char array[], int size)
{
    unsigned char temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    return array[0];
}

/**
 * @brief This function will sort the data in the array in Descending order
 *
 * This function will sort the data in the array in Descending order. This is
 * the bubble sort algorithm which is used to sort the data in the array in 
 * descending order. 
 *
 * @param unsigned char array[] This parameter will take the array
 * @param int size              This parameter will take the size of the array
 *
 * @return This function returns no value.
 */
void sort_array (unsigned char array[], int size)
{
    unsigned char temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

#endif /* __STATS_H__ */
