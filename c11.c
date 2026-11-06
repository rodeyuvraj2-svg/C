// fibonacci series

#include <stdio.h>

int main()
{
    int a = 0, b = 1, next;
    int n;
    
    printf("Enter the range : "); scanf("%d",&n);
    
    for (int i = 0; i<n; i++) {
        printf("%d ",a);
        next = a + b;
        a = b;
        b = next;
    }
    
    return 0;
}