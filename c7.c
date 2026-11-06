#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    printf("Enter length of data : ");
    int n;
    scanf("%d",&n);

    char data[n];

    printf("Enter data : ");
    scanf("%s",&data);
    int hasdigit = 0, hasUpper = 0, hasLower = 0; 

    for (int i = 0; i < strlen(data); i++) {
        if (isdigit(data[i])) {
            hasdigit = 1;
        }
        if (isupper(data[i])) {
            hasUpper = 1;
        }
        if (islower(data[i])) {
            hasLower = 1;
        }
    }


    if (hasdigit) {
        printf("String has digits");
    }
    if (hasUpper) {
        printf("\nString has upper characters");
    }
    if (hasLower) {
        printf("\nString has lower characters");
    }
    else {
        printf("\nString has some other characters");
    }

    return 0;
}