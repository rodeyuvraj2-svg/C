// Dynamic memory allocation

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *p;
    p = (int *)malloc(5 * sizeof(int));

    if(p == NULL) {
        printf("Memory allocation Failed");
    }
    
    printf("Enter Array:\n");
    for(int i=0; i<5; i++) {
        printf("Enter p[%d]: ",i); scanf("%d",&p[i]);
    }

    printf("\n\nArray:");
    for(int i=0; i<5; i++) {
        printf(" %d",p[i]);
    }

    free(p);
}