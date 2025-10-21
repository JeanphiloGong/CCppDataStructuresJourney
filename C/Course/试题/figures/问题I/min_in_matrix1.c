#include <stdio.h>

int main() {
	int m,n;
	scanf("%d %d", &m, &n);

	int arr[m][n];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	int min = arr[0][0];
	int min_row = 0;
	int min_col = 0;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] <= min) {
				min = arr[i][j];
				min_row = i;
				min_col = j;
			}
			}
	}

	printf("%d %d %d", min_row + 1, min_col + 1, min);

	return 0;
}

