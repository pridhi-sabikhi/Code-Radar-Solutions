//find if no. is greater than its neighbors
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    //first input n then declare array
    int arr[n];
    for(int i=0; i<n; i++)//start from 0 vrna  error aa rha hai
    {
        scanf("%d", &arr[i]);
    }
    for(int i=1; i<n; i++)//start from 1 bcz 0 kiya toh can't check i-1, n-1 bcz for last index  i+1 index hoga hi nhi
    {
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
        {
        printf("%d", arr[i]);
        return 0;
        }

    }
    printf("-1"); //if no peak element
    return 0;
}