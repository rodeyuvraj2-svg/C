// 3x3 multiply rows and colums of 3x3

#include <stdio.h>

int main()
{
    int a[3][3], b[3][3];
    
    printf("Enter first array:\n");
    for (int i=0; i<3; i++) {
        for (int j=0;j<3;j++) {
            printf("Enter a[%d][%d]: ",i,j); scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter second array:\n");
    for (int i=0; i<3; i++) {
        for (int j=0;j<3;j++) {
            printf("Enter b[%d][%d]: ",i,j); scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    
    int c[3][3];
    int result=0;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            for (int x=0; x<3; x++) {
                result += ((a[i][x]) * (b[x][j]));
            }
            c[i][j] = result;
            result = 0;
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}