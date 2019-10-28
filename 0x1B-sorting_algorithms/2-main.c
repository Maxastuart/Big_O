#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	int a2[] = {5, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	size_t n = sizeof(array) / sizeof(array[0]);
	size_t n2 = sizeof(a2) / sizeof(a2[0]);

	print_array(array, n);
	printf("\n");
	selection_sort(array, n);
	printf("\n");
	print_array(array, n);
	printf("-----\n");
	print_array(a2, n2);
	printf("\n");
	selection_sort(a2, n2);
	printf("\n");
	print_array(a2, n2);

	return (0);
}
