#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character :");
    scanf("%c", &ch);
    if(ch >='0' && ch<='9')
    printf("the charcter %c is a digit", ch);
    else 
    printf("the character %c is not a digit" ,ch);
    return 0;
}