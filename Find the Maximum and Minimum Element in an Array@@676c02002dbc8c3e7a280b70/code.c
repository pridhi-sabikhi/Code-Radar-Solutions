#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    //first input n then declare array
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<n; i++)
    {
        if(max>arr[i])
        {
        max=arr[i];
        }
        else
        {
        min=arr[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}