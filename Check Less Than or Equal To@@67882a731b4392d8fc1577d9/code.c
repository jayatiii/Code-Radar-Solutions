#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int j , b;
    scanf("%d %d", &j, &b);
    if (j <= b) {
        printf("True");
    }
    else {
        printf("False");
    }
    return 0;
}