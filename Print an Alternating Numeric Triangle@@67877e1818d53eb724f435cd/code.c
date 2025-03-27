#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int row = 0; row < n; row++) 
    {        
        for (int col = 0; col < row+1; col++) 
        {           
            if ((row + col) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
