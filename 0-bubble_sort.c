#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm.
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, arr_len;
    int is_bubble;

    if (array == NULL || size < 2)
    {
        return;
    }

    arr_len = size;
    is_bubble = 0;
    while (is_bubble == 0)
    {
        is_bubble = 1;
        for (i = 0; i < arr_len; i++)
        {
            if (array[i] > array[i + 1])
            {
                int tmp;

                tmp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tmp;
                print_array(array, size);
                is_bubble = 0;
            }
        }
        arr_len--;
    }
}
