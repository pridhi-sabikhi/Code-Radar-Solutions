#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<2*row+1; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}