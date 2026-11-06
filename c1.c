#include<stdio.h>

int main(){

    int roll;
    char name[20];
    char gender = 'M';
    float percentage;
    float s1, s2, s3, s4;

    printf("Enter Name = ");
    scanf("%s", &name);

    printf("\nEnter Roll no = ");
    scanf("%d", &roll);

    printf("\nEnter marks of 5 subjects : ");
    scanf("%f %f %f %f ", &s1, &s2, &s3, &s4);

    float total = s1+s2+s3+s4;
    percentage = (total / 4);

    printf("Roll no = %d\n", roll);
    printf("Name = %s\n", name);
    printf("Gender = %c\n", gender);
    printf("Total = %f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}