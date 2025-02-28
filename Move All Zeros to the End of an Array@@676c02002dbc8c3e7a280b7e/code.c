#include<stdio.h>
int new_array(int arr[], int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if (arr[i]!=0)
        {
            arr[count++]=arr[i];// i.e startint pr vo element daaldo
        }
    }
    //now  fill remaining indexes with 0s
    while(count<n)
    {
        arr[count++]=0;
    }
}
int print(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    new_array(arr,n);
    print(arr,n);
    return 0;
}