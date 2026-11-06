// Normal and Reverse Recurssion   

#include <stdio.h>

void Normalprint(int a[], int n){
    if (n<0){
        return;
    }
    Normalprint(a,n-1);
    printf("%d\n",a[n]);
    
}

void ReversePrint(int a[], int n){
    if(n<0){
        return;
    }
    printf("%d\n",a[n]);
    return ReversePrint(a,n-1);
}

int main() {
    int a[] = {10,20,30,40,50};
    printf("Normal : \n");
    Normalprint(a,4);
    printf("Reverse : \n");
    ReversePrint(a,4);
}