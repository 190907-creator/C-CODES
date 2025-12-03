#include<stdio.h>
int main()
{
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d", &n);

    int sum = 0;
    for(int i = 1; i<=n; i++){
    sum = sum+i;
    }
    printf("SUM IS %d", sum);
    return 0;
} 
