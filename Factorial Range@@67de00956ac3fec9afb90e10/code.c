#include <stdio.h>
int factorialRange(int start, int end)
{
    if(start>end|| start<0 || end<0)
    {
        printf("Invalid range");
        return 0;
    }
    for(int n=start; n<=end; n++)
    {
        int f=1; 
        for(int i=1; i<=n; i++)
        {
            f=f*i;
        }
        printf("%d", f);
    }
    return 0;
}