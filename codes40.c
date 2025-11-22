//wap to sort an array in asc and desc order //

#include <stdio.h>
int main() {
    int arr[100], n, i, j, temp, choice;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter 1 for ascending, 2 for descending: ");
    scanf("%d", &choice);

    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if((choice == 1 && arr[i] > arr[j]) || (choice == 2 && arr[i] < arr[j])) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
