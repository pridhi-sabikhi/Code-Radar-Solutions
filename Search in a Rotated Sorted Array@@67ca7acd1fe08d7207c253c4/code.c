//hame no frq ke kaise bhi rotate ho hame sirf yeh check krna hai ke no. is there or not
int searchInRotatedArray(int arr[], int n, int target)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}