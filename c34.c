// concat 
#include <stdio.h>

char *con(char[],char[]);
int main()
{
    char p1[16] = "Yuvraj";
    char p2[15] = " Hey";
    printf("Concat = %s",con(p1,p2));
    return 0;
}

char *con(char p1[], char p2[]){
    int i=0,j=0;
    
    while(p1[i]!='\0'){
        i++;
    }
    
    while(p2[j]!='\0'){
        p1[i]=p2[j];
        i++;
        j++;
    }
    p1[i] = '\0';
    return p1;
}