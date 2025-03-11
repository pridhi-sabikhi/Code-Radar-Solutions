//k times minimum wala loop chlao
#include <limits.h>
int mini(int arr[], int n)
{
    int brr[n]=int arr[n];
    int min=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(min<brr[i])
        {
            min=brr[i];
        }
    }
    return min;
}
int kthsmallest(int arr[], int n, int k)
{
    for(int i=1; i<=k; i++)
    {
        int ans=mini(arr,n);        
    }
     printf("%d", ans);
}