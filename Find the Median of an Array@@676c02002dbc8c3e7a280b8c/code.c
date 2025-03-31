#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    qsort(arr, N, sizeof(int), compare);

    // Calculate the median
    double median;
    if (N % 2 == 1) {
        // If odd, take the middle element
        median = arr[N / 2];
    } else {
        // If even, take the average of the two middle elements
        median = (arr[(N / 2) - 1] + arr[N / 2]) / 2;
    }

    // Print the median as an integer
    printf("%d\n", (int)median);

    return 0;
}