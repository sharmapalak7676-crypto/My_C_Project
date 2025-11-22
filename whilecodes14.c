// wap to print the sum of ist n natural number //

#include <stdio.h>
int main() {
    int n, i = 1, sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);

    while(i <= n) {
        sum = sum + i;
        i++;
    }
    printf("Sum = %d", sum);
    return 0;
}

