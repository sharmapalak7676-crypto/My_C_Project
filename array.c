//array
//An array in C is a collection of elements of the same data type stored in contiguous memory locations and accessed using an index.

//Types of Arrays=>
:One-Dimensional Array
:Two-Dimensional Array
:Multi-Dimensional Array (3D or more)

//1) One-Dimensional Array
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

Output
1 2 3 4 5


2) Two-Dimensional Array
#include <stdio.h>
int main() {
    int arr[2][3] = {{1,2,3}, {4,5,6}};
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

Output=>
1 2 3
4 5 6


3) Multi-Dimensional Array (3D example)
#include <stdio.h>
int main() {
    int arr[2][2][2] = {{{1,2},{3,4}}, {{5,6},{7,8}}};
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

Output=>
1 2
3 4

5 6
7 8

