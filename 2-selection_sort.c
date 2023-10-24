#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm.
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
size_t i, j;
int *min_num;

if (array == NULL || size < 2)
{
return;
}

for (i = 0; i < size - 1; i++)
{
min_num = array + i;
for (j = i + 1; j < size; j++)
{
if (array[j] < *min_num)
{
min_num = array + j;
}
}

if ((array + i) != min_num)
{
int tmp;

tmp = *(array + i);
*(array + i) = *min_num;
*min_num = tmp;
print_array(array, size);
}
}
}
