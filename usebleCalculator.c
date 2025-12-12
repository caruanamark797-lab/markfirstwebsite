#include <stdio.h>

int main()
{
    
    int num1, num2;
    char op;
    
    printf("\n Please enter your first number: ");
    scanf("%d", &num1);
    
    
    printf("\n Please enter operators (+, *, -, /): ");
    scanf(" %c", &op);
    
    
    printf("\n Please enter your second number: ");
    scanf("%d", &num2);
    
    if (op == '+') {
        printf("\n the answer: %d", num1 + num2);
    } else if (op == '*') {
        printf("\n the answer: %d", num1 * num2);
    }else if (op == '-') {
        printf("\n the answer: %d", num1 - num2);
    }else if (op == '/') {
        if (num2 == 0) {
            printf("\n division by 0");
        }else if (num1 < num2) {
                printf("can't be devided!!");
        }else {
            printf("\n the answer: %d", num1 / num2);
        }
    }
    
    
    
    
    

    return 0;
}
