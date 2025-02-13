#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 0; i < 0; i++){
        for (int j = a; j > 0; j--) {  // Inner loop prints stars
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
    }