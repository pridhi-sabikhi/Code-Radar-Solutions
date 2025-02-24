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
    int k;
    scanf("%d", &k);
    //n is 5
    //4th index is going to 1st i.e 5-4 index
    for(int i=0; i<n-2; i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i]=temp;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}