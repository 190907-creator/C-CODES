#include <stdio.h>
 int main()
 {
     int i;
     printf("enter a three digit number : ");
     scanf("%d", &i);


    int hundred = i/100;
     int ten = (i/10)%10;
    int one = i % 10;

    printf("%d   %d   %d \n", hundred, ten, one);
    return 0;
 } 