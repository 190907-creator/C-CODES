//PROGRAM TO PRINT HELLO WORLD MULTIPLE TIMES USING FUNCTION 
#include<stdio.h>
void string(){
    printf("hello word\n");
}
 int main(){
    int digit ;

    printf("enter a digit : ");
    scanf("%d", &digit);

    for(int i = 0; i<digit ; i++){
        string();
    }
    return 0;
 }
