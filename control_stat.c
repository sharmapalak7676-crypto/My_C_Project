// CONTROL STATEMENTS //


//Control statements in C change the normal flow of execution of a program by using conditions or loops.

//1) if statement
#include <stdio.h>
int main() {
    int a = 10;
    if(a > 5) {
        printf("Greater");
    }
    return 0;
}

//Output=>
//Greater


//2) if-else statement
#include <stdio.h>
int main() {
    int a = 3;
    if(a % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }
    return 0;
}

//Output=>
//Odd


//3) else-if ladder
#include <stdio.h>
int main() {
    int marks = 75;
    if(marks >= 90) {
        printf("Grade A");
    } else if(marks >= 60) {
        printf("Grade B");
    } else {
        printf("Grade C");
    }
    return 0;
}

//Output=>
//Grade B


//4) switch statement
#include <stdio.h>
int main() {
    int day = 2;
    switch(day) {
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        default: printf("Invalid");
    }
    return 0;
}

//Output=>
//Tuesday


//5) for loop
#include <stdio.h>
int main() {
    for(int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    return 0;
}

//Output
//1 2 3 4 5 


If you want next set (while, do-while, break, continue, goto) tell me, I’ll do same format.
