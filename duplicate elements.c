#include <stdio.h>

int main() {
    int n, i, j, k;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int unique[n];
    int uniqueSize = 0;

    for (i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (j = 0; j < uniqueSize; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[uniqueSize++] = arr[i];
        }
    }
    
    printf("Array with unique elements:\n");
    for (i = 0; i < uniqueSize; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
