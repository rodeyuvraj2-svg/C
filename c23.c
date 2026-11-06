// Recursion power and exponentiation

#include <stdio.h>

int power(int base, int expo, int r) {
    r *= base;
    expo --;
    if (expo == 0){
        return r;
    }
    else{
        return power(base,expo,r);
    }
}

int main()
{
    int base, expo;
    
    printf("Enter base and expo : "); scanf("%d%d",&base,&expo);
    printf("Result : %d",power(base,expo,1));
    return 0;
}