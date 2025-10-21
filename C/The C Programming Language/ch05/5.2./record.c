swap(a, b)

void swap(int x, int y) /* WRONG */
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}

// The way to obtain the desired effect is for the calling program to pass pointers to the values to be changed
swap(&a, &b);

void swap(int *px, int *py) /* interchange *px and *py */
{
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
}


int n, array[SIZE], getint(int *);

for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
;

