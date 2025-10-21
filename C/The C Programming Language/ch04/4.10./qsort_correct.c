#include <stdio.h>

/* Function prototypes */
void qsort(int v[], int left, int right);
void swap(int v[], int i, int j);

int main() {
	/* Examplt array */
	int arr[] = {5, 9, 1, 3, 4, 6, 6, 3, 2};
	int n = sizeof(arr)/ sizeof(arr[0]);

	/* Print the original array */
	printf("Original array: \n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	/* Calling the quicksort function */
	qsort(arr, 0, n - 1);

	/* Print the sorted array */
	printf("Sorted array:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}




/* Quick sort function: sorts the subarray v[left] ... v[tight] into increasing order */
void qsort(int v[], int left, int right)
{
	int i, last;
	void swap(int v[], int i, int j);

	/* Base case: If the array has fewer than two elements, do nothing */
	if (left >= right)
		return;

	/* Move the middle elemnt to the start of the subarray to usse as a pivot */
	swap(v, left, (left + right) /2);

	/* Partitioning step: */
	last = left;
	for (i = left + 1; i <= right; i++) {
		/* If current element is smaller than the pivot, swap it with the element at 'last' */
		if (v[i] < v[left])
			swap(v, ++last, i);
	}

	/* Place the pivot into its correct position */
	swap(v, left, last);

	/* Recursively sort into its correct position */
	qsort(v, left, last-1);

	/* Recursively sort the subarray after the pivot */
	qsort(v, last + 1, right);
}

/* swap: exchanges the elements at indices i and j in array v */
void swap(int v[], int i, int j)
{
	int temp;

	/* Perform the swap */
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

