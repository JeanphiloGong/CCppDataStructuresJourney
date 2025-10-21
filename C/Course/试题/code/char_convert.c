#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    // 读取输入的字符
    scanf("%c", &c);

    // 判断是否为大写字母，如果是则转换为小写字母
    if (isupper(c)) {
        c = tolower(c);
    }

    // 输出处理后的字符
    printf("%c\n", c);

    return 0;
}

