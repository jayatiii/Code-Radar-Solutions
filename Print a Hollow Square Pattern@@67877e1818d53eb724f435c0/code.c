#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 0; i <= a - 1; i++) {
        for (int j = 0; j <= a - 1; j++) {
        if (i == 0 || i == a-1 || j == 0 || j == a-1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
    }
    