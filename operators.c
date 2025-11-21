//tokens
// operators in c

OPERATORS=> Operators are symbols that perform operations on variables and values.
They are used to compute, compare, assign, and manipulate data in a program.

// TYPES OF OPERATORS //

1. Arithmetic Operators
#include<stdio.h>
int main(){
    int a=10,b=5,c;
    c=a+b;
    c=a-b;
    c=a*b;
    c=a/b;
    c=a%b;
    printf("%d",c);
}


2. Relational Operators
#include<stdio.h>
int main(){
    int a=10,b=5,r;
    r=a>b;
    r=a<b;
    r=a>=b;
    r=a<=b;
    r=a==b;
    r=a!=b;
    printf("%d",r);
}


3. Logical Operators
#include<stdio.h>
int main(){
    int a=10,b=5,l;
    l=(a>5 && b<10);
    l=(a>5 || b>10);
    l=!l;
    printf("%d",l);
}


4. Assignment Operators
#include<stdio.h>
int main(){
    int a=10,b=5;
    a+=5;
    b-=2;
    a*=2;
    b/=2;
    a%=3;
    printf("%d %d",a,b);
}


5. Increment / Decrement Operators
#include<stdio.h>
int main(){
    int x=5;
    x++;
    x--;
    printf("%d",x);
}


6. Bitwise Operators
#include<stdio.h>
int main(){
    int y;
    y=6&3;
    y=6|3;
    y=6^3;
    y=~6;
    y=6<<1;
    y=6>>1;
    printf("%d",y);
}


7. Ternary Operator
#include<stdio.h>
int main(){
    int a=10,b=5,max;
    max=(a>b)?a:b;
    printf("%d",max);
}

