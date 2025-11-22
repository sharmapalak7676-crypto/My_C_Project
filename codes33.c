//wap using functions to find the square of a number:

#include <stdio.h>

int square(int n) {
    return n * n;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = square(num);
    printf("Square = %d\n", result);
    return 0;
}

// Output=>
//Enter a number: 6
//Square = 36
