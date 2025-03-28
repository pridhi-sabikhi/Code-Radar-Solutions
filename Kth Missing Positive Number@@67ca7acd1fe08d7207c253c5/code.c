//do this only
int findKthMissing(int arr[], int n, int k) {
    int current = 1;  // Start checking from the first positive integer
    int missingCount = 0;  // Count of missing positive integers
    int index = 0;  // Index for the array

    while (missingCount < k) {
        if (index < n && arr[index] == current) {
            // If the current number is in the array, move to the next number
            index++;
        } else {
            // If the current number is missing, increment the missing count then check ke kth hai toh retun current vrna inc current
            missingCount++; 
            if (missingCount == k) {
                return current;  // Return the k-th missing positive integer
            }
        }
        current++;  // Move to the next positive integer
    }
}