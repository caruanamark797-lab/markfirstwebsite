#include <stdio.h>

int main()
{
    
    int temp;
    
    printf("enter temperature: ");
    scanf("%d", &temp);
    
    float fahrenheit = (temp * 9/5) + 32;
    
    printf("the temperature is %d the fahrenheit is %f",temp, fahrenheit);

    return 0;
}
