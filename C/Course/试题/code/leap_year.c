#include <stdio.h>

int main() {
    int year;

    // 读取输入的年份
    scanf("%d", &year);

    // 判断是否为闰年
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("leap year\n");
    } else {
        printf("not leap year\n");
    }

    return 0;
}

