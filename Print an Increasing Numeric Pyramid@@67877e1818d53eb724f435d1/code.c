#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int row=0; row<N; row++)
    {
        for(int col=0; col<N-row-1; col++)
        {
            printf(" ");
        }
        for(int col=0;col<row+1;col++)
        {
            printf("%d ", col+1);//we want to print 1 at col 0 with space 
        }
        printf("\n");
    }
    return 0;
}