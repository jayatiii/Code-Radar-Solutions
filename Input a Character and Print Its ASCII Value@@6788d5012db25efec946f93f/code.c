#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c", &ch);
    printf("ASCII Value: %d", ch);
    return 0;
}