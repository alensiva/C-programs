#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int isPrinted[n];
    for (i = 0; i < n; i++) {
        isPrinted[i] = 0;
    }

    printf("Duplicate elements are:\n");
    for (i = 0; i < n; i++) {
        if (isPrinted[i]) {
            continue;
        }

        int isDuplicate = 0;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                isPrinted[j] = 1; 
            }
        }

        if (isDuplicate) {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\n");

    return 0;
}
