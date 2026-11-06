// fgets and fputs
#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("string.txt","r");
    
    if(fp == NULL){
        printf("Error in opening the file");
        return 0;
    }
    
    // fputs("Heyy this is yuvraj\n",fp);
    // fputs("Last day of C programming.",fp);
    
    char buffer[1000];
    fgets(buffer, 1000, fp);
    printf("%s",buffer);
    
    fclose(fp);
    return 0;
}