//using linear search
// int findOccurrence(int arr[], int n, int target, char mode)
// {
//     int k=-1;
//     for(int i=0; i<n; i++)
//     {
//         if(mode=='F')
//         {
//             if(arr[i]==target)
//             {
//             k=i;
//             return k;
//             } 
//         }
//         else
//         {
//             if(arr[i]==target)
//             {
//             k=i;
//             }

//         }
//     }
//     return k;
// }


//another way using binary search
int findOccurrence(int arr[], int n, int target, char mode) {
    int left = 0, right = n - 1;
    int result = -1;

    // Binary search for the first or last occurrence
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid; // Found the target, store the index
            if (mode == 'F') {
                right = mid - 1; // Continue searching in the left half for the first occurrence
            } else {
                left = mid + 1; // Continue searching in the right half for the last occurrence
            }
        } else if (arr[mid] < target) {
            left = mid + 1; // Target is in the right half
        } else {
            right = mid - 1; // Target is in the left half
        }
    }

    return result; // Return the index of the first or last occurrence, or -1 if not found
}
