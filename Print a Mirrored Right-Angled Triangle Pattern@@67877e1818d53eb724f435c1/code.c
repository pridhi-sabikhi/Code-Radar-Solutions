#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int row=0; row<N; row++)
    {
        for(int col=0; col<n-row; col++)
        {
            printf(" ");
        }
        for(int col=0;col<row+1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}