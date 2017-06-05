/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n);
{
    if (value < 0)
        return false;
    else:
        return binary_search(value, values, n)    
}
/**
 * Sorts array of n values.
 */
void sort(int values[], int n);
{
    selection_sort(values, n)
    return;
}
// Search algorithms
bool linear_search(int value, int values[], int n)
{
    for (int i = 0; i < n; i ++)
        if (values[i] == value)
            return true;
        else:
            return false
}

bool binary_search(int value, int values[], int n)
{
    int end = n - 1;
    int start = 0;
    while (end >= start)
    {
        int middle = (start + end) / 2;
        if (values[middle] == value)
            return true;
        else if (values[middle] > value)
            end = middle - 1
        else
            start = middle + 1
    }
    return false;
}

void bubble_sort(int values[], int n)
{
    bool iter;
    do
    {
        iter = false;
        for (int i = 0; i < n - 1; i ++)
        {
            if (values[i] > values[i + 1])
            {
                int temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
                iter = true
            }
        }
    } while (iter);
    return;
}
void selection_sort(int values[], int n)
{
    int temp;
    for (int i = 0; i < n; i ++)
    {
        int smallest_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (values[smallest_index] > values[j])
            smallest_index = j
        }
        // swap values
        temp = values[smallest_index];
        values[smallest_index] = value[j];
        value[j] = temp;
    }
}
