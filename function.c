// functions=>
A function in C is a block of code that performs a specific task, can be reused, and helps in dividing a program into smaller parts.

Types of Functions in C-
:Function with no arguments and no return value
:Function with arguments but no return value
:Function with no arguments but return value
:Function with arguments and return value

1) Function with no arguments and no return value=>
#include <stdio.h>

void greet() {
    printf("Hello World\n");
}

int main() {
    greet();
    return 0;
}

Output
Hello World


2) Function with arguments but no return value=>
#include <stdio.h>

void add(int a, int b) {
    printf("Sum = %d\n", a + b);
}

int main() {
    add(5, 7);
    return 0;
}

//Output
//Sum = 12


//3) Function with no arguments but return value=>
#include <stdio.h>

int getNumber() {
    return 10;
}

int main() {
    int num = getNumber();
    printf("Number = %d\n", num);
    return 0;
}

Output
Number = 10


4) Function with arguments and return value
#include <stdio.h>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(4, 5);
    printf("Product = %d\n", result);
    return 0;
}

Output
Product = 20


