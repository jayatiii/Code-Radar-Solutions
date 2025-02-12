#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a );
    if(a == 0 || a == 1){
        printf("Prime");
    }
    else{
        for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            return 0;
        }
    }
    } 
    return 0;
}