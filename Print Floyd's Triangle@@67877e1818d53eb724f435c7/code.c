// Your code here...
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int start=1;
    for(int row=0; row<N;row++)
    {
        for(int col=0; col<row+1;col++)
        {
            printf("%d", start);
            start++;
        }
        printf("\n");
    }


}