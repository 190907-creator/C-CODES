#include<stdio.h>
#define MAXSIZE 100
int main()
{
    int size, i;
  
    printf("enter the size of array : ");
    scanf("%d", & size);
      int a[size];
    printf("enter the elements of array");
    for(i = 0; i<size; i++){
        scanf("%d", & a[i]);
    }
    printf("array elements are : ");
    for(i = 0; i <size ; i++){
        printf("%d\t", a[i]);
    }
    return 0;
}