// CHECKING TWO NUMBERS THAT EQUALS TO TARGET IN ARRAY
#include <stdio.h>

int main()
{
    int n, count = 0;
    
    printf("Enter size of array : "); scanf("%d",&n);
    
    int a[n];
    
    printf("Enter sorted array : \n");
    for (int i=0; i<n; i++) {
        printf("Enter %d Element : ",i+1);   scanf("%d",&a[i]);
    }
    
    int key;
    printf("Enter Target : "); scanf("%d",&key);
    
    int left = 0, right = n-1;
    
    while (left<right) {
        if ((a[left]+a[right]) == key) {
            printf("The numbers are %d and %d which sum is %d",a[left],a[right],key);
            break;
        }
        else if ((a[left]+a[right]) < key) {
            left++;
        }
        else {
            right--;
        }
    }
    
    return 0;
}