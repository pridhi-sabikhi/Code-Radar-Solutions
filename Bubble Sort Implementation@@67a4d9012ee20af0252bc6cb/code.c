int bubbleSort(int arr[], int n)
{
    for(int rotation=0; rotation<n-1; rotation++)
    {
    for(int i=0; i<n-i-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    }
    return arr[n];
}

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}