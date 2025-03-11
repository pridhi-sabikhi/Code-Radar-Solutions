int fibonacciSeries(int n)
{
    for(int i=0; i<n; i++)
    {
        if(i==0)
        printf("%d ", i);
        else if(i==1)
        printf("%d", i);
        else
        printf("%d", (i-1)+(i-2));
    }
    return 0;
}