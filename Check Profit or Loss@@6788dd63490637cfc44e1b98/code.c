#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if (a > b){
        printf("Loss");
    }
    else if (a < b){
        printf("Profit");
    }
    else{
        printf("No profit No loss");
    }
    
    return 0;
}