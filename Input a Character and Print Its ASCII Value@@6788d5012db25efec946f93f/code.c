#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char b;
    scanf("%c", &b);
    printf("ASCII Value: %d", b);
    return 0;
}