#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    printf("enter num: ");
    scanf("%d", &num1);
    
    printf("enter num: ");
    scanf("%d", &num2);
    
    printf("enter num: ");
    scanf("%d", &num3);
    
    if (num1 > num2) {
        printf("ta largest num is: %d", num1);
    }else if (num2 > num3) {
        printf("ta largest num is: %d", num2);
    }else if (num3 > num2) {
        printf("ta largest num is: %d", num3);
    }

    return 0;
}
