#include <stdio.h>

int main() {
	int m, n;

	/* 读取矩阵的行列数 */
	scanf("%d %d", &m, &n);

	int matrix[m][n];

	/* 读取矩阵元素 */
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	int min_value = matrix[0][0];
	int min_row = 1;
	int min_col = 1;

	/* 遍历矩阵找最小值及其位置 */
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (matrix[i][j] < min_value) {
				min_value = matrix[i][j];
				min_row = i+ 1;
				min_col = j + 1;
			}
		}
	}

	/* 输出最小值所在的行号,列号及其值 */
	printf("%d %d %d\n", min_row, min_col, min_value);

	return 0;
}
