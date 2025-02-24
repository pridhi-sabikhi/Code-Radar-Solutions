#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    //first input n then declare array
    int arr[n];
    for(int i=1; i<n; i++)//start from 1 bcz we already used arr[0]
    {
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
        max=arr[i];
        }
       if(arr[i]<min)
       {
        min=arr[i];
       } 
    }
    printf("%d %d\n", min, max);
    return 0;
}