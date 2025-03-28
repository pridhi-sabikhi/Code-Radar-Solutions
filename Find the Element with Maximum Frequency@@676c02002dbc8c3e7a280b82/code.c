#include <stdio.h>
#include <stdlib.h>

int highest_frequency_element(int arr[], int n) {
    int frequency[100000] = {0}; // Array to store frequency of elements
    int max_freq = 0; // Variable to track maximum frequency
    int result_element = -1; // Variable to store the result element

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    // Find the element with the highest frequency
    for (int i = 0; i < 100000; i++) {
        if (frequency[i] > max_freq) {
            max_freq = frequency[i];
            result_element = i; // Update result element
        } else if (frequency[i] == max_freq && result_element > i && max_freq!=0) {
            result_element = i; // Update to the smaller element
        }
    }

    return result_element;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = highest_frequency_element(arr, n);
    printf("%d\n", result);

    return 0;
}