#include <stdio.h>
#include <math.h>

// 判断一个数是否为素数的函数
int is_prime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int m, n;

    // 读取输入的组数
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        // 读取每个正整数
        scanf("%d", &n);

        // 判断是否为素数并输出结果
        if (is_prime(n)) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}

