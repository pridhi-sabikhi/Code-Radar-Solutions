#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int row=0; row<N; row++)
    {
        for(int col=0;col<N-row-1; col++)
        {
            printf(" ");
        }
        //for printing forward no.s
        for(int col=0; col<row+1; col++)
        {
            printf("%d", (col+1));
        }
        //printing reverse triangle
        for(int col=0;col<row;col++)
        {
            printf("%d", (col+1));
        }
        printf("\n");
    }
    return 0;
}