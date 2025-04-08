// Your code here
#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    for (int i = a; i > 0; i--){
        for (int i = a; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
        printf("\n");
    }
    
    return 0;
    }