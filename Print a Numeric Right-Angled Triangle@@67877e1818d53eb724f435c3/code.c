// Your code here...
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for(int row=0; row<N; row++)
    {
        for(int col=0;col<row+1;col++)
        {
            printf("%d", col+1);
        }
        printf("\n");
    }
    return 0;
}