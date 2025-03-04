#include "logic.h"

int count_local_min(int* array, int size) {
	int count = 0;

	if (size > 1 && array[0] < array[1])
	{
		count++;
	}

	for (int i = 1; i < size - 1; i++)
	{
		if (array[i] < array[i - 1] && array[i] < array[i + 1]) {
			count++;
		}
	}

	if (size > 1 && array[size - 1] < array[size - 2]) {
		count++;
	}

	return count;
}


int* get_local_min_indices(int* array, int size, int* count) {

	*count = count_local_min(array, size);
	int* indices = new int[*count];
	int j = 0;

	if (size > 1 && array[0] < array[1])
	{
		indices[j] = 0;
		j++;
	}

	for (int i = 1; i < size; i++)
	{
		if (array[i] < array[i - 1] && array[i] < array[i + 1])
		{
			indices[j] = i;
			j++;
		}
	}

	if (size > 1 && array[size - 1] < array[size - 2])
	{
		indices[j] = size - 1;
	}

	return indices;
}