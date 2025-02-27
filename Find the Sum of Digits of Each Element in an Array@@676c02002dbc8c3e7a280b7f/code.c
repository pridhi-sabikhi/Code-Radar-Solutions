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
    for(int i=0; i<n; i++)
    {
        int sum=0, r=0; //for each element sum ki value 0 kro
        int num=arr[i];
        while(num>0)
        {
            r= n%10;
            sum + =r;
            n / =10;
        }
        printf("%d ", sum);
    }
    return 0;
}