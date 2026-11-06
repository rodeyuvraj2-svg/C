// SWAP USING FUNCTION
#include <stdio.h>

int swap(int *x, int *y) {
        int temp;
        
        temp = *x;
        *x = *y;
        *y = temp;
    } 
    
int main()
{
    int a,b;
    printf("Enter A : "); scanf("%d",&a);
    printf("Enter B : "); scanf("%d",&b);

    printf("\nBefore Swapping : ");
    printf("\nA = %d",a);
    printf("\nB = %d",b);
    
    swap(&a,&b);
    printf("\nAfter Swapping Using function: \nA = %d\nB = %d",a,b);
    
    return 0;
}