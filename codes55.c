//wap Reverse array using a function
#include <stdio.h>

void reverse(int arr[], int n) {
    int i=0, j=n-1, temp;
    while(i<j) {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++; j--;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    reverse(arr,n);

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
return 0;
}
