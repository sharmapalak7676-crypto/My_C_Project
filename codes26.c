//wap to print the last and first digit number //

#include <stdio.h>
int main() {
    int num, first, last;
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    first = num;
    while(first >= 10) {
        first /= 10;
    }

    printf("First digit = %d\n", first);
    printf("Last digit = %d", last);
    return 0;
}
