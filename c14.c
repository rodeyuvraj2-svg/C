// Armstrong

#include <stdio.h>
#include <math.h>

int main()
{
    int n, r, t, s = 0, temp, digit = 0;
    printf("Enter a number : "); scanf("%d",&n);
    
    t = n;
    while (t) {
        digit += 1;
        t /= 10;
    }

    temp = n;

    while (temp) {
        r = temp % 10;
        temp = temp / 10;
        
        s = s + pow(r,digit);
    }
    
    if (s == n) {
        printf("TRUE");
    }
    else {
        printf("FALSE");
    }

    return 0;
}