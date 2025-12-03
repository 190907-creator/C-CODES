#include<stdio.h>
int main()
{
    int n;
    do{
        printf("enter a number : ");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n % 2 != 0){
            break;
        }

     } while(1);
     printf("This is an odd number, please enter an even number");
    
    return 0;
}