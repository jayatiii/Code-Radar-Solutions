#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++){
        
            printf("* ");
        
        printf("\n");
    }
    
    return 0;
    }