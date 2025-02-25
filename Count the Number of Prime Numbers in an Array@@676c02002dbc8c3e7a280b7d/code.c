#include<stdio.h>
int main()
{
    int n, c=0, prime=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)//for array elements
    {
        for(int j=0; j<=n; j++)
        {
        if(arr[i]%j==0)
        c++;
        }
        if(c>2)//w/m it is prime no. 
        prime++;
    }
    printf("%d", prime);
    return 0;
}