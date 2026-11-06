// Student

#include <stdio.h>

int main()
{
    struct Student{
        int roll_no;
        char name[30];
        float marks;
    };
    
    struct Student s[5];
    
    printf("Enter Data:\n");
    
    for(int i=0; i<5; i++){
        printf("\nEnter Roll no: "); scanf("%d",&s[i].roll_no);
        printf("Enter Name: "); scanf("%s",s[i].name);
        printf("Enter Marks: "); scanf("%f",&s[i].marks);
    }
    
    printf("\n\nData of 5 students: ");
    
    for(int i=0; i<5; i++){
        printf("\n\nEnter Roll no: %d",s[i].roll_no);
        printf("\nEnter Name: %s",s[i].name);
        printf("\nEnter Marks: %f",s[i].marks);
    }
    
    return 0;
}