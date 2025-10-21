#include <stdio.h>

int main() {
    int a, b, c, max;

    // 读取输入的三个整数
    scanf("%d,%d,%d", &a, &b, &c);

    // 找出三个数中的最大值
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    // 输出最大值
    printf("max=%d\n", max);

    return 0;
}

