#include<stdio.h>
int main()
{
    int N; //not put 2 spaces in int and N it will not cause error but don't do
    scanf("%d", &N);
    for(int row=0;row<N;row++)
    {
        //int start=1;
        for(int col=0; col<N-row-1; col++)
        {
            printf(" ");
        }
        //can do using start also but not do 
        // for(int col=0; col<row+1; col++)
        // {
        //     printf("%d ",start);
        //     start++;
        // }
        for(int col=0;col<row+1;col++)
        {
            printf("%d ", col+1); //not use a new var start
        }
        printf("\n");
    }
    return 0;
}