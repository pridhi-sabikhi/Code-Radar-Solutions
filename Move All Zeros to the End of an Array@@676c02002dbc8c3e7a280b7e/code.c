#include<stdio.h>
int new_array(int arr[], int n)
{
    int end=n-1;
    for(int i=0; i<end; i++)//less than end taaki end wali 0s ko na chede
    {
        if (arr[i]==0)
        {
            int temp=arr[i];
            arr[i]=arr[end];
            arr[end]=temp;
            end--;//end piche jaayega
        }
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