//Write a C program to count how many even and odd numbers are present in an array using a function
#include <stdio.h>

void countEvenOdd(int arr[], int n) {
    int even = 0, odd = 0;

    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    countEvenOdd(arr, n);
    return 0;
}
