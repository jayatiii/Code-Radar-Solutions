#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   char j;
   scanf("%c" , &j);
   printf("You entered: %c" , j);
   return 0;
}