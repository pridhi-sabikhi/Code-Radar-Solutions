#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int row=0; row<N; row++)
    {
        for(int col=0; col<N; col++)
        {
            printf("* "); //since no space xtra print so space with *
        }
        printf("\n");
    }
    return 0;
}