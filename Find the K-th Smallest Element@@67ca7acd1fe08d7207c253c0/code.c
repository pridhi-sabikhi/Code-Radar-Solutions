void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int kthSmallest(int arr[], int n, int k) {
    // Check if k is out of range
    if (k < 1 || k > n) {
        return -1;  // k is out of range
    }

    // Sort the array using selection sort
    selectionSort(arr, n);

    // Return the k-th smallest element (k-1 for zero-based index)
    return arr[k - 1];
}
