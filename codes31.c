//functions
//wap to swap two numbers using call by value //

//CALL BY VALUE=>
#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function after swapping: a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After function call: x = %d, y = %d", x, y);

    return 0;
}






