//wap to find the factorial of a given number

#include <stdio.h>
int main() {
    int num;
    unsigned long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        fact = fact * i;
    }

    printf("Factorial = %llu", fact);
    return 0;
}
