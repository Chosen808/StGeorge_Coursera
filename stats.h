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
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */

void print_statistics (unsigned char input, int output)
{
    
}

void print_array (unsigned char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf ("Array %d = %d \n", array[i]);
    }
}

unsigned char find_median (unsigned char array[], int size)
{
    if (size % 2 == 1)
    {
        unsigned char index = (size / 2) + 1;

        return array[index];
        
    }

    else if (size % 2 == 0)
    {
        unsigned char index1 = size / 2;
        unsigned char index2 = (size / 2) + 1;

        unsigned char median = (array[index1] + array[index2]) / 2;

        return median;
    }
}

unsigned char find_mean (unsigned char array[], int size)
{
    unsigned char sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    unsigned char average = sum / size;

    return average;
}

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

unsigned char sort_array (unsigned char array[], int size)
{
    unsigned char temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; i++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    return array;
}

#endif /* __STATS_H__ */
