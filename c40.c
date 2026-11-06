// file operation write in file
#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("students.txt", "r");
    
    if(fp == NULL){
        printf("Error in opening the file");
        return 0;
    }
    else{
    fprintf(fp,"HELLO WORLD");
    fprintf(fp,"\n%d\t%s\t%s%f",101,"Yuvraj",99.99);
    fprintf(fp,"\n%d\t%s\t%s%f",102,"Chacham",90.15);
    fprintf(fp,"\n%d\t%s\t%s%f",103,"Pande",79.56);
    fclose(fp);    
    }
    
    
    return 0;
}