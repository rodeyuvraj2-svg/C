// Prime or not

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num;
    bool isPrime = true;
    
    printf("Enter a number : "); scanf("%d",&num);
    
    for (int i = 2; i<num; i++) {
        if (num % i == 0){
            printf("Number is not prime");
            isPrime = false;
        }
    }
    if (isPrime) {
        printf("Number is prime");
    }
    
    return 0;
}