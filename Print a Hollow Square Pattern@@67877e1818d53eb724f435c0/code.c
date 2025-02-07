#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int row=0; row<N;row++)
    {
        for(int col=0; col<N;col++)
        {
            if(row==0||row==N-1)
            {
                printf("*"); //since printing spaces alag se so not put space with *
            }
            else
            {
                if(col==0||col==N-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}