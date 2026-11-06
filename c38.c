// Real and imaginary Addition and subtraction

#include <stdio.h>

struct Complex{
    float real;
    float imaginary;
};

struct Complex summ(struct Complex c1, struct Complex c2){
    struct Complex result;
    
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    
    return result;
}

struct Complex subb(struct Complex c1, struct Complex c2){
    struct Complex result;
    
    result.real = c1.real - c2.real;
    result.imaginary = c1.imaginary - c2.imaginary;
    
    return result;
}


int main()
{
    struct Complex c1,c2,sum,sub;
    
    printf("Enter first real and imaginary: "); scanf("%f%f",&c1.real,&c1.imaginary);
    printf("Enter second real and imaginary: "); scanf("%f%f",&c2.real,&c2.imaginary);
    
    printf("\n\n");
    
    sum = summ(c1,c2);
    sub = subb(c1,c2);
    
    printf("Sum:\nReal: %f\nImaginary: %f",sum.real,sum.imaginary);
    printf("\n\nSub:\nReal: %f\nImaginary: %f",sub.real,sub.imaginary);
    return 0;
}