`atoi` 是 C 标准库中的一个函数，它的功能是将字符串转换为整数。它的全称是 "ASCII to Integer"。以下是 `atoi` 的具体功能和用法：

### 功能
`atoi` 函数将以数字形式表示的字符串转换为对应的整数值。例如，字符串 `"123"` 将被转换为整数 `123`。

### 用法
函数原型如下：
```c
int atoi(const char *str);
```
- `str` 是一个指向以 null 结尾的字符串的指针，该字符串表示一个整数。

### 示例
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str1[] = "123";
    char str2[] = "-456";
    char str3[] = "0";

    int num1 = atoi(str1);
    int num2 = atoi(str2);
    int num3 = atoi(str3);

    printf("String: %s, Integer: %d\n", str1, num1); // 输出: String: 123, Integer: 123
    printf("String: %s, Integer: %d\n", str2, num2); // 输出: String: -456, Integer: -456
    printf("String: %s, Integer: %d\n", str3, num3); // 输出: String: 0, Integer: 0

    return 0;
}
```

### 注意事项
- `atoi` 函数不会检测转换过程中是否发生错误，例如字符串中包含非数字字符，或者转换结果超出 `int` 类型的范围。因此，使用 `atoi` 时需要确保输入的字符串是有效的数字。
- 为了处理这些潜在的问题，C99 标准引入了更安全的函数 `strtol`，它可以检测错误并提供更多的控制。

在前面的代码中，`atoi` 函数用于将用户输入的字符串转换为整数，这样程序可以进一步处理这些整数。

如果需要更健壮的错误处理，可以考虑使用 `strtol`，示例如下：
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    while (fgets(input, sizeof(input), stdin)) {
        input[strcspn(input, "\n")] = 0; // 去除换行符

        char *endptr;
        long int number = strtol(input, &endptr, 10);

        if (*endptr != '\0') {
            printf("Invalid input: %s\n", input);
            continue;
        }

        int digits[10];
        int count = 0;

        do {
            digits[count++] = number % 10;
            number /= 10;
        } while (number > 0);

        printf("%s have %d numbers, are ", input, count);
        for (int i = 0; i < count; i++) {
            if (i > 0) {
                printf(",");
            }
            printf("%d", digits[i]);
        }
        printf("\n");
    }
    return 0;
}
```
这个示例中使用 `strtol` 代替 `atoi`，并且可以检测到输入是否为有效的整数。
