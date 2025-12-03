#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character :");
    scanf("%c", &ch);

    if(ch >='A' && ch <='Z'){
    printf("The character is in upper case\n");
    }
    else if(ch >= 'a' && ch<='z'){
    printf("The character is in lower case\n");
}
else  {
    printf("Enter a valid character");

}
return 0;

}