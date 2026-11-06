// prime of range

#include <stdio.h>

int main()
{
    int n;
    int isprime = 1;
    printf("Enter range : "); scanf("%d",&n);
    
    for (int j = 1; j<=n; j++) {
        isprime = 1;
        for (int i = 2; i*i<=j; i++) {
            if (j % i == 0) {
                isprime = 0;
                break;
            }
        }
        if (isprime) {
            printf("%d ",j);
        }
    }

    return 0;
}