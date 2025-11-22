//wap to insert array element at specific position
#include <stdio.h>
int main() {
    int arr[100], n, pos, value;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    for(int i = n; i >= pos; i--)
        arr[i] = arr[i-1];

    arr[pos-1] = value;
    n++;

    printf("Array after insertion: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
