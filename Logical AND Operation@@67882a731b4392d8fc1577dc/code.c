#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int j , b;
    scanf("%d %d", &j, &b);
    if (j > 0 && b > 0) {
        printf("True");
    }
    else {
        printf("False");
    }
    return 0;
}