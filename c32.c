// Array using malloc and realloc

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *p;
    
    p = (int *)malloc(5 * sizeof(int));
    
    printf("Enter Array:\n");
    for(int i=0; i<5; i++){
        printf("Enter p[%d]: ",i); scanf("%d",&p[i]);
    }
    
    p = realloc(p,10 * sizeof(int));
    for(int i=5; i<10; i++){
        printf("Enter p[%d]: ",i); scanf("%d",&p[i]);
    }
    
    printf("\nArray:");
    for(int i=0; i<10; i++){
        printf(" %d",p[i]);
    }
    
    
    free(p);
}