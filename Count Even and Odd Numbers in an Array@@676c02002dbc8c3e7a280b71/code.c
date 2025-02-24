#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ce=0, ce=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        ce++;
        else
        co++;
    }
    printf("%d %d", ce, co);
    return 0;
}