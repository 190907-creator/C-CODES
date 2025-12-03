#include<stdio.h>
int main(){
    int n, orignal,digit ,rev = 0;
    printf("enter an integer : ");
    scanf("%d", &n);

    if (n<0){
        printf("negative number are not palindrome!");
    }
    orignal = n;
    while(n>0){
        digit = n%10 ;
        rev = rev * 10 + digit ;
        n = n/10 ;
    }

    if (rev == orignal){
    printf("%d is a palindrome number" , orignal);
    }
    else
    printf("%d is not a palindrome number ", orignal);
    return 0;
}