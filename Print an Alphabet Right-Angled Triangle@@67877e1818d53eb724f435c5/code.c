#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    char start;
    for(int row=0; row<N; row++)
    {
        start='A';
        for(int col=0; col<row+1; col++)
        {
            printf("%c ", start);
            start++;
        }
        printf("\n");
    }
    return 0;
}