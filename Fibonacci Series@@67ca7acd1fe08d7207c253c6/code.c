int fibo(int num)
{
    if(num==0)
    {
    return 0;
    }
    else if(num==1)
    {
    return 1;
    }
    else
    {
    return fibo(num-1)+fibo(num-2);
    }
}
int fibonacciSeries(int n)
{
    for(int i=0; i<n; i++)
    {
        int ans=fibo(i);
        printf("%d ", ans);
    }
    return 0;
}