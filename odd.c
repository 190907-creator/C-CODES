#include<stdio.h>
int main()
{
    for(int i = 5; i<=50; i++){
        if(i%2 ==0){  //to check if the number is even
            continue;
        } 
        printf("%d\n", i);
    }
    return 0;
}