#include<stdio.h>
int main()
{
    int n; 
    printf("Enter a number : ");
    scanf("%d", & n);
    for(int i = 0; i<=n; i++){
        int factorial = 1;
        printf("%d", i*factorial );

    }
    return 0;
}