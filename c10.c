// Triangle sides

#include <stdio.h>

int main() {

    float a,b,c;

    printf("Enter 3 sides of triange : "); scanf("%f%f%f",&a,&b,&c);

    if (a == b && a == c && b == c) {
        printf("Equvalent");
    }
    else if (a == b || b == c || a ==c) {
        printf("isocence");
    }
    else {
        printf("scalence");
    }

    return 0;
}