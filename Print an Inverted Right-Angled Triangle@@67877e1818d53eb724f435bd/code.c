#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    for (int i = a; i > 0; i--){
        for (int j = 0; j < i; j++) {  // Inner loop prints stars
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
    }