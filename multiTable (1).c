#include <stdio.h>

int main()
{
    
    int i, multi, sum;
    
    printf("enter num: ");
    scanf("%d", &i);
    
    printf("enter num: ");
    scanf("%d", &multi);
    
    for (i; i <= multi; i++) {
        for (int j = 1; j <= 10; j++) {
            sum = i * j;
            printf("%d * %d = %d\n", i, j, sum);
            if (j == 10) {
                printf("\n");
            }
        }
    }

    return 0;
}
