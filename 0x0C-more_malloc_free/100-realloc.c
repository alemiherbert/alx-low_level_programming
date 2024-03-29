#include "main.h"

/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to the block of memory
 * @old_size: the size of the old block
 * @new_size: the size of the new block
 *
 * Return: pointer to the allocated block of memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_block, *temp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		new_block = malloc(new_size * sizeof(char));
		if (!new_block)
			return (NULL);
		free(ptr);
		return (new_block);
	}
	if (ptr && !new_size)
	{
		free(ptr);
		return (NULL);
	}

	new_block = malloc(new_size * sizeof(char));
	if (!new_block)
		return (NULL);

	temp = (char *) ptr;
	for (i = 0; i < old_size; i++)
		new_block[i] = temp[i];
	free(ptr);
	return (new_block);
}
