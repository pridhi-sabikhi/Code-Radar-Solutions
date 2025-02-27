#include<stdio.h>
int main()
{
    int n, k, c=0;
    scanf("%d", &n);
    int arr[n];
    k=n/2;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c>k)
        {
            printf("%d", arr[i]);
            return 0;
        }
    }
    //full mein aisa koi nhi mila
    printf("-1");
    return 0;
}