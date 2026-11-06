// Structure

#include <stdio.h>

int main()
{
    struct Test{
        int a;
        float b;
    };

    struct Test t1 = {10,4.5f};
    struct Test t2;
    struct Test t3 = {30,6.5f};
    struct Test *p = &t3;
    
    t2.a = 20;
    t2.b = 5.4f;
    
    printf("Values of T1:\na = %d\nb = %f",t1.a,t1.b);
    printf("\n\nValues of T2:\na = %d\nb = %f",t2.a,t2.b);
    printf("\n\nValues of T3:\na = %d\nb = %f",p->a,p->b);
    
    printf("\n\nSize of struct Test: %lu",sizeof(struct Test));
    
    return 0;
}