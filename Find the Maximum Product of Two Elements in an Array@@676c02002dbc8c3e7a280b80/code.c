#include<stdio.h>
#include<limits.h>
int product(int arr[], int n)
{
    int maxi=INT_MIN;
    for( int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
        if((arr[i]*arr[j])> maxi)
        {
            maxi=arr[i]*arr[j];
        }
        }
    }
    return maxi;
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
    int ans=product(arr, n);
    printf("%d", ans);
    return 0;
}