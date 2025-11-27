// wap of structure as declare after structure defination 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[40];
    int age;
    unsigned long mobile;
};

int main()
{
    struct student st1;

    printf("Enter student name: ");
    fgets(st1.name, 40, stdin);

    printf("Enter student age: ");
    scanf("%d", &st1.age);

    printf("Enter student mobile: ");
    scanf("%lu", &st1.mobile);

    printf("\nThe student name: %s", st1.name);
    printf("The student age: %d\n", st1.age);
    printf("The student mobile: %lu\n", st1.mobile);

    return 0;
}
