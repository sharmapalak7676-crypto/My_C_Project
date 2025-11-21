// TOKENS //
// KEYWORDS IN C //
=> Keywords are reserved words in a programming language that have special meaning and cannot be used as identifiers.
They control the structure, flow, and behavior of a program.


[ Program 1 – Using if, else, ]
  
#include <stdio.h>

int main() {
    int a = 5;
    if (a > 0) {
        printf("Positive\n");                              output=> positive
    }
    else {
        printf("Negative\n");
    }
    return 0;
}

  
[ Program 2 – Using for, in, break ]
#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;
        }
        printf("%d\n", i);                      output=>1
                                                        2
                                                        3
    }
    return 0;
}



