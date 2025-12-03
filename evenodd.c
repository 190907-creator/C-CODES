#include<stdio.h>
int main()
{
    int i;
    printf("enter a number : ");
    scanf("%d", &i);

    switch(i % 2){
        case 0: printf("number is even");
        break;
        case 1: printf("number is odd");
        break;
        default: printf("neither even nor odd");
    }
    return 0;
}
