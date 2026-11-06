// Sum of 3 digits of a number

#include <stdio.h>

int main() {

    int num;
    printf("Enter 3 digit number : "); scanf("%d",&num);

    int sum = 0;
    int temp = num;

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum = %d",sum);

    return 0;
}