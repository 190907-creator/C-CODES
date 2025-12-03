#include<stdio.h>
int main()
{
    float i,j;
    char ch;
    printf("press c to convert temperature from fahernhite to celsius \n");
    printf("press f to convert temperature from celsius to faherhite \n");
    printf("enter your choice (c, f) : ");
    scanf("%c", &ch);



if(ch == 'c' || ch == 'C'){
    printf("enter temperature in fahernhite : ");
    scanf("%f", &i);
    printf("Temperature in celsuis is %f",(i-32)*5/9 );
}
  else if (ch == 'f'|| ch == 'F'){
    printf("enter temperature in celsius :  ");
    scanf("%f", & j);
    printf("Temperature in fahernhite is :%f ", (j*9/5) + 32 );

  }
  else{
    printf("enter a character between c and f");
  }
    return 0;
}