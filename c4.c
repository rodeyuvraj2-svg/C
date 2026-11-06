// Even or odd using bitwise operator

#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("%d", a & 1);
    printf("\n%d", b & 1);

    if (a & 1){
        printf("\nA is odd");
    }
    else{
        printf("\nA id even");
    }

    if (b & 1){
        printf("\nB is odd");
    }
    else{
        printf("\nB id even");
    }

    return 0;
}