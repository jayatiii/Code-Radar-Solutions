#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   char x[12];
   scanf("%s" , &x);
   printf("You entered: %s" , x);
   return 0;
}