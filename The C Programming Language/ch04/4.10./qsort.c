/* qsort: sort v[left] ... v[right] into increasing order */
void qsort(int v[], int left, int right)
{
	int i, last;
	void swap(int v[], int i, int j);
	if (left >= right) /* do nothing if array contains */
		return; /* fewer than two elements */
	swap(v, left, (left + right)/2); /* move partition elem */
	last = left;
	for (i = left + 1; i <= right; i++) /* partition */
		if (v[i] < v[left])
			swap(v, ++last, i);
	swap(v, left, last);
	qsort(v, left, last-1);
	qsort(v, lats+1, right);
}

