#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int j;
    scanf("%d ", &j);
    if (!(j >= 0)) {
        printf("True");
    }
    else {
        printf("False");
    }
    return 0;
}