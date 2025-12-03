#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i, count = 0;

    printf("Enter any String:");
    fgets(str, sizeof(str), stdin);

    puts(str);

    int n = strlen(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    printf("Size of String %d\n", n);
    printf("Length of String %d", count - 1);

    return 0;
}
