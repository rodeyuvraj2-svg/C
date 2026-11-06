// GREATER THAN AVERAGE
#include <stdio.h>

int main()
{
    int n,sum = 0;
    printf("Enter the size of array : "); scanf("%d",&n);
    
    int a[n];
    printf("\nEnter array : \n");
    for (int i=0; i<n; i++) {
        printf("Enter %d element: ",i+1); scanf("%d",&a[i]);
        sum += a[i];
    }
    
    float avg = (float) sum / n;
    
    printf("Elements greater than avg : ");
    for (int i=0; i<n; i++) {
        if (a[i] > avg) printf("%d ",a[i]);
    }
    
    return 0;
}