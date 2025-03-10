int isPrime(int n)
{
    int c=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    return 1; //if mein 1 jayega w/m condition true if 0 gya w/m condition false
    else
    return 0;
}
int printPrimesInRange(int a, int b)
{
    int k=0;
    for(int n=a; n<=b; n++)
    {
    if(isPrime(n))
    {
        k++;
    printf("%d ", n);
    }
    }
    if(k==0)
    {
        printf("No prime numbers");
    }
    return 0;
}