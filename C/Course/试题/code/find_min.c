#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min_value = arr[0];
    int min_position = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] <= min_value) {
            min_value = arr[i];
            min_position = i + 1;
        }
    }

    printf("%d %d\n", min_position, min_value);

    return 0;
}

