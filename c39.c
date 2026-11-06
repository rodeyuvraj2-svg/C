// file operation scan from file
#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("students.txt", "r");
    
    if(fp == NULL){
        printf("Error in opening the file");
        return 0;
    }
    
    int r;
    char name[50];
    float p;
    
    while(fscanf(fp,"%d%s%f",&r,&name,&p) != EOF)
        printf("Roll no = %d\nName = %s\nPercentage = %f\n",r,name,p);
    
    return 0;
}