#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    int longestLength = 1; 
    int currentLength = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            continue;
        } else if (arr[i] == arr[i - 1] + 1) {
            currentLength++;
        } else {
            if (currentLength > longestLength) {
                longestLength = currentLength;
            }
            currentLength = 1;
        }
    }

    if (currentLength > longestLength) {
        longestLength = currentLength;
    }

    printf("Length of the longest consecutive subsequence is: %d\n", longestLength);

    return 0;
}
