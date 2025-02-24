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
    if(arr[1]>arr[2] && arr[1]>arr[0])
    printf("%d", arr[1]);
    else if(arr[0]>arr[2] && arr[0]>arr[1])
    printf("%d", arr[0]);
    else if(arr[2]>arr[1] && arr[2]>arr[0])
    printf("%d", arr[2]);
    else
    printf("-1");
    return 0;
}