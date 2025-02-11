#include <stdio.h>
int main() {
    int N, start=0;
    scanf("%d", &N);
    for(int row=0; row<N;row++)
    {
     for(int col=0;col<row+1;col++)
     {
        printf("%d ",start);
        if(start==0)
        start=1;
        else
        start=0;
     }   
     printf("\n");
    }
    return 0;
}