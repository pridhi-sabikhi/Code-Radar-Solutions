#include<stdio.h>
#include<limits.h>
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
    int max=INT_MIN;
    int min=INT_MAX;
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