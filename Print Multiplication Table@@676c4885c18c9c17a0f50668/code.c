#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int i=1; i<=10; i++)
    {
        printf("%d x %d = %d \n", N,i, (N*i));//jaisa expected o/p hai vaisa hi printf mein likho
    }
    return 0;
}c