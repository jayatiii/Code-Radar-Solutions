#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a, c;
    int b;
    scanf("%s %d %s", &a &b &c);
    printf("Name: %s\n", a);
    printf("Age: %d\n", b);
    printf("Hobby: %s", c);
    return 0;
}