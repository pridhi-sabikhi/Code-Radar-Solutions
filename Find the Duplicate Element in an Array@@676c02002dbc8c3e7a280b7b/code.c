#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Start checking for duplicates
    int i = 0;
    while (i < n) {
        int index = arr[i]; // Use arr[i] as the index

        // Make sure index is within valid bounds
        if (index < n && arr[i] != arr[index]) {
            // Swap if values are not equal
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        } else {
            // If duplicate is found or already visited, move to next element
            i++;
        }
    }

    // After the loop, arr[0] should hold the duplicate value
    printf("%d", arr[0]);
    return 0;
}
