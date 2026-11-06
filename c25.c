// Factorial sumofDigits
#include <stdio.h>

int sumofDigits(int n){
    if (n < 10) {
        return n;
    }
    else{
        return n%10 + sumofDigits(n/10);
    }
}

int main(){
    int n;
    printf("Enter number: "); scanf("%d",&n);
    printf("Result: %d",sumofDigits(n));
}