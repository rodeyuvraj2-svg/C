// Recusrsion Factorial 

#include <stdio.h>

int fact(int n) {
    if (n>0){
        if (n == 1){
            return 1;
        }
        else{
            return n * fact(n-1);
        }
    }
    else{
        printf("NUM is 0 or negative");
        return 0;
    }
}

int main()
{
    int num;
    
    printf("Enter number : "); scanf("%d",&num);
    printf("Result : %d",fact(num));
    return 0;
}