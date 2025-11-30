//wap to find sum of elements at even and odd index
#include <stdio.h>

void sumEO(int arr[], int n) {
    int evenSum=0, oddSum=0;

    for(int i=0; i<n; i++) {
        if(i % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    printf("Even Index Sum = %d\nOdd Index Sum = %d", evenSum, oddSum);
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    sumEO(arr,n);
}
return 0;
}
