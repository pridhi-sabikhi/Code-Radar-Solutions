#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main()
{
    int n, a,b;
    int min=INT_MAX;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //if array has only 1 element then ans is -1 
    if(n==1)
    {
        printf("-1");
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int diff= arr[i]-arr[j];
            if(abs(diff)<min)
            {
                a=arr[i];
                b=arr[j];                
            }
        }
    }
    if(a<b)
    {
        printf("%d %d", a,b);
    }
    else
    {
        printf("%d %d", b,a);
    }
    return 0;
}