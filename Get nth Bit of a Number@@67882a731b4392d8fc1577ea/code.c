#include <stdio.h>
int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    //checking nth bit is set or not 
    int bit_value=(num >> n) & 1;
    printf("%d\n", bit_value);
    return 0;
}