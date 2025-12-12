#include <stdio.h>

int main()
{
    
    int amountWithraw, amountDeposit, balance;
    char transaction;
    
    printf("enter your balance: ");
    scanf("%d", &balance);
    
    printf("choose a transaction (W, D, B): ");
    scanf(" %c", &transaction);
    
    if (transaction == 'W') {
        printf("how much do u want to withraw: ");
        scanf("%d", &amountWithraw);
        if (balance < amountWithraw) {
            printf("error transaction!!!");
        }else {
            int total = balance - amountWithraw;
            printf("total withraw: %d", total);
        }
    }else if (transaction == 'D') {
        printf("how much do u want to withraw: ");
        scanf("%d", &amountDeposit);
        int total = balance + amountDeposit;
        printf("total deposit: %d", total);
    }else if (transaction == 'B') {
        printf("your balance is: %d", balance);
    }
    
    return 0;
}
