// Bubble Sort
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array : "); scanf("%d",&n);
    
    int a[n];
    printf("Enter array: "); for (int i=0; i<n; i++) scanf("%d",&a[i]);
    
    int temp;
    for (int i=0; i<n-1; i++) {
        for (int j=n-1; j>i; j--) {
            if (a[j]<a[j-1]) {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    
    printf("\nSorted Array : "); for(int i=0; i<n; i++) printf("%d ",a[i]);

    return 0;
}