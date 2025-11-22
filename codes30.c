//wap to find the lcm and gdc of a number

#include <stdio.h>

int main() {
    int a, b, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    lcm = (x * y) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d", lcm);

    return 0;
}
