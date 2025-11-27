//wap of structure as declare afte structure defination
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
struct student
{
char name [40];
int age;
unsigned long mobile;
};

int main (){
 struct student * st2; 
 st2=(struct student *) malloc (sizeof (struct student));

    printf("Enter student name: ");
    fgets(st2->name, 40, stdin);

    printf("Enter student age: ");
    scanf("%d", &st2->age);

    printf("Enter student mobile: ");
    scanf("%lu", &st2->mobile);

    printf("\nThe student name: %s", st2->name);
    printf("The student age: %d\n", st2->age);
    printf("The student mobile: %lu\n", st2->mobile);

    return 0;
}
