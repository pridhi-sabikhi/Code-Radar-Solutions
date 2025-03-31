#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    if (N <= 0) {
        return 0; // No elements to process
    }

    int arr[N]; // Assuming the maximum size of the array is 100

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<N; i++)
    {
        int max=arr[i];
        for(int j=i+1; j<N; j++)
        {
            if(arr[i]<arr[j]) //i.e. vo leader element nhi hai
            {
                break; //come out of inner forloop and check for next no. in i               
            }
        }
            //agr vohi leader hai 
            printf("%d ", max);
        

    }
    printf("%d ", arr[N-1]); //at last print last element
    // // Array to store leaders
    // int leaders[100]; // Assuming the maximum number of leaders is 100
    // int leaderCount = 0;

    // // Start from the last element
    // int maxFromRight = nums[N - 1];
    // leaders[leaderCount++] = maxFromRight; // The last element is always a leader

    // // Traverse the array from right to left
    // for (int i = N - 2; i >= 0; i--) {
    //     if (nums[i] >= maxFromRight) {
    //         maxFromRight = nums[i]; // Update the maximum from the right
    //         leaders[leaderCount++] = maxFromRight; // Store the leader
    //     }
    // }

    // // Print leaders in the order they appear in the original array
    // for (int i = leaderCount - 1; i >= 0; i--) {
    //     printf("%d", leaders[i]);
    //     if (i > 0) {
    //         printf(" "); // Print space between numbers
    //     }
    // }
    // printf("\n"); // New line at the end

    return 0;
}