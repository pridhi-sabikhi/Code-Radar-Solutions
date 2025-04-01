#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int row=0; row<n; row++)
    {
         for(int col=0; col<2*row+1; col++){
if(col%2==0)
printf("%d"row+1);
else
printf("*");      
}
      printf("\n");
    }
    //   for(int col=0; col<n-row; col++){
    //     printf("* ");
    //   }
    //   printf("\n");
    // }
        return 0;
}