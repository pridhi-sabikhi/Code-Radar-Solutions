#include<stdio.h>
int check(int arr[], int n)
{
    int pali=0;
    for( int i=0; i<n; i++)
    {
        int num=arr[i];
        int rev=0, r=0;
        while(num>0)
        {
            r=num%10;
            rev=rev*10+r;
            num=num/10;
        }
        if(rev==arr[i])
        pali++;
    }
    return pali;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n; i++)
    {
        scanf("%d", &n);
    }
    int ans=check(arr, n);
    printf("%d", ans);
    return 0;
}