#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b;
    char c;
    scanf("%d %d %*c%c", &a, &b, &c);
    if (c == '+'){
        printf("%d", a + b);
    }
    else if(c == '-'){
        printf("%d", a - b);
    }
    else if(c == '*'){
        printf("%d", a * b);
    }
    else{
        printf("%d", a / b);
    }
    return 0;
}