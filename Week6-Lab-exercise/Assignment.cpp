#include <stdio.h>

char *ip;
char string[50];

int S();

int main() {
    printf("Enter the string\n");
    scanf("%s", string);
    ip = string;
    printf("\n\nInput\tAction\n--------------------------------\n");
    if (S()) {
        if (*ip == '\0') {
            printf("\n--------------------------------\n");
            printf("String is successfully parsed\n");
        } else {
            printf("\n--------------------------------\n");
            printf("Error in parsing String\n");
        }
    } else {
        printf("\n--------------------------------\n");
        printf("Error in parsing String\n");
    }
}

int S() {
    printf("%s\tS\n", ip);
    if (*ip == '(') {
        ip++;
        if (S()) {
            if (*ip == ')') {
                ip++;
                return 1;
            }
        }
        return 0;
    } else if (*ip == 'a' || *ip == ';') {
        ip++;
        return 1;
    }
    return 0;
}

