//if elif else 
// wap to check the number is +ve -ve or zero.//
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0) {
        printf("Positive");
    } 
    else if(num < 0) {
        printf("Negative");
    } 
    else {
        printf("Zero");
    }
    return 0;
}

output =>
Enter a number: 15
Positive
Enter a number: -9
Negative
Enter a number: 0
Zero
