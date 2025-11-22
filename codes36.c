// wap to pirnt even or add numbers from an array
include <stdio.h>

int main() {
    int arr[100], size, i;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Check and print whether each element is even or odd
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            printf("%d is even\n", arr[i]);
        else
            printf("%d is odd\n", arr[i]);
    }
