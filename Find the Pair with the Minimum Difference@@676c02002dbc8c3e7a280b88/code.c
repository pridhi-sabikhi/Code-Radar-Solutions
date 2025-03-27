#include <stdio.h>
 #include <stdlib.h>
#include<limits.h>


int main() {
    int N, first, second;
    int min=INT_MAX;
    scanf("%d", &N);
    
    if (N < 2) {
        printf("-1\n");
        return 0;
    }

    int nums[N]; // Assuming the maximum size of the array is 100

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }
    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            int diff=nums[i]-nums[j];
            diff=abs(diff);
            if(diff<min)
            {
                min=diff;
                first=nums[i];
                second=nums[j];

            }

        }
    }
    
    if(first<second)
    printf("%d %d\n", first, second);
    else
    printf("%d %d\n", second, first);
    return 0;
}