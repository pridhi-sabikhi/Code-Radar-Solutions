//binary search
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
    for(int i=0; i<n; i++)
    {
        if(arr[i]==k)
        {
            printf("%d", i);
            return 0;//this will return the first occurence then exit 
        }
    }
    //not found
    printf("-1");
    return 0;
}