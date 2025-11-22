//wap using switch condition whithout using break statement //

#include <stdio.h>
int main() {
    int day;
    printf("Enter day number (1-3): ");
    scanf("%d", &day);

    switch(day) {
        case 1: printf("One ");
        case 2: printf("Two ");
        case 3: printf("Three ");
        default: printf("Done");
    }
    return 0;
}

//output=>
//Enter day number (1-3): 1
//One Two Three Done
