#include <stdio.h>
#include <string.h>

int main() {
    char number[6]; // 定义一个字符串来存储不超过5位的正整数
    int length, i;

    // 读取输入的正整数
    scanf("%s", number);

    // 获取数字的长度
    length = strlen(number);

    // 输出位数
    printf("%d\n", length);

    // 顺序输出每一位数字，且每一位数字之后输出一个空格
    for (i = 0; i < length; i++) {
        printf("%c ", number[i]);
    }
    printf("\n");

    // 逆序输出每一位数字，且每一位数字之后输出一个空格
    for (i = length - 1; i >= 0; i--) {
        printf("%c ", number[i]);
    }
    printf("\n");

    return 0;
}

