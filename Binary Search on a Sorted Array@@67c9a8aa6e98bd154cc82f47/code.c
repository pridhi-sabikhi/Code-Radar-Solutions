//binary search means start checking from mid 
int binarySearch(int arr[], int n, int target)
{
    int mid=n/2;
    while(mid<n)
    {
    if(target>arr[mid])
    {
        mid++;
    }
    else if(target<arr[mid])
    {
        mid--;
    }
    else  // w/m equal hai mid wala element and target
    {
        return mid;
    }
    }
    //not found
    return -1;
}