#include<stdio.h>
 #define MAXSIZE 100
 int main()
 {
     int size, i, pos,n;
  
     printf("enter the size of array : ");
     scanf("%d", &size);
       int a[size];
       printf("enter the elements of array");
       for(i = 0; i<size; i++)
       {
             scanf("%d", & a[i]);
       }
     printf("enter  element ");
     scanf("%d", &n);
     printf("enter position ");
     scanf("%d", &pos);

       if(pos <= 0 || pos> size)
       {
            printf("invalid position");
        }
     else {
        for(i = size; i >=pos; i--)
        {
            a[i] = a[i-1];
        }
        a[pos-1] = n;
        size++;
     }
     printf("the elements of array");
       for(i = 0; i<size; i++)
       {
             printf("%d\t", a[i]);
   
   }
     return 0;
}
