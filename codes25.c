//wap to check the number is armgstrong or not //

#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while(temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = num;
    while(temp != 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp = temp / 10;
    }

    if(sum == num) {
        printf("Armstrong Number");
    } else {
        printf("Not an Armstrong Number");
    }

    return 0;
}
