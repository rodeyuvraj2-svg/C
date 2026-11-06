// Len without len function

#include <stdio.h>

int length(char[]);
int main()
{
    char p[16] = "Yuvraj";
    printf("Size = %d",length(p));
    return 0;
}

int length(char p[]){
    int n = 0;
    int count = 0;
    while(p[n] != '\0'){
        count+=1;
        n+=1;
    }
    return count;
}