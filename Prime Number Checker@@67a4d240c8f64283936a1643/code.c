#include <stdio.h>
int isPrime(num)
{
    int c=0;
    for (int i=1; i<=num; i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    return ans;
}
int main()
{
    int t;
    scanf("%d", &t);
    white(t--)
    {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}