#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, c=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //sorting array
    qsort(arr, n, sizeof(int), compare);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
        if(arr[i]==arr[j])
        c++;
        }
    }
    printf("%d %d", arr[i], c);
    return 0;
}