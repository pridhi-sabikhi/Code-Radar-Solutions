#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int new_n=~(n);// n=~(n);  then printf ("%d", n);
    printf("%d", new_n);
    return 0;
}