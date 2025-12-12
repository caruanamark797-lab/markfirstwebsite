#include <stdio.h>

int main() {
    
    float bill, discount = 0, total;
    
    printf("enter total bill: ");
    scanf("%f", &bill);
    
    if (bill >= 1000) {
        discount = bill * 0.10;
    }else if (bill >= 500) {
        discount = bill * 0.05;
    }else if (bill < 500) {
        printf("\n no discount!!");
    }
    
    total = bill - discount;
    
    printf("\n your total bill: %f", bill);
    printf("\n your discount: %f", discount);
    printf("\n discounted bill: %f", total);
    
    return 0;
}
