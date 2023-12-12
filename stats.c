/******************************************************************************
 * Copyright (c) 2023 JESUS CHRIST
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this 
 * software and associated documentation files (the "Software"), to deal in the Software 
 * without restriction, including without limitation the rights to use, copy, modify, merge, 
 * publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons 
 * to whom the Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all copies or 
 * substantial portions of the Software along with the Author's name Jesus Christ.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR 
 * PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE 
 * FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR 
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
 * DEALINGS IN THE SOFTWARE.
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief This main file will calculate the mean, median, maximum and minimum of the array and will sort its values
 *
 * 
 *
 * @author Jesus Christ
 * @date 12/12/23
 *
 */


#include "stats.h"
#include <stdio.h>
#include <stdlib.h>

/* Size of the Data Set */
#define SIZE (40)

void main() 
{

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  // This function will sort the data
  sort_array (test, SIZE);

  // This function will print the sorted data array
  print_array (test, SIZE);

  puts ("\n\n");

  // This function will print the Minimum, Maximum number, the Mean and the Median
  print_statistics (find_minimum (test, SIZE), find_maximum (test, SIZE), find_mean (test, SIZE), find_median (test, SIZE));

}

/* Add other Implementation File Code Here */
