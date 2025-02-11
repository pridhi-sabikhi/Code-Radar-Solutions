#include<stdio.h>
int main()
{
    int N; //not put 2 spaces in int and N it will cause error
    scanf("%d", &N);
    for(int row=0;row<N;row++)
    {
        for(int col=0; col<N-row-1; col++)
        {
            print(" ");
        }
        for(int col=0;col<row+1;col++)
        {
            printf("%d", col+1); //not use a new var start
        }
        printf("\n");
    }
    return 0;
}