#include<stdio.h>
int main()
{
    int age;
    printf("enter your age :");
    scanf("%d", &age);
    if(age>=18){
        printf("Adult\n");
        printf("You are eligble to vote\n");
        printf("You are eligble to get a driver's liscense\n");
    }
    
           else if(age>=13 && age<18 ){ 
            printf("Not an adult\n");
            printf("You are a teenager\n");
        
           }
          else if(age<13){
            printf("You are a child\n");
          }
printf("THANKYOU");
        return 0;
    }