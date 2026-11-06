// Swapping program

#include stdio.h

int main() {
    int a, b;

    printf(Enter a = );
    scanf(%d, &a);

    printf(Enter b = );
    scanf(%d, &b);

    printf(Before swapping A = %d, a);
    printf(nBefore swapping B = %d, b);

    int temp;

    temp = a;
    a = b;
    b = temp;

    printf(nAfter swapping A = %d, a);
    printf(nAfter swapping B = %d, b);
    return 0;
}