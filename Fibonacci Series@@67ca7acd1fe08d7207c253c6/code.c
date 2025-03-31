#include <stdio.h>
// int fibo(int num)
// {
//     if(num==0)
//     {
//     return 0;
//     }
//     else if(num==1)
//     {
//     return 1;
//     }
//     else
//     {
//     return fibo(num-1)+fibo(num-2);
//     }
// }
// int fibonacciSeries(int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         int ans=fibo(i);
//         printf("%d ", ans);
//     }
//     return 0;
// }
//or
int fibonacciSeries(int n)
{
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    if(n==1)
    {
        printf("%d", arr[0]);
        return 0;
    }
    else if(n==2)
    {
        printf("%d %d", arr[0], arr[1]);
        return 0;
    }
    else
    {
        printf("%d %d ", arr[0], arr[1]);
    
    for(int i=2; i<n; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
        printf("%d ", arr[i]);
    }
    }
}