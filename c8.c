// Grade system

#include <stdio.h>

int main() {
S
    char name[20];
    float marks[5], total = 0;

    printf("Enter name of the student : "); scanf("%s", &name);
    printf("Enter marks of 5 subjects : ");
    
    for (int i = 0; i<5; i++) {
        scanf("%f",&marks[i]);
        total += marks[i];
    }

    float percentage = (total / 500) * 100;
    printf("\n");

    if (percentage <=100 && percentage >=85) {
        printf("Grade A");
    }
    else if (percentage <=84 && percentage >=75) {
        printf("Grade B");
    }
    else if (percentage <=74 && percentage >=65) {
        printf("Grade C");
    }
    else if (percentage <=64 && percentage >=55) {
        printf("Grade D");
    }
    else if (percentage <=54 && percentage >=40) {
        printf("Grade E");
    }
    else {
        printf("FAIL");
    }

    return 0;
}