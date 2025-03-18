#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        // Print spaces before stars
        for (int j = 0; j < a - i - 1; j++) {
            printf(" ");  // Print leading spaces
        }
        
        // Print stars
        for (int j = 0; j <= i * 2; j++) {
            printf("*");  // Print stars
        }
        
        // Move to the next line after each row
        printf("\n");
    }
    return 0;
    }