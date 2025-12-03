#include <stdio.h>
void swap(int x, int y)
{
    printf("before swapping, x is %d and y is %d\n", x, y);
    int temp = x;
    x = y;
    y = temp;
    printf("after swapping, x is %d and y is %d\n", x, y);
}

int main()
{
    int a = 5, b = 10;
    printf("before swapping, a is %d and b is %d\n", a, b);
    swap(a, b);
    printf("after swapping, a is %d and b is %d\n", a, b);
    return 0;
}
