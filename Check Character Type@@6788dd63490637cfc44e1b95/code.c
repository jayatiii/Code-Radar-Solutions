#include <stdio.h>
int main() {
    char a;
    scanf("%c", &a);
    if (isdigit(a)) {
        printf("Digit");
    } else if (isalpha(a)) {
        a = tolower(a);
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        printf("Special character\n");
    }
    return 0;
}