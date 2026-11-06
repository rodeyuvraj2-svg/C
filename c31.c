// Average of array using calloc

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *p, n;
    printf("Enter size of the array: "); scanf("%d",&n);
    
    p = (int *)calloc(n,sizeof(int));
    float total = 0;
    
    printf("Enter Array:\n");
    for(int i=0; i<n; i++){
        printf("Enter p[%d]: ",i); scanf("%d",&p[i]);
        total = total + p[i];
    }
    
    printf("\nTotal: %f\nAverage: %f",total,total/n);

    free(p);
}