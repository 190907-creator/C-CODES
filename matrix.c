#include<stdio.h>
int main()
{
    int row , col,i, j;

    printf("enter nubmer of rows and columns : ");
    scanf("%d %d", &row , &col);

    int a[row][col];
    printf("enter array elements ");
    for(i = 0; i<row ; i++){
        for(j = 0; j < col ; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i<row; i++){
        for(j = 0; j<col ; j++){
        printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}