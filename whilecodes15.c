//wap to print number in reverse order using while loop // 

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n >= 1) {
        printf("%d ", n);
        n--;
    }
    return 0;
}
