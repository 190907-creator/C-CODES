#include <stdio.h>

int main() {
    int a, b, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Start loop from the greater of the two numbers
    for (i = (a > b ? a : b); ; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;  // stop when LCM is found
        }
    }

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}