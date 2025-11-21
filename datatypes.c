// DATATYPES IN C
=> Datatypes in C define the type of data a variable can store.
They specify the size and type of values that can be used in a program.

// types =>


int → Used to store whole numbers without decimals (like 5, –10, 200).
float → Used to store decimal numbers with single precision (like 5.5, 3.14).
double → Used to store decimal numbers with high precision and bigger size than float.
char → Used to store a single character (like 'A', 'b', '9', '@').
long → Used to store very large whole numbers bigger than int.
short → Used to store small whole numbers, takes less memory than int.
unsigned int → Used to store whole numbers only positive (no negative values).
long long → Used to store extremely large whole numbers bigger than long.


//code example => //

#include <stdio.h>
int main() {
    int a = 10;
    float b = 5.5;
    double c = 12.3456789;
    char d = 'A';
    long e = 123456789;
    short f = 50;
    unsigned int g = 20;
    long long h = 9876543210;

    printf("%d\n", a);
    printf("%f\n", b);
    printf("%lf\n", c);
    printf("%c\n", d);
    printf("%ld\n", e);
    printf("%hd\n", f);
    printf("%u\n", g);
    printf("%lld\n", h);

    return 0;
}

Output
10
5.500000
12.345679
A
123456789
50
20
9876543210
