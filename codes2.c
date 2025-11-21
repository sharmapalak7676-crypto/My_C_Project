// WAP TO SWAP TWO VARIABLE BY THIRD //

#include <stdio.h>
int main() {
    int a, b, TEMP;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    TEMP= a;
    a = b;
    b = TEMP;
    printf("After swapping: a = %d b = %d", a, b);
    return 0;
}


//OUTPUT =>
Enter first number: 10
Enter second number: 20
After swapping: a = 20 b = 10
