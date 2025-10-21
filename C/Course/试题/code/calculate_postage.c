#include <stdio.h>

int main() {
    int weight;
    char urgent;
    
    // 读取输入的重量和是否加急
    scanf("%d %c", &weight, &urgent);

    int cost = 8;  // 基本费用

    // 计算超重部分的费用
    if (weight > 1000) {
        int extraWeight = weight - 1000;
        int extraCost = ((extraWeight + 499) / 500) * 4;  // 向上取整计算每500克的费用
        cost += extraCost;
    }

    // 如果选择加急，多收5元
    if (urgent == 'y') {
        cost += 5;
    }

    // 输出邮费
    printf("%d\n", cost);

    return 0;
}

