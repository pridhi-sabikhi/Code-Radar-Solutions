#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    //upper half till longest line
    for(int row=0; row<N; row++)
    {
        for(int col=0; col<N-row-1; col++)
        {
            printf(" ");
        }
        for(int col=0; col<2*row+1; col++)
        {
            printf("*"); //no need to print space before forward spaces are printed
        }
        printf("\n");
    }
    //lower half rows=3 but print only 2 skip 1st and longest row
    for(int row=0; row<N; row++)
    {
        if(!(row==0))
        {
        for(int col=0; col<row;col++)
        {
            printf(" ");
        }
        for(int col=0; col<(2*N)-row-2; col++)
        {
            printf("*");
        }
        printf("\n");
        }
    else
    {
        continue;
    }
    }
    return 0;
}