// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0; i<n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int k;
//     scanf("%d", &k);
//     //n is 5
//     //4th index is going to 1st i.e 5-4 index
//     for(int i=0; i<n-2; i++)
//     {
//         int temp=arr[i];
//         arr[i]=arr[n-i-2];
//         arr[n-i-2]=temp;
//     }
//     for(int i=0; i<n; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
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
        printf("%d\n", arr[i]);
    }

    return 0;
}