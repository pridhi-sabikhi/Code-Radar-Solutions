#include <stdio.h>
int main() {
    int N, start=1;
    scanf("%d", &N);
    for(int row=0; row<N;row++)
    {
     for(int col=0;col<row+1;col++)
     {
        printf("%d ",start);
        if(start==1)
        start=0;
        else
        start=1;
     }   
     printf("\n");
    }
    return 0;
}