//  smallest and largest

#include <stdio.h>
#include <math.h>

int main()
{
    int n, largest = 0, smallest = 0;
    
    printf("Enter the number of elemets you want to store : ");
    scanf("%d",&n);
    
    int a [n];
    
    for (int i=0; i<n; i++) {
        printf("Enter %d element: ",i+1); scanf("%d",&a[i]);
        
        if (i == 0) {
            largest = a[i];
            smallest = a[i];
        }
        
        if (a[i] > largest) largest = a[i];
        if (a[i] < smallest) smallest = a[i];
        
    }
    
    printf("Largest : %d\n",largest);
    printf("Smallest : %d\n",smallest);
    
    
    return 0;
}