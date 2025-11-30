//wap to positive, negative & zeros
#include <stdio.h>

void countNums(int arr[], int n) {
    int pos=0, neg=0, zero=0;

    for(int i=0; i<n; i++) {
        if(arr[i] > 0) pos++;
        else if(arr[i] < 0) neg++;
        else zero++;
    }

    printf("Positive = %d\nNegative = %d\nZero = %d", pos, neg, zero);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    countNums(arr, n);
}


//output=>
6
4 -3 0 7 8 -1
Positive = 3
Negative = 2
Zero = 1
