#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_digits(int n) {
    char str[20];
    sprintf(str, "%d", n);
    int len = strlen(str);

    printf("%d has %d number%s, are ", n, len, len > 1 ? "s" : "");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
        if (i > 0) {
            printf(",");
        }
    }
    printf("\n");
}

int main() {
    FILE *file = fopen("input.txt", "r");
    if (!file) {
        perror("Failed to open file");
        return 1;
    }

    char line[20];
    while (fgets(line, sizeof(line), file)) {
        int n = atoi(line);
        print_digits(n);
    }

    fclose(file);
    return 0;
}

