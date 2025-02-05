#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    float b;
    scanf("%d", &a);
    b= 3.14 * a * a;
    printf("Area: %.2f", b);
    return 0;
}