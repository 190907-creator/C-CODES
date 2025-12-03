#include<stdio.h>
int main()
{
    int row , col,i, j , val;

    printf("enter nubmer of rows and columns : ");
    scanf("%d %d", &row , &col);

    int a[row][col];
    printf("enter array elements ");
    for(i = 0; i<row ; i++){
        for(j = 0; j < col ; j++){
            scanf("%d", &a[i][j]);
        }
    }
        printf("enter any scalar value which is to be multiplied by matrix : ");
        scanf("%d", &val);

    for(i = 0; i<row; i++){
        for(j = 0; j<col ; j++){
        printf("%d\t", val*a[i][j]);
        }
        printf("\n");
    }
    return 0;
}