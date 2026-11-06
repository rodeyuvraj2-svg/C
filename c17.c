//  REVERSE ARRAY

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    
    printf("Enter the number of elemets you want to store : ");
    scanf("%d",&n);
    
    int a [n];
    
    for (int i=0; i<n; i++) {
        printf("Enter %d element: ",i+1); scanf("%d",&a[i]);
    }
    
    int l = 0, r = n-1, temp;
    
    while (l < r) {
        temp = a[l];
        a[l] = a[r];
        a[r] = temp;
        
        l++;
        r--;
    }
    
    for (int j=0; j<n; j++) {
        printf("\na[%d] : %d",j,a[j]);
    }
    
    
    return 0;
}