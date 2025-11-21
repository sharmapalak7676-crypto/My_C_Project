//IF AND ELSE
// WAP TO CHECK THE NUMBER IS POSITIVE  OR NEGATIVE //

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0) {
        printf("Positive");
    } else {
        printf("Negative");
    }
    return 0;
}

//OUTPUT=>
Enter a number: -8
Negative
