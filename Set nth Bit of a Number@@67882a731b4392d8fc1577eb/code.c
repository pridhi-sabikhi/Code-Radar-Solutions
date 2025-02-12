#include <stdio.h>
int main() {
    int num, n;

    // Input: the number and the bit position
    scanf("%d %d", &num, &n);

    num = num | (1 << n); //1 << n makes nth bit 1 then | se if nth bit was 0 then | krke make it 1 
    //if it was 1 then | krke remain as 1

    printf("%d\n",num);

    return 0;
}

