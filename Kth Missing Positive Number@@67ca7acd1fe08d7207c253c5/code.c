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
            // If the current number is missing, increment the missing count
            missingCount++;
        }
    }
            if (missingCount == k) {
                return current;  // Return the k-th missing positive integer
            }
        
        current++;  // Move to the next positive integer
    }

    return -1;  // In case k is out of bounds (not expected in this problem)
}

// int findKthMissing(int arr[], int n, int k)
// {
//     int start=1, c=0;
//     for(int i=0; ;)//not given ending bcz if k=2 and elements are 1234 then ans is 6
//     // i.e. 1st missing is 5 and 2nd missing is 6  so tb go out of loop ki < condition
//     {
//         if(start == arr[i])
//         {
//             start++;
//             i++; //if found tohi go to next element vrna ni
//         }
//         else
//         {
//             c++;
//             if(c==k)
//             return start;
//             else
//             start++;
//         }

//     }
// }
