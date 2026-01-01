#include <stdio.h>

int main(){

    //items
    char item[50] = "";
    float price = 0;
    int quantity = 0;

    printf("what item would you like to buy?\n");
    fgets(item, sizeof(item), stdin);
    printf("What is the price?\n");
    scanf("%f", &price);
    printf("how many?\n");
    scanf("%f", &quantity);

    
    printf("/////receipt/////\n");
    printf("item | price | quantity\n");
    printf("%s | %.2f | %i\n", item, price, quantity);
    printf("your total is: %.2f", price * quantity);
    printf("press any button to continue");
    fgets(item, sizeof(item), stdin);

    return 0;
}