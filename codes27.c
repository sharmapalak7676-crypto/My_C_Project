// wap to swap first and last digit

#include <stdio.h>
#include <math.h>
int main() {
    int num, first, last, digits, swapped, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    temp = num;
    digits = 0;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    first = num;
    for(int i = 1; i < digits; i++)
        first /= 10;

    swapped = last * pow(10, digits-1) + (num % (int)pow(10, digits-1) - last) + first;
    printf("Number after swapping first and last digit = %d", swapped);
    return 0;
}

