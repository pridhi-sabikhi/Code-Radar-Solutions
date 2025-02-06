#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<n-row-1; col++)
        {
            printf(" ");
        }
        for(int col=0; col<2*row+1; col++)
        {
            printf("*");// here no space after * bcz pehle for loop ses space print ki so ab agr space lgai toh error
            //jis Q mein spaces print krne ke liye alg se for loop lge usmein not put space with * vrna put
        }
        printf("\n");
    }

    return 0;
}