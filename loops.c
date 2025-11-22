// looping  or iterative statements
//=> Loops in C are used to repeat a block of code multiple times until a specified condition becomes false.

//Types of Loops=>
//:for loop
//:while loop
//:do-while loop



//1) for loop=>
#include <stdio.h>
int main() {
    for(int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    return 0;
}

//Output
//1 2 3 4 5


//2) while loop
#include <stdio.h>
int main() {
    int i = 1;
    while(i <= 5) {
        printf("%d ", i);
        i++;
    }
    return 0;
}

//Output
//1 2 3 4 5


//3) do-while loop
#include <stdio.h>
int main() {
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while(i <= 5);
    return 0;
}

//Output
//1 2 3 4 5


If you want next: jump statements (break, continue, goto) — tell me, I’ll give in same format.
