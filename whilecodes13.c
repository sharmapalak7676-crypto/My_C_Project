//wap to print even numbers btw a given range //

#include <stdio.h>
int main() {
    int start, end;
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);

    while(start <= end) {
        if(start % 2 == 0) {
            printf("%d ", start);
        }
        start++;
    }
    return 0;
}
