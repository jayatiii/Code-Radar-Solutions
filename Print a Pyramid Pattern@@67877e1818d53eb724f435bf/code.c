#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++){
        for (int j = 0; j <= i; j+=2) { 
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
    }