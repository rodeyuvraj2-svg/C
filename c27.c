// Sum of array using recursion and normal

#include <stdio.h>

int sumArray(int a[], int n, int sum) {
    if ( n >= 0 ) {
        return a[n] + sumArray(a,n-1,sum);
    }
    else{
        return sum;   
    }
}

int main()
{
    int n;
    printf("Enter the size of array: "); scanf("%d",&n);
    
    int arr[n];
    int sum = 0;
    printf("Enter array: ");
    for (int i=0; i<n; i++) {
        printf("Enter arr[%d] : ",i); scanf("%d",&arr[i]);
        sum += arr[i];
    }
    
    printf("\nSum of array using recursion: %d",sumArray(arr,n-1,0));
    printf("\nSum of array using normal way: %d",sum);
    return 0;
}