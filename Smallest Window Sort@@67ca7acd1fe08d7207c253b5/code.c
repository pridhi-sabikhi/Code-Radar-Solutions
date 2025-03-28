#include <stdio.h>

int findUnsortedSubarray(int arr[], int n) {
    int start = 0, end = n - 1;

    // deciding left boundary if acs oreder hai tb tk go on moving aage
    while (start < n - 1 && arr[start] <= arr[start + 1]) {
        start++;
    }

    // If the array is already sorted .imp to writ evrna 1 test case fail
    if (start == n - 1) {
        return 0; // No need to sort
    }

    // deciding right boundary if desc ordeer hai tb tk go on moving pivhe
    while (end > 0 && arr[end] >= arr[end - 1]) {
        end--;
    }

    // Find the minimum and maximum in the unsorted subarray
    int subarrayMin = arr[start];
    int subarrayMax = arr[start];
    for (int i = start; i <= end; i++) {
        if (arr[i] < subarrayMin) {
            subarrayMin = arr[i];
        }
        if (arr[i] > subarrayMax) {
            subarrayMax = arr[i];
        }
    }

    // Expand the subarray to include any numbers which are out of place
    while (start > 0 && arr[start - 1] > subarrayMin) {
        start--;
    }
    while (end < n - 1 && arr[end + 1] < subarrayMax) {
        end++;
    }

    return end - start + 1; // Length of the subarray
}

