#include <stdio.h>

int main()
{
    float meter, nanometer = 0, decimeter = 0, mile = 0, micrometer = 0, centimeter = 0,
    millimeter = 0, kilometer = 0, inch = 0, feet = 0, yard = 0;
    int meterConversion;
    int attemt = 0;
    
    while (1) {
    
    printf("\n");
    printf("\n welcome to my meter converion!! \n");
    printf("\n enter a meter: ");
    scanf("%f", &meter);
    
    printf("\n choices of meter convertion \n");
    printf("\n 1. inch \n");
    printf("\n 2. mile \n");
    printf("\n 3. yard \n");
    printf("\n 4. feet \n");
    printf("\n 5. kilometer \n");
    printf("\n 6. millimeter \n");
    printf("\n 7. centimeter \n");
    printf("\n 8. micrometer \n");
    printf("\n 9. decimeter \n");
    printf("\n 10. nanometer \n");

    printf("\n enter what do you want to convert a meter: ");
    scanf("%d", &meterConversion);

    switch (meterConversion) {
        case 9: 
        decimeter = meter * 10;
        printf("\n the value of meter in decimeter is %.2f", decimeter);
        break;
        
        case 10: 
        nanometer = meter * 1000000000;
        printf("\n the value of meter in decimeter is %.2f", nanometer);
        break;
        
        case 7: 
        centimeter = meter * 100;
        printf("\n the value of meter in decimeter is %.2f", centimeter);
        break;
        
        case 8: 
        micrometer = meter * 1000000;
        printf("\n the value of meter in decimeter is %.2f", micrometer);
        break;
        
        case 2: 
        mile = meter / 1609;
        printf("\n the value of meter in decimeter is %.2f", mile);
        break;
        
        case 3: 
        yard = meter * 1.094;
        printf("\n the value of meter in decimeter is %.2f", yard);
        break;
        
        case 4: 
        feet = meter * 3.281;
        printf("\n the value of meter in decimeter is %.2f", feet);
        break;
        
        case 1: 
        inch = meter * 39.37;
        printf("\n the value of meter in decimeter is %.2f", inch);
        break;
        
        case 5: 
        kilometer = meter / 1000;
        printf("\n the value of meter in decimeter is %.2f", kilometer);
        break;
        
        case 6: 
        millimeter = meter * 1000;
        printf("\n the value of meter in decimeter is %.2f", millimeter);
        break;
    }
    attemt++; 
}

    if (attemt == 10) {
        printf("\n opss to more attemts!!");
    }

    return 0;
}
