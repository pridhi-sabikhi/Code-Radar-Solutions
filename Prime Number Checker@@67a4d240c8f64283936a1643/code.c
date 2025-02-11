#include <stdio.h>
int isPrime(int num)
{
    int c=0;
    for (int i=2; i<=num/2; ++i)
    {
        if(num%i==0)
        c++;
    }
    if(c==2)
    return 1;
    else 
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    
}