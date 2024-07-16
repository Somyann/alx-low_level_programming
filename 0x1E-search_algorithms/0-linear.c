#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - functions that implements the Linear search
 * array: array is a pointer to the first element of the array to search
 * size: size is the number of elements in array
 * value: value is the value to search for
 * Return: i on success and (-1) on failure
 */

int linear_search(int *array, size_t size, int value) {
	size_t i = 0;

	if (!array) 
		return (-1);
	for (i = 0; i < size; i++) {
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value) 
			return (i);
	}
	return (-1);
}
