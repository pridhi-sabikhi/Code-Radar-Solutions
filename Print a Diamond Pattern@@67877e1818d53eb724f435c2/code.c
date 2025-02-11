#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    //upper half till longest line
    for(int row=0; row<N; row++)
    {
        for(int col=0; col<n-row-1; col++)
        {
            printf(" ");
        }
        for(int col=0; col<row+1; col++)
        {
            printf("*"); //no need to print space before forward spaces are printed
        }
        printf("\n");
    }
    //lower half rows=3 but print only 2
    return 0;
}