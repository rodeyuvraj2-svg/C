// Multiplication of 3x3 matrics

#include <stdio.h>

int main()
{
    int r,c;
    printf("Enter the number of row and column : "); scanf("%d%d",&r,&c);
    
    int arr[r][c];
    printf("\nEnter array: \n");
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            printf("Enter value of Row %d column %d: ",i,j); scanf("%d",&arr[i][j]);   
        }
        printf("\n");
    }
    
    int arr1[r][c];
    printf("\nEnter second array: \n");
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            printf("Enter value of Row %d column %d: ",i,j); scanf("%d",&arr1[i][j]);   
        }
        printf("\n");
    }
    
    int arr2[r][c];
    for (int i = 0; i<r; i++) {
        for (int j = 0; j<c; j++) {
            arr2[i][j] = (arr1[i][j]) * (arr[i][j]);
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}