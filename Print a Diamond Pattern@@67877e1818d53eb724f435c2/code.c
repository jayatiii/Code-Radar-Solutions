#include <stdio.h>
int main(){
    int a, i, j;
    scanf("%d", &a);
    for (i = 1; i <= a; i++){
        for (j = 1; j <= a - i; j++){
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++){
            printf("*");
        }
        printf("\n");
    }
    // Lower part of the diamond
    for (i = a - 1; i >= 1; i--){
        for (j = 1; j <= a - i; j++){
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++){
            printf("*");
        }
        printf("\n");
    }
}