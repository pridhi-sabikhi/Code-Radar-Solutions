int binarySearch(int arr[], int n, int target) {
    int low = 0;          // Start of the search range
    int high = n - 1;    // End of the search range

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Calculate mid to avoid overflow

        if (target > arr[mid]) {
            low = mid + 1;  // Move the lower bound up
        } else if (target < arr[mid]) {
            high = mid - 1; // Move the upper bound down
        } else {  // target is equal to arr[mid]
            return mid;  // Target found
        }
    }

    // Target not found
    return -1;
}
