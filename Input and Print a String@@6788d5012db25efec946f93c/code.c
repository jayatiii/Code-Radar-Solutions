#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   char x[4];
   scanf("%s" , &x);
   printf("You entered: %s" , x);
   return 0;
}