#include "function_pointers.h"

/**
 * array_iterator - perform an action on every element of an array
 * @array: the array;
 * @size: the size of the array
 * @action: the function that does the work
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if (array && action && size > 0)
        for (i = 0; i < size; i++)
            action(array[i]);
}
