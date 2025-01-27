#include <stdio.h>
int main() {
    int cost_price, selling_price;
    scanf("%d %d", &cost_price, &selling_price); //given ke int lo
    if (selling_price > cost_price){
        printf("Profit");
    }
    else if (cost_price > selling_price){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
}