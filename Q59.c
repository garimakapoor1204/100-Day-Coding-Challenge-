
// Count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int n, i, evenCount = 0, oddCount = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Even=%d, ", evenCount);
    printf("Odd=%d\n", oddCount);
    return 0;
}
