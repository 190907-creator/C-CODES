#include<stdio.h>
#define MAXSIZE 100
int main(){
    int even = 0;
    int odd = 0;
    int i, size;
    int a[MAXSIZE];

    for(i = 0; i < size ; i++){
        if (a[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("even, odd");

    int EAARAY[even];
    int OARRAY[odd];

    return 0;
}
