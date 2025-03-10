int findOccurrence(int arr[], int n, int target, char mode)
{
    int k=-1;
    for(int i=0; i<n; i++)
    {
        if(mode=='F')
        {
            if(arr[i]==target)
            {
            k=i;
            return k;
            } 
        }
        else
        {
            if(arr[i]==target)
            {
            k=i;
            }

        }
    }
    return k;
}