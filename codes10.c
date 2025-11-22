// wap to check if you are indian if yes then enter your age to check the eleigibilty for voting then enter voter id.//

#include <stdio.h>
int main() {
    int age, voterID;
    char nationality;

    printf("Are you Indian? (y/n): ");
    scanf("%c", &nationality);

    if(nationality == 'y' || nationality == 'Y') {
        printf("Enter your age: ");
        scanf("%d", &age);

        if(age >= 18) {
            printf("Enter your voter ID number: ");
            scanf("%d", &voterID);
            printf("You are eligible for voting and your voter ID is %d", voterID);
        } else {
            printf("You are not eligible for voting");
        }
    } else {
        printf("You are not Indian");
    }

    return 0;
} 

//output=>  Are you Indian? (y/n): y
//Enter your age: 20
//Enter your voter ID number: 12345
//You are eligible for voting and your voter ID is 12345

