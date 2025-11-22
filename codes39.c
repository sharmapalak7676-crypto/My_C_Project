//wap to search an elemnt from array //

#include <stdio.h>
int main() {
    int arr[100], n, key, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    for(i = 0; i < n; i++)
        if(arr[i] == key) break;
    if(i < n) printf("Element found");
    else printf("Element not found");
    return 0;
}
