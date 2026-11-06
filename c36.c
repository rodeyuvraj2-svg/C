// Union

#include <stdio.h>

int main()
{
    union Test{
        int a;
        float b;
    };

    union Test t1;
    
    t1.a = 10;
    printf("a: %d",t1.a);
    
    t1.b = 14.4f;
    printf("\nb: %f",t1.b);
    printf("\n\nSize: %lu",sizeof(union Test));
    return 0;
}