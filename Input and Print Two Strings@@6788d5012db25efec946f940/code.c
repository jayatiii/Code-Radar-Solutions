#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[100];
    char b[100];
    scanf("%s %s", &a , &b);
    print("You entered: %s and \n %s", a , b);
    return 0;
}