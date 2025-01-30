#include <stdio.h>
int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    //checking nth bit is set or not 
    int bit_value=(num >> n) & 1;//full used to exttract nth bit
    //num>>n shifts the nth bit to the LSB ,  &1 EXTRACTS ONLY LSB
    printf("%d\n", bit_value);
    return 0;
}