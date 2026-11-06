// fgetc and fsetc
#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("text.txt","r");
    
    if(fp == NULL){
        printf("Error in opening the file");
        return 0;
    }
    
    // ascii a = 65, z = 90
    
    // for(int i=65; i<91; i++){
    //     fputc(i ,fp);
    // }
    
    // getc
    char c;
    while((c=getc(fp))!=EOF)
        printf("%c ",c);
    
    return 0;
}