#include <stdio.h>
int isPrime(int num)
{
    int c=0,ans;
    for (int i=1; i<=num; i++)
    {
        if(num%i==0)
        c++;
    }
    if(c==2)
    return ans;
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}