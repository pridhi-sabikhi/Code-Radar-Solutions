#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n-1; i++) //n-1 bcz last index ke liye arr[n] check hoga which is garbage value so vo glt ho jayega 
    {
        if(arr[i]>arr[i+1])
        {
        printf("Not Sorted");
        return 0;
        }
    }
    printf("Sorted");
    return 0;
}