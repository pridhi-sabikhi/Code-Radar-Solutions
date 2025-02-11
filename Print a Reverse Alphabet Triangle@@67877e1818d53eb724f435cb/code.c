#include <stdio.h.
int main()
{
    int N;
    char start;
    scanf("%d", &N);
    for(int row=0; row<N;row++)
    {
        start='A'
        for(int col=0; col<N-row;col++)
        {
            printf("%c ",start);
            start++;
        }
        printf("\n");
    }
    return 0;
}