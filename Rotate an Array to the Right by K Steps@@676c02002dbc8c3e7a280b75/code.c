//ditto same as Q1 bss usmein print in different lines . here print in same line with spaces
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);

    // Normalize k to ensure it's within the bounds of the array size
    k = k % n; // If k is greater than n, we only need to rotate k % n times

    // Create a temporary array to hold the rotated values
    int temp[n];

    // Copy the last k elements to the beginning of the temp array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Copy the remaining elements to the temp array
    for (int i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    // Copy the temp array back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}