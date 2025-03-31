#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int nums[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }
    // Array to store leaders
    int leaders[N]; 
    int leaderCount = 0;

    // last element ko max le liya then check hr element ke isse big no. hai left mein if yes then vo no.
    // is leader and add that no. in array now for next elader again check 
    int maxFromRight = nums[N - 1];
    leaders[leaderCount++] = maxFromRight; // The last element is always a leader  

    // Traverse the array from right to left
    for (int i = N - 2; i >= 0; i--) 
    {
        if (nums[i] >= maxFromRight) 
        {
            maxFromRight = nums[i]; 
            leaders[leaderCount++] = maxFromRight; 
        }
    }

    // ulta store kr rhe toh ulta hi print krenge bcz we need leaders ka 1st element(orig array ka last element) at last
    for (int i = leaderCount - 1; i >= 0; i--) 
    {
        printf("%d ", leaders[i]);
    }
    return 0;
}