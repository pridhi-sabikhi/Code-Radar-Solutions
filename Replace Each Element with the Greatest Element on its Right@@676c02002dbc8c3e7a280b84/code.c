#include <stdio.h>
#include<limits.h>
int new_arr(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int maxi=INT_MIN;
        if(i==n-1)
        {
            arr[n-1]=-1;
        }
        else//isko else mein daalo after making last -1 phir se max nikalne lg jaate hai 
        {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]>maxi)
            {
                maxi=arr[j];
            }
        }
        arr[i]=maxi;
    }
    }
}
int print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    new_arr(arr, n);
    print(arr, n);
}