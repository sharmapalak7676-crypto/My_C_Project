//Write a C program to find second largest element in array //
#include <stdio.h>

int secondLargest(int arr[], int n) {
    int max = -9999, second = -9999;

    for(int i=0; i<n; i++) {
        if(arr[i] > max) {
            second = max;
            max = arr[i];
        }
        else if(arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++) scanf("%d", &a[i]);

    printf("Second largest = %d", secondLargest(a, n));
}
return 0;
}
